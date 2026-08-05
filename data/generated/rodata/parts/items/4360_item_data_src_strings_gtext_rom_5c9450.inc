	@ src/strings.c:159 gText_Var1IsSelected
	.globl gText_Rom_5C9450
gText_Rom_5C9450: @ 0x085C9450
	.string "{STR_VAR_1}を\nどうしますか?$"
	.if (. - gText_Rom_5C9450) > 0xc
	.error "gText_Rom_5C9450 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9450) < 0xc
	.space 0xc - (. - gText_Rom_5C9450)
	.endif
