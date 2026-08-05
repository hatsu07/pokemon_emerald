	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1118 BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro
	.globl gText_Rom_229AD4
gText_Rom_229AD4: @ 0x08229AD4
	.string "ヒース『われるような かんせい……\nむせかえる ような ねっき……\lやっぱり ここは すばらしいよ……\p…… わたしは ドームスーパースター……\nみんなの きたいと あこがれの ほし……\lながれ きえさる ことなど できない……\pもっと ひかりっ! もっと かがやいてっ!\nここに やってくる すべての ひとびとを\lてらさなければ いけないっ!!$"
	.if (. - gText_Rom_229AD4) > 0xae
	.error "gText_Rom_229AD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229AD4) < 0xae
	.space 0xae - (. - gText_Rom_229AD4)
	.endif
