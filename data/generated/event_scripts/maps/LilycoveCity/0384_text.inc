	@ data/maps/LilycoveCity/scripts.inc:550 LilycoveCity_Text_ChanceToDoBigThings
	.globl gText_Rom_1E0CAE
gText_Rom_1E0CAE: @ 0x081E0CAE
	.string "リーダーが なに かんがえてるのか\nしたっぱの オレには わからんが\pアクアだんに いると\nすごいこと できそうだぜ!\pなっ なんだ おまえ!\nいっ いまのは ひとりごと だぞ!$"
	.if (. - gText_Rom_1E0CAE) > 0x5a
	.error "gText_Rom_1E0CAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0CAE) < 0x5a
	.space 0x5a - (. - gText_Rom_1E0CAE)
	.endif
