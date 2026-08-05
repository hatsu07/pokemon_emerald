	@ field-script:0x23A5A0 FieldScriptText_23AE51
	.globl gText_Rom_23AE51
gText_Rom_23AE51: @ 0x0823AE51
	.string "バトルフロンティアの　7つの　しせつで\nつよさを　みとめられた　トレーナーが\lそれぞれの　しせつの　シンボルを\lもらえることが　あります\pシンボルを　もらう　ためには\nなんにんも　トレーナーを　かちぬいたり\lなんども　せいは　したり……\pなかなか　たいへんな　みちのりですが\nぜひ　がんばって　くださいね！"
	.byte EOS
	.if (. - gText_Rom_23AE51) > 0x9a
	.error "gText_Rom_23AE51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AE51) < 0x9a
	.space 0x9a - (. - gText_Rom_23AE51)
	.endif
