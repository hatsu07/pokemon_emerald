	@ data/text/trainers.inc:734 Route110_Text_JacobPostBattle
	.globl gText_Rom_25B3B3
gText_Rom_25B3B3: @ 0x0825B3B3
	.string "タイヤの パンクや\nブレーキの こしょうは ケガのもと\lちゃんと てんけん しないとな{EOS}"
	.if (. - gText_Rom_25B3B3) > 0x2c
	.error "gText_Rom_25B3B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B3B3) < 0x2c
	.space 0x2c - (. - gText_Rom_25B3B3)
	.endif
