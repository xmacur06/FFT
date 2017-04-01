
-- VHDL Instantiation Created from source file ALU_convert.vhd -- 02:03:17 04/01/2017
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT ALU_convert
	PORT(
		clk : IN std_logic;
		real_in : IN std_logic_vector(30 downto 0);
		imag_in : IN std_logic_vector(30 downto 0);          
		magnitude_out : OUT std_logic_vector(16 downto 0)
		);
	END COMPONENT;

	Inst_ALU_convert: ALU_convert PORT MAP(
		clk => ,
		real_in => ,
		imag_in => ,
		magnitude_out => 
	);


