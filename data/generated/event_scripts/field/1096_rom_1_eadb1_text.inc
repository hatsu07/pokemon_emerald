	@ field-script:0x1EA66E FieldScriptText_1EADB1
	.globl gText_Rom_1EADB1
gText_Rom_1EADB1: @ 0x081EADB1
	.string "あれから\nすなのとう　は　みえなく　なった\pやはり　げんえいのとう　だったのか……$"
	.if (. - gText_Rom_1EADB1) > 0x2a
	.error "gText_Rom_1EADB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EADB1) < 0x2a
	.space 0x2a - (. - gText_Rom_1EADB1)
	.endif
