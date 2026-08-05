	@ field-script:0x23A30E FieldScriptText_23A6E5
	.globl gText_Rom_23A6E5
gText_Rom_23A6E5: @ 0x0823A6E5
	.string "エニシダ『きみが　きてくれて\nとっても　うれしいよ！\pぜひ　ゆっくりと　そして　じっくりと\nポケモンしょうぶの　しんずいを\lあじわって　いって　くれ！\pわたしの　へやも　あるから\nひまが　あるときに　たずねて　きてくれよ！"
	.byte EOS
	.if (. - gText_Rom_23A6E5) > 0x70
	.error "gText_Rom_23A6E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A6E5) < 0x70
	.space 0x70 - (. - gText_Rom_23A6E5)
	.endif
