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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU_convert is
    Port ( clk : in  STD_LOGIC;
           real_in : in  STD_LOGIC_VECTOR (30 downto 0);
           imag_in : in  STD_LOGIC_VECTOR (30 downto 0);
           magnitude_out : out  STD_LOGIC_VECTOR (16 downto 0));
end ALU_convert;

architecture Behavioral of ALU_convert is

begin


end Behavioral;

