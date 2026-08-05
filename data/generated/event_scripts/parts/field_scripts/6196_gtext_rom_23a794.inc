	@ field-script:0x23A402 FieldScriptText_23A794
	.globl gText_Rom_23A794
gText_Rom_23A794: @ 0x0823A794
	.string "バトルフロンティアの　シンボル　とも\nいえる　きょだいな　とう　です\pこちらの　たてもの　では　シングル\nダブル　マルチ　つうしんマルチの\l4つの　バトルルームで　たたかいを\lたのしむことが　できます！"
	.byte EOS
	.if (. - gText_Rom_23A794) > 0x66
	.error "gText_Rom_23A794 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A794) < 0x66
	.space 0x66 - (. - gText_Rom_23A794)
	.endif
