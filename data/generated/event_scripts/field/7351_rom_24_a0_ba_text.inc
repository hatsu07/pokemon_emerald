	@ field-script:0x248DB8 FieldScriptText_24A0BA
	.globl gText_Rom_24A0BA
gText_Rom_24A0BA: @ 0x0824A0BA
	.string "それでは　おきゃくさまの　ポケモンを\nエントリー　します！\lおきゃくさまの　エントリーナンバーは\l4ばん　に　なります！\lコンテストは　すぐに　はじまります！{EOS}"
	.if (. - gText_Rom_24A0BA) > 0x50
	.error "gText_Rom_24A0BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A0BA) < 0x50
	.space 0x50 - (. - gText_Rom_24A0BA)
	.endif
