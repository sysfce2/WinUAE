M68_OPTABLE_ENT m68hc05_optable[256] = {
	{ "BRSET", AMODE_DIRECT_REL, 5, false, &m68op_BRSET },
	{ "BRCLR", AMODE_DIRECT_REL, 5, false, &m68op_BRCLR },
	{ "BRSET", AMODE_DIRECT_REL, 5, false, &m68op_BRSET },
	{ "BRCLR", AMODE_DIRECT_REL, 5, false, &m68op_BRCLR },
	{ "BRSET", AMODE_DIRECT_REL, 5, false, &m68op_BRSET },
	{ "BRCLR", AMODE_DIRECT_REL, 5, false, &m68op_BRCLR },
	{ "BRSET", AMODE_DIRECT_REL, 5, false, &m68op_BRSET },
	{ "BRCLR", AMODE_DIRECT_REL, 5, false, &m68op_BRCLR },
	{ "BRSET", AMODE_DIRECT_REL, 5, false, &m68op_BRSET },
	{ "BRCLR", AMODE_DIRECT_REL, 5, false, &m68op_BRCLR },
	{ "BRSET", AMODE_DIRECT_REL, 5, false, &m68op_BRSET },
	{ "BRCLR", AMODE_DIRECT_REL, 5, false, &m68op_BRCLR },
	{ "BRSET", AMODE_DIRECT_REL, 5, false, &m68op_BRSET },
	{ "BRCLR", AMODE_DIRECT_REL, 5, false, &m68op_BRCLR },
	{ "BRSET", AMODE_DIRECT_REL, 5, false, &m68op_BRSET },
	{ "BRCLR", AMODE_DIRECT_REL, 5, false, &m68op_BRCLR },
	{ "BSET", AMODE_DIRECT, 5, false, &m68op_BSET },
	{ "BCLR", AMODE_DIRECT, 5, false, &m68op_BCLR },
	{ "BSET", AMODE_DIRECT, 5, false, &m68op_BSET },
	{ "BCLR", AMODE_DIRECT, 5, false, &m68op_BCLR },
	{ "BSET", AMODE_DIRECT, 5, false, &m68op_BSET },
	{ "BCLR", AMODE_DIRECT, 5, false, &m68op_BCLR },
	{ "BSET", AMODE_DIRECT, 5, false, &m68op_BSET },
	{ "BCLR", AMODE_DIRECT, 5, false, &m68op_BCLR },
	{ "BSET", AMODE_DIRECT, 5, false, &m68op_BSET },
	{ "BCLR", AMODE_DIRECT, 5, false, &m68op_BCLR },
	{ "BSET", AMODE_DIRECT, 5, false, &m68op_BSET },
	{ "BCLR", AMODE_DIRECT, 5, false, &m68op_BCLR },
	{ "BSET", AMODE_DIRECT, 5, false, &m68op_BSET },
	{ "BCLR", AMODE_DIRECT, 5, false, &m68op_BCLR },
	{ "BSET", AMODE_DIRECT, 5, false, &m68op_BSET },
	{ "BCLR", AMODE_DIRECT, 5, false, &m68op_BCLR },
	{ "BRA", AMODE_RELATIVE, 3, false, &m68op_BRA },
	{ "BRN", AMODE_RELATIVE, 3, false, &m68op_BRN },
	{ "BHI", AMODE_RELATIVE, 3, false, &m68op_BHI },
	{ "BLS", AMODE_RELATIVE, 3, false, &m68op_BLS },
	{ "BCC", AMODE_RELATIVE, 3, false, &m68op_BCC },
	{ "BCS", AMODE_RELATIVE, 3, false, &m68op_BCS },
	{ "BNE", AMODE_RELATIVE, 3, false, &m68op_BNE },
	{ "BEQ", AMODE_RELATIVE, 3, false, &m68op_BEQ },
	{ "BHCC", AMODE_RELATIVE, 3, false, &m68op_BHCC },
	{ "BHCS", AMODE_RELATIVE, 3, false, &m68op_BHCS },
	{ "BPL", AMODE_RELATIVE, 3, false, &m68op_BPL },
	{ "BMI", AMODE_RELATIVE, 3, false, &m68op_BMI },
	{ "BMC", AMODE_RELATIVE, 3, false, &m68op_BMC },
	{ "BMS", AMODE_RELATIVE, 3, false, &m68op_BMS },
	{ "BIL", AMODE_RELATIVE, 3, false, &m68op_BIL },
	{ "BIH", AMODE_RELATIVE, 3, false, &m68op_BIH },
	{ "NEG", AMODE_DIRECT, 5, false, &m68op_NEG },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "COM", AMODE_DIRECT, 5, false, &m68op_COM },
	{ "LSR", AMODE_DIRECT, 5, false, &m68op_LSR },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ROR", AMODE_DIRECT, 5, false, &m68op_ROR },
	{ "ASR", AMODE_DIRECT, 5, false, &m68op_ASR },
	{ "ASL", AMODE_DIRECT, 5, false, &m68op_ASL },
	{ "ROL", AMODE_DIRECT, 5, false, &m68op_ROL },
	{ "DEC", AMODE_DIRECT, 5, false, &m68op_DEC },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "INC", AMODE_DIRECT, 5, false, &m68op_INC },
	{ "TST", AMODE_DIRECT, 4, false, &m68op_TST },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "CLR", AMODE_DIRECT, 5, true, &m68op_CLR },
	{ "NEGA", AMODE_INHERENT_A, 3, false, &m68op_NEG },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "MUL", AMODE_INHERENT, 11, false, &m68op_MUL },
	{ "COMA", AMODE_INHERENT_A, 3, false, &m68op_COM },
	{ "LSRA", AMODE_INHERENT_A, 3, false, &m68op_LSR },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "RORA", AMODE_INHERENT_A, 3, false, &m68op_ROR },
	{ "ASRA", AMODE_INHERENT_A, 3, false, &m68op_ASR },
	{ "ASLA", AMODE_INHERENT_A, 3, false, &m68op_ASL },
	{ "ROLA", AMODE_INHERENT_A, 3, false, &m68op_ROL },
	{ "DECA", AMODE_INHERENT_A, 3, false, &m68op_DEC },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "INCA", AMODE_INHERENT_A, 3, false, &m68op_INC },
	{ "TSTA", AMODE_INHERENT_A, 3, false, &m68op_TST },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "CLRA", AMODE_INHERENT_A, 3, true, &m68op_CLR },
	{ "NEGX", AMODE_INHERENT_X, 3, false, &m68op_NEG },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "COMX", AMODE_INHERENT_X, 3, false, &m68op_COM },
	{ "LSRX", AMODE_INHERENT_X, 3, false, &m68op_LSR },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "RORX", AMODE_INHERENT_X, 3, false, &m68op_ROR },
	{ "ASRX", AMODE_INHERENT_X, 3, false, &m68op_ASR },
	{ "ASLX", AMODE_INHERENT_A, 3, false, &m68op_ASL },
	{ "ROLX", AMODE_INHERENT_X, 3, false, &m68op_ROL },
	{ "DECX", AMODE_INHERENT_X, 3, false, &m68op_DEC },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "INCX", AMODE_INHERENT_X, 3, false, &m68op_INC },
	{ "TSTX", AMODE_INHERENT_X, 3, false, &m68op_TST },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "CLRX", AMODE_INHERENT_X, 3, true, &m68op_CLR },
	{ "NEG", AMODE_INDEXED1, 6, false, &m68op_NEG },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "COM", AMODE_INDEXED1, 6, false, &m68op_COM },
	{ "LSR", AMODE_INDEXED1, 6, false, &m68op_LSR },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ROR", AMODE_INDEXED1, 6, false, &m68op_ROR },
	{ "ASR", AMODE_INDEXED1, 6, false, &m68op_ASR },
	{ "ASL", AMODE_INDEXED1, 6, false, &m68op_ASL },
	{ "ROL", AMODE_INDEXED1, 6, false, &m68op_ROL },
	{ "DEC", AMODE_INDEXED1, 6, false, &m68op_DEC },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "INC", AMODE_INDEXED1, 6, false, &m68op_INC },
	{ "TST", AMODE_INDEXED1, 5, false, &m68op_TST },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "CLR", AMODE_INDEXED1, 6, true, &m68op_CLR },
	{ "NEG", AMODE_INDEXED0, 5, false, &m68op_NEG },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "COM", AMODE_INDEXED0, 5, false, &m68op_COM },
	{ "LSR", AMODE_INDEXED0, 5, false, &m68op_LSR },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ROR", AMODE_INDEXED0, 5, false, &m68op_ROR },
	{ "ASR", AMODE_INDEXED0, 5, false, &m68op_ASR },
	{ "ASL", AMODE_INDEXED0, 5, false, &m68op_ASL },
	{ "ROL", AMODE_INDEXED0, 5, false, &m68op_ROL },
	{ "DEC", AMODE_INDEXED0, 5, false, &m68op_DEC },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "INC", AMODE_INDEXED0, 5, false, &m68op_INC },
	{ "TST", AMODE_INDEXED0, 4, false, &m68op_TST },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "CLR", AMODE_INDEXED0, 5, true, &m68op_CLR },
	{ "RTI", AMODE_INHERENT, 9, false, &m68op_RTI },
	{ "RTS", AMODE_INHERENT, 6, false, &m68op_RTS },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "SWI", AMODE_INHERENT, 10, false, &m68op_SWI },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "STOP", AMODE_INHERENT, 2, false, &m68op_STOP },
	{ "WAIT", AMODE_INHERENT, 2, false, &m68op_WAIT },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "TAX", AMODE_INHERENT, 2, false, &m68op_TAX },
	{ "CLC", AMODE_INHERENT, 2, false, &m68op_CLC },
	{ "SEC", AMODE_INHERENT, 2, false, &m68op_SEC },
	{ "CLI", AMODE_INHERENT, 2, false, &m68op_CLI },
	{ "SEI", AMODE_INHERENT, 2, false, &m68op_SEI },
	{ "RSP", AMODE_INHERENT, 2, false, &m68op_RSP },
	{ "NOP", AMODE_INHERENT, 2, false, &m68op_NOP },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "TXA", AMODE_INHERENT, 2, false, &m68op_TXA },
	{ "SUB", AMODE_IMMEDIATE, 2, false, &m68op_SUB },
	{ "CMP", AMODE_IMMEDIATE, 2, false, &m68op_CMP },
	{ "SBC", AMODE_IMMEDIATE, 2, false, &m68op_SBC },
	{ "CPX", AMODE_IMMEDIATE, 2, false, &m68op_CPX },
	{ "AND", AMODE_IMMEDIATE, 2, false, &m68op_AND },
	{ "BIT", AMODE_IMMEDIATE, 2, false, &m68op_BIT },
	{ "LDA", AMODE_IMMEDIATE, 2, false, &m68op_LDA },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "EOR", AMODE_IMMEDIATE, 2, false, &m68op_EOR },
	{ "ADC", AMODE_IMMEDIATE, 2, false, &m68op_ADC },
	{ "ORA", AMODE_IMMEDIATE, 2, false, &m68op_ORA },
	{ "ADD", AMODE_IMMEDIATE, 2, false, &m68op_ADD },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "BSR", AMODE_RELATIVE, 6, false, &m68op_BSR },
	{ "LDX", AMODE_IMMEDIATE, 2, false, &m68op_LDX },
	{ "ILLEGAL", AMODE_ILLEGAL, 0, 0, NULL },
	{ "SUB", AMODE_DIRECT, 3, false, &m68op_SUB },
	{ "CMP", AMODE_DIRECT, 3, false, &m68op_CMP },
	{ "SBC", AMODE_DIRECT, 3, false, &m68op_SBC },
	{ "CPX", AMODE_DIRECT, 3, false, &m68op_CPX },
	{ "AND", AMODE_DIRECT, 3, false, &m68op_AND },
	{ "BIT", AMODE_DIRECT, 3, false, &m68op_BIT },
	{ "LDA", AMODE_DIRECT, 3, false, &m68op_LDA },
	{ "STA", AMODE_DIRECT, 4, true, &m68op_STA },
	{ "EOR", AMODE_DIRECT, 3, false, &m68op_EOR },
	{ "ADC", AMODE_DIRECT, 3, false, &m68op_ADC },
	{ "ORA", AMODE_DIRECT, 3, false, &m68op_ORA },
	{ "ADD", AMODE_DIRECT, 3, false, &m68op_ADD },
	{ "JMP", AMODE_DIRECT_JUMP, 2, false, &m68op_JMP },
	{ "JSR", AMODE_DIRECT_JUMP, 5, false, &m68op_JSR },
	{ "LDX", AMODE_DIRECT, 3, false, &m68op_LDX },
	{ "STX", AMODE_DIRECT, 4, true, &m68op_STX },
	{ "SUB", AMODE_EXTENDED, 4, false, &m68op_SUB },
	{ "CMP", AMODE_EXTENDED, 4, false, &m68op_CMP },
	{ "SBC", AMODE_EXTENDED, 4, false, &m68op_SBC },
	{ "CPX", AMODE_EXTENDED, 4, false, &m68op_CPX },
	{ "AND", AMODE_EXTENDED, 4, false, &m68op_AND },
	{ "BIT", AMODE_EXTENDED, 4, false, &m68op_BIT },
	{ "LDA", AMODE_EXTENDED, 4, false, &m68op_LDA },
	{ "STA", AMODE_EXTENDED, 5, true, &m68op_STA },
	{ "EOR", AMODE_EXTENDED, 4, false, &m68op_EOR },
	{ "ADC", AMODE_EXTENDED, 4, false, &m68op_ADC },
	{ "ORA", AMODE_EXTENDED, 4, false, &m68op_ORA },
	{ "ADD", AMODE_EXTENDED, 4, false, &m68op_ADD },
	{ "JMP", AMODE_EXTENDED_JUMP, 3, false, &m68op_JMP },
	{ "JSR", AMODE_EXTENDED_JUMP, 6, false, &m68op_JSR },
	{ "LDX", AMODE_EXTENDED, 4, false, &m68op_LDX },
	{ "STX", AMODE_EXTENDED, 5, true, &m68op_STX },
	{ "SUB", AMODE_INDEXED2, 5, false, &m68op_SUB },
	{ "CMP", AMODE_INDEXED2, 5, false, &m68op_CMP },
	{ "SBC", AMODE_INDEXED2, 5, false, &m68op_SBC },
	{ "CPX", AMODE_INDEXED2, 5, false, &m68op_CPX },
	{ "AND", AMODE_INDEXED2, 5, false, &m68op_AND },
	{ "BIT", AMODE_INDEXED2, 5, false, &m68op_BIT },
	{ "LDA", AMODE_INDEXED2, 5, false, &m68op_LDA },
	{ "STA", AMODE_INDEXED2, 6, true, &m68op_STA },
	{ "EOR", AMODE_INDEXED2, 5, false, &m68op_EOR },
	{ "ADC", AMODE_INDEXED2, 5, false, &m68op_ADC },
	{ "ORA", AMODE_INDEXED2, 5, false, &m68op_ORA },
	{ "ADD", AMODE_INDEXED2, 5, false, &m68op_ADD },
	{ "JMP", AMODE_INDEXED2_JUMP, 4, false, &m68op_JMP },
	{ "JSR", AMODE_INDEXED2_JUMP, 7, false, &m68op_JSR },
	{ "LDX", AMODE_INDEXED2, 5, false, &m68op_LDX },
	{ "STX", AMODE_INDEXED2, 6, true, &m68op_STX },
	{ "SUB", AMODE_INDEXED1, 4, false, &m68op_SUB },
	{ "CMP", AMODE_INDEXED1, 4, false, &m68op_CMP },
	{ "SBC", AMODE_INDEXED1, 4, false, &m68op_SBC },
	{ "CPX", AMODE_INDEXED1, 4, false, &m68op_CPX },
	{ "AND", AMODE_INDEXED1, 4, false, &m68op_AND },
	{ "BIT", AMODE_INDEXED1, 4, false, &m68op_BIT },
	{ "LDA", AMODE_INDEXED1, 4, false, &m68op_LDA },
	{ "STA", AMODE_INDEXED1, 5, true, &m68op_STA },
	{ "EOR", AMODE_INDEXED1, 4, false, &m68op_EOR },
	{ "ADC", AMODE_INDEXED1, 4, false, &m68op_ADC },
	{ "ORA", AMODE_INDEXED1, 4, false, &m68op_ORA },
	{ "ADD", AMODE_INDEXED1, 4, false, &m68op_ADD },
	{ "JMP", AMODE_INDEXED1_JUMP, 3, false, &m68op_JMP },
	{ "JSR", AMODE_INDEXED1_JUMP, 6, false, &m68op_JSR },
	{ "LDX", AMODE_INDEXED1, 4, false, &m68op_LDX },
	{ "STX", AMODE_INDEXED1, 5, true, &m68op_STX },
	{ "SUB", AMODE_INDEXED0, 3, false, &m68op_SUB },
	{ "CMP", AMODE_INDEXED0, 3, false, &m68op_CMP },
	{ "SBC", AMODE_INDEXED0, 3, false, &m68op_SBC },
	{ "CPX", AMODE_INDEXED0, 3, false, &m68op_CPX },
	{ "AND", AMODE_INDEXED0, 3, false, &m68op_AND },
	{ "BIT", AMODE_INDEXED0, 3, false, &m68op_BIT },
	{ "LDA", AMODE_INDEXED0, 3, false, &m68op_LDA },
	{ "STA", AMODE_INDEXED0, 4, true, &m68op_STA },
	{ "EOR", AMODE_INDEXED0, 3, false, &m68op_EOR },
	{ "ADC", AMODE_INDEXED0, 3, false, &m68op_ADC },
	{ "ORA", AMODE_INDEXED0, 3, false, &m68op_ORA },
	{ "ADD", AMODE_INDEXED0, 3, false, &m68op_ADD },
	{ "JMP", AMODE_INDEXED0_JUMP, 2, false, &m68op_JMP },
	{ "JSR", AMODE_INDEXED0_JUMP, 5, false, &m68op_JSR },
	{ "LDX", AMODE_INDEXED0, 3, false, &m68op_LDX },
	{ "STX", AMODE_INDEXED0, 4, true, &m68op_STX },
};
