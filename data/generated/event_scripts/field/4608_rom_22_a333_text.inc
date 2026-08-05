	@ field-script:0x22A178 FieldScriptText_22A333
	.globl gText_Rom_22A333
gText_Rom_22A333: @ 0x0822A333
	.string "トレーナーの　こころを　ためす　ばしょ\nバトルパレスへ　ようこそ\pここでは　シングル　バトルホールへの\nちょうせんを　うけつけて　おる……$"
	.if (. - gText_Rom_22A333) > 0x46
	.error "gText_Rom_22A333 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A333) < 0x46
	.space 0x46 - (. - gText_Rom_22A333)
	.endif
