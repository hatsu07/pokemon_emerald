	@ data/maps/SlateportCity_Harbor/scripts.inc:411 SlateportCity_Harbor_Text_BattleFrontierItIs
	.globl gText_Rom_209C9B
gText_Rom_209C9B: @ 0x08209C9B
	.string "バトルフロンティア ですね!{EOS}"
	.if (. - gText_Rom_209C9B) > 0xf
	.error "gText_Rom_209C9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209C9B) < 0xf
	.space 0xf - (. - gText_Rom_209C9B)
	.endif

