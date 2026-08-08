	@ data/text/pkmn_center_nurse.inc:1 gText_WouldYouLikeToRestYourPkmn
	.globl gText_Rom_24373C
gText_Rom_24373C: @ 0x0824373C
	.string "おつかれさまです!\nポケモン センター です\pここでは ポケモンの\nたいりょく かいふくを します\pあなたの ポケモンを\nやすませて あげますか?$"
	.if (. - gText_Rom_24373C) > 0x4a
	.error "gText_Rom_24373C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24373C) < 0x4a
	.space 0x4a - (. - gText_Rom_24373C)
	.endif

	@ data/text/pkmn_center_nurse.inc:9 gText_IllTakeYourPkmn
	.globl gText_Rom_243786
gText_Rom_243786: @ 0x08243786
	.string "それでは\nおあずかり いたします!$"
	.if (. - gText_Rom_243786) > 0x12
	.error "gText_Rom_243786 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243786) < 0x12
	.space 0x12 - (. - gText_Rom_243786)
	.endif

	@ data/text/pkmn_center_nurse.inc:13 gText_RestoredPkmnToFullHealth
	.globl gText_Rom_243798
gText_Rom_243798: @ 0x08243798
	.string "おまちどおさま!\pおあずかり した ポケモンは\nみんな げんきに なりましたよ!$"
	.if (. - gText_Rom_243798) > 0x29
	.error "gText_Rom_243798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243798) < 0x29
	.space 0x29 - (. - gText_Rom_243798)
	.endif

	@ data/text/pkmn_center_nurse.inc:18 gText_WeHopeToSeeYouAgain (+1 aliases)
	.globl gText_Rom_2437C1
gText_Rom_2437C1: @ 0x082437C1
	.string "またの\nごりようを おまち してます!$"
	.if (. - gText_Rom_2437C1) > 0x14
	.error "gText_Rom_2437C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2437C1) < 0x14
	.space 0x14 - (. - gText_Rom_2437C1)
	.endif

	@ data/text/pkmn_center_nurse.inc:22 gText_WelcomeCutShort
	.globl gText_Rom_2437D5
gText_Rom_2437D5: @ 0x082437D5
	.string "おつかれさまです!\nポケモン センター です\pここでは ポケモンの\nたいりょく かいふくを します\pあなたの ポケモンを……$"
	.if (. - gText_Rom_2437D5) > 0x3f
	.error "gText_Rom_2437D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2437D5) < 0x3f
	.space 0x3f - (. - gText_Rom_2437D5)
	.endif

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

	@ data/text/pkmn_center_nurse.inc:42 gText_YouWantTheUsual
	.globl gText_Rom_2438B9
gText_Rom_2438B9: @ 0x082438B9
	.string "{PLAYER}さん おつかれさまです!\nいつもので よろしい ですね!$"
	.if (. - gText_Rom_2438B9) > 0x1f
	.error "gText_Rom_2438B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2438B9) < 0x1f
	.space 0x1f - (. - gText_Rom_2438B9)
	.endif

	@ data/text/pkmn_center_nurse.inc:46 gText_IllTakeYourPkmn2
	.globl gText_Rom_2438D8
gText_Rom_2438D8: @ 0x082438D8
	.string "では おあずかりさせて いただきます!$"
	.if (. - gText_Rom_2438D8) > 0x14
	.error "gText_Rom_2438D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2438D8) < 0x14
	.space 0x14 - (. - gText_Rom_2438D8)
	.endif

	@ data/text/pkmn_center_nurse.inc:49 gText_ThankYouForWaiting
	.globl gText_Rom_2438EC
gText_Rom_2438EC: @ 0x082438EC
	.string "たいへん おまたせ いたしました!$"
	.if (. - gText_Rom_2438EC) > 0x12
	.error "gText_Rom_2438EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2438EC) < 0x12
	.space 0x12 - (. - gText_Rom_2438EC)
	.endif

	@ data/text/pkmn_center_nurse.inc:52 gText_WeHopeToSeeYouAgain2
	.globl gText_Rom_2438FE
gText_Rom_2438FE: @ 0x082438FE
	.string "また いつでも おこしください!$"
	.if (. - gText_Rom_2438FE) > 0x11
	.error "gText_Rom_2438FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2438FE) < 0x11
	.space 0x11 - (. - gText_Rom_2438FE)
	.endif
