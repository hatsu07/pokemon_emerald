	@ data/text/apprentice.inc:121 gText_ApprenticePleaseTeach6
	.globl gText_Rom_26D9C7
gText_Rom_26D9C7: @ 0x0826D9C7
	.string "うっそ もしかして\nほんものの {PLAYER}さん?\pあっは! すごーい!\nわたし {STR_VAR_1}よ よろしくぅ!\p{PLAYER}さん って なんか\nとっても つよいんでしょ\lみんな うわさ してるもんね!\pあ! いいこと かんがえちゃった\nわたし {PLAYER}さんに\lアドバイスを もらおうっと!\lきっと つよく なれそう!\pねっ いいでしょ?\nわたしに アドバイス おねがい!"
	.byte EOS
	.if (. - gText_Rom_26D9C7) > 0xac
	.error "gText_Rom_26D9C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D9C7) < 0xac
	.space 0xac - (. - gText_Rom_26D9C7)
	.endif
