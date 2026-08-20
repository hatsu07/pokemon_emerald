	@ field-script:0x22A181 FieldScriptText_22AA1D
	.globl gText_Rom_22AA1D
gText_Rom_22AA1D: @ 0x0822AA1D
	.string "トレーナーの　こころを　ためす　ばしょ\nバトルパレスへ　ようこそ\pここでは　ダブル　バトルホールへの\nちょうせんを　うけつけておる……{EOS}"
	.if (. - gText_Rom_22AA1D) > 0x44
	.error "gText_Rom_22AA1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AA1D) < 0x44
	.space 0x44 - (. - gText_Rom_22AA1D)
	.endif
