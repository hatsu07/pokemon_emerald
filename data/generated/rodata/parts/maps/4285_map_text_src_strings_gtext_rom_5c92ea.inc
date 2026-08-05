	@ src/strings.c:117 gText_HOFDexSaving
	.globl gText_Rom_5C92EA
gText_Rom_5C92EA: @ 0x085C92EA
	.string "ここまでの レポートを かきしるしています!\nでんげんを きらないでください$"
	.if (. - gText_Rom_5C92EA) > 0x27
	.error "gText_Rom_5C92EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C92EA) < 0x27
	.space 0x27 - (. - gText_Rom_5C92EA)
	.endif
