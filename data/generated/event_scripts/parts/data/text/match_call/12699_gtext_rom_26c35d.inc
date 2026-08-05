	@ data/text/match_call.inc:922 MatchCall_Text_MrStone2
	.globl gText_Rom_26C35D
gText_Rom_26C35D: @ 0x0826C35D
	.string "ツワブキ『おっ! {PLAYER}{KUN}か?\pどうした! わしが たのんだ しごと\nわすれちゃったの かな?\pまずは ムロタウンで ダイゴに\nてがみを わたしてくれ!\pそのあと カイナシティの クスノキくんに\nわがしゃの にもつを とどけるんだ!\pな? おぼえたかな?\nわしは いそがしい しゃちょう だからね\lこれで しつれい するよ!"
	.byte EOS
	.if (. - gText_Rom_26C35D) > 0xa3
	.error "gText_Rom_26C35D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C35D) < 0xa3
	.space 0xa3 - (. - gText_Rom_26C35D)
	.endif
