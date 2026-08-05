	@ field-script:0x23A530 FieldScriptText_23ADAF
	.globl gText_Rom_23ADAF
gText_Rom_23ADAF: @ 0x0823ADAF
	.string "バトルフロンティアの　しせつに\nポケモンを　ちょうせん　させるとき\pそれぞれの　ポケモンが\nおなじ　どうぐを　もつことは　できません\pちょうせん　させる　ポケモンには\nすべて　ちがう　どうぐを\lもたせて　おくように　してください"
	.byte EOS
	.if (. - gText_Rom_23ADAF) > 0x73
	.error "gText_Rom_23ADAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23ADAF) < 0x73
	.space 0x73 - (. - gText_Rom_23ADAF)
	.endif
