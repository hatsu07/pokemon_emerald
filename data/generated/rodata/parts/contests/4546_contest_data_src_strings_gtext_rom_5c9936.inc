	@ src/strings.c:227 gText_Var1IsItThatllBeVar2
	.globl gText_Rom_5C9936
gText_Rom_5C9936: @ 0x085C9936
	.string "{STR_VAR_1} だね!\n{STR_VAR_2}円 だけど かうかい?$"
	.if (. - gText_Rom_5C9936) > 0x15
	.error "gText_Rom_5C9936 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9936) < 0x15
	.space 0x15 - (. - gText_Rom_5C9936)
	.endif
