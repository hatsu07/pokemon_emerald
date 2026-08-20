	@ data/maps/SootopolisCity_House6/scripts.inc:37 SootopolisCity_House6_Text_TakeGoodCareOfIt
	.globl gText_Rom_20F76C
gText_Rom_20F76C: @ 0x0820F76C
	.string "だいじに してね!{EOS}"
	.if (. - gText_Rom_20F76C) > 0xa
	.error "gText_Rom_20F76C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F76C) < 0xa
	.space 0xa - (. - gText_Rom_20F76C)
	.endif
