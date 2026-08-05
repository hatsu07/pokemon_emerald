	@ src/strings.c:268 gText_SwitchedPkmnItem
	.globl gText_Rom_5C9CEF
gText_Rom_5C9CEF: @ 0x085C9CEF
	.string "{STR_VAR_2}を あずかって\nあらたに {STR_VAR_1}を もたせました!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9CEF) > 0x1d
	.error "gText_Rom_5C9CEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9CEF) < 0x1d
	.space 0x1d - (. - gText_Rom_5C9CEF)
	.endif
