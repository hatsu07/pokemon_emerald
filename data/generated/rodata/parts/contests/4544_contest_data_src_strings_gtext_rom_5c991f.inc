	@ src/strings.c:226 gText_Var1AndYouWantedVar2
	.globl gText_Rom_5C991F
gText_Rom_5C991F: @ 0x085C991F
	.string "{STR_VAR_1}を {STR_VAR_2}コで\n{STR_VAR_3}円 おかいあげですか?$"
	.if (. - gText_Rom_5C991F) > 0x17
	.error "gText_Rom_5C991F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C991F) < 0x17
	.space 0x17 - (. - gText_Rom_5C991F)
	.endif
