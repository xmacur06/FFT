--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   01:27:03 04/01/2017
-- Design Name:   
-- Module Name:   C:/Users/JM/Xilinx/Projekty/FFT/SOURCES/TB_ALU_convert.vhd
-- Project Name:  FFT
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ALU_convert
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TB_ALU_convert IS
END TB_ALU_convert;
 
ARCHITECTURE behavior OF TB_ALU_convert IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ALU_convert
    PORT(
         clk : IN  std_logic;
         real_in : IN  std_logic_vector(30 downto 0);
         imag_in : IN  std_logic_vector(30 downto 0);
         magnitude_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal real_in : std_logic_vector(30 downto 0) := (others => '0');
   signal imag_in : std_logic_vector(30 downto 0) := (others => '0');

 	--Outputs
   signal magnitude_out : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ALU_convert 
   PORT MAP (
          clk => clk,
          real_in => real_in,
          imag_in => imag_in,
          magnitude_out => magnitude_out
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;
      real_in <= "1000010000100000010000000000001";
      imag_in <= "0111111100011111111111110011111";
      wait for 20 ns;
      real_in <= "1100010000100000010011100000001";
      imag_in <= "0101111100011111110000010011111";
      wait for 30 ns;
      real_in <= "1000000000000000000000000000000";
      imag_in <= "0111111111111111111111111111111";

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
