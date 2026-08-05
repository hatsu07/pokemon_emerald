	@ src/battle_main.c:364 battle_main_line_364
	.globl gText_Rom_2E380E
gText_Rom_2E380E: @ 0x082E380E
	.string "ファクトリーヘッド$"
	.if (. - gText_Rom_2E380E) > 0xa
	.error "gText_Rom_2E380E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E380E) < 0xa
	.space 0xa - (. - gText_Rom_2E380E)
	.endif
	.space 0x1, 0x00
