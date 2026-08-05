	@ field-script:0x23A448 FieldScriptText_23A9AF
	.globl gText_Rom_23A9AF
gText_Rom_23A9AF: @ 0x0823A9AF
	.string "バトルチューブは　バトルフロンティアの\nちゅうおう　ひだりに　いちする\lポケモンの　かたちを　した　たてものです\pこちらでは　バトルゲーム　という\nイベントを　かいさい　しております！"
	.byte EOS
	.if (. - gText_Rom_23A9AF) > 0x5d
	.error "gText_Rom_23A9AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A9AF) < 0x5d
	.space 0x5d - (. - gText_Rom_23A9AF)
	.endif
