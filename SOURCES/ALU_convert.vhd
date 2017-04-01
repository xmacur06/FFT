----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:07:22 04/01/2017 
-- Design Name: 
-- Module Name:    ALU_convert - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU_convert is
    generic (
           constant N                 : positive := 32768
            );
    Port ( clk                        : in   STD_LOGIC;
           real_in                    : in   STD_LOGIC_VECTOR (30 downto 0);
           imag_in                    : in   STD_LOGIC_VECTOR (30 downto 0);
           magnitude_out              : out  STD_LOGIC_VECTOR (15 downto 0));
end ALU_convert;

architecture Behavioral of ALU_convert is
signal real_math_in, imag_math_in     : SIGNED(30 downto 0);
signal real_math_out, imag_math_out   : SIGNED(61 downto 0);
signal real_unsig, imag_unsig         : UNSIGNED(14 downto 0);
signal real_exp, imag_exp             : UNSIGNED(29 downto 0);
signal abs_exp                        : STD_LOGIC_VECTOR(30 downto 0);
signal temp_exp                       : UNSIGNED(30 downto 0)  := (others => '0');
signal temp                           : SIGNED(61 downto 0)  := (others => '0');

------------- Begin Cut here for COMPONENT Declaration ------ COMP_TAG
COMPONENT CORDIC_sqrt
  PORT (
    x_in  : IN STD_LOGIC_VECTOR(30 DOWNTO 0);
    x_out : OUT STD_LOGIC_VECTOR(15 DOWNTO 0);
    rdy   : OUT STD_LOGIC;
    clk   : IN STD_LOGIC;
    ce    : IN STD_LOGIC
  );
END COMPONENT;
-- COMP_TAG_END ------ End COMPONENT Declaration ------------


begin
  real_math_in <= SIGNED(real_in)/N;
  imag_math_in <= SIGNED(imag_in)/N;
  
  process(clk) begin
    if rising_edge(clk) then
      if real_math_in(30) = '1' then
        real_math_out <= real_math_in*(-1);
      else
        real_math_out <= temp+real_math_in;
      end if;
      
      if imag_math_in(30) = '1' then
        imag_math_out <= imag_math_in*(-1);
      else
        imag_math_out <= temp+imag_math_in;
      end if;
      
      real_unsig <= UNSIGNED(real_math_out(14 downto 0));
      imag_unsig <= UNSIGNED(imag_math_out(14 downto 0));
    end if;
  end process;

  process(clk) begin
    if rising_edge(clk) then
      real_exp <= real_unsig*real_unsig;
      imag_exp <= imag_unsig*imag_unsig;
      abs_exp  <= STD_LOGIC_VECTOR(temp_exp+imag_exp + real_exp);
    end if;
  end process;
      
------------- Begin Cut here for INSTANTIATION Template ----- INST_TAG
your_instance_name : CORDIC_sqrt
  PORT MAP (
    x_in  => abs_exp,
    x_out => magnitude_out,
    rdy   => OPEN,
    clk   => clk,
    ce    => '1'
  );
-- INST_TAG_END ------ End INSTANTIATION Template ------------

end Behavioral;

