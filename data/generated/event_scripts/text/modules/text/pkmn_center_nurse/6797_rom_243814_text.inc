	@ data/text/pkmn_center_nurse.inc:29 gText_NoticesGoldCard
	.globl gText_Rom_243814
gText_Rom_243814: @ 0x08243814
	.string "そ それは……\nひょっとして ゴールドカード!?\pああ…… きんいろが まぶしい!\n4つの ほしが かがやかしい!\pわたしも これまでに\nシルバーカードの トレーナーさんなら\lなんにんか みてきましたが\lゴールドカードを おもちの かたは\l{PLAYER}さんが はじめて ですよ!\pさあ {PLAYER}さんの\nポケモンを やすませて あげましょう!$"
	.if (. - gText_Rom_243814) > 0xa5
	.error "gText_Rom_243814 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243814) < 0xa5
	.space 0xa5 - (. - gText_Rom_243814)
	.endif
