	@ data/text/pkmn_center_nurse.inc:1 gText_WouldYouLikeToRestYourPkmn
	.globl gText_WouldYouLikeToRestYourPkmn
gText_WouldYouLikeToRestYourPkmn: @ 0x0824373C
	.string "おつかれさまです!\nポケモン センター です\pここでは ポケモンの\nたいりょく かいふくを します\pあなたの ポケモンを\nやすませて あげますか?{EOS}"
	.if (. - gText_WouldYouLikeToRestYourPkmn) > 0x4a
	.error "gText_WouldYouLikeToRestYourPkmn may not grow beyond its original slot"
	.endif
	.if (. - gText_WouldYouLikeToRestYourPkmn) < 0x4a
	.space 0x4a - (. - gText_WouldYouLikeToRestYourPkmn)
	.endif

	@ data/text/pkmn_center_nurse.inc:9 gText_IllTakeYourPkmn
	.globl gText_IllTakeYourPkmn
gText_IllTakeYourPkmn: @ 0x08243786
	.string "それでは\nおあずかり いたします!{EOS}"
	.if (. - gText_IllTakeYourPkmn) > 0x12
	.error "gText_IllTakeYourPkmn may not grow beyond its original slot"
	.endif
	.if (. - gText_IllTakeYourPkmn) < 0x12
	.space 0x12 - (. - gText_IllTakeYourPkmn)
	.endif

	@ data/text/pkmn_center_nurse.inc:13 gText_RestoredPkmnToFullHealth
	.globl gText_RestoredPkmnToFullHealth
gText_RestoredPkmnToFullHealth: @ 0x08243798
	.string "おまちどおさま!\pおあずかり した ポケモンは\nみんな げんきに なりましたよ!{EOS}"
	.if (. - gText_RestoredPkmnToFullHealth) > 0x29
	.error "gText_RestoredPkmnToFullHealth may not grow beyond its original slot"
	.endif
	.if (. - gText_RestoredPkmnToFullHealth) < 0x29
	.space 0x29 - (. - gText_RestoredPkmnToFullHealth)
	.endif

	@ data/text/pkmn_center_nurse.inc:18 gText_WeHopeToSeeYouAgain (+1 aliases)
	.globl gText_Rom_2437C1
gText_Rom_2437C1: @ 0x082437C1
	.string "またの\nごりようを おまち してます!{EOS}"
	.if (. - gText_Rom_2437C1) > 0x14
	.error "gText_Rom_2437C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2437C1) < 0x14
	.space 0x14 - (. - gText_Rom_2437C1)
	.endif

	@ data/text/pkmn_center_nurse.inc:22 gText_WelcomeCutShort
	.globl gText_WelcomeCutShort
gText_WelcomeCutShort: @ 0x082437D5
	.string "おつかれさまです!\nポケモン センター です\pここでは ポケモンの\nたいりょく かいふくを します\pあなたの ポケモンを……{EOS}"
	.if (. - gText_WelcomeCutShort) > 0x3f
	.error "gText_WelcomeCutShort may not grow beyond its original slot"
	.endif
	.if (. - gText_WelcomeCutShort) < 0x3f
	.space 0x3f - (. - gText_WelcomeCutShort)
	.endif

	@ data/text/pkmn_center_nurse.inc:29 gText_NoticesGoldCard
	.globl gText_NoticesGoldCard
gText_NoticesGoldCard: @ 0x08243814
	.string "そ それは……\nひょっとして ゴールドカード!?\pああ…… きんいろが まぶしい!\n4つの ほしが かがやかしい!\pわたしも これまでに\nシルバーカードの トレーナーさんなら\lなんにんか みてきましたが\lゴールドカードを おもちの かたは\l{PLAYER}さんが はじめて ですよ!\pさあ {PLAYER}さんの\nポケモンを やすませて あげましょう!{EOS}"
	.if (. - gText_NoticesGoldCard) > 0xa5
	.error "gText_NoticesGoldCard may not grow beyond its original slot"
	.endif
	.if (. - gText_NoticesGoldCard) < 0xa5
	.space 0xa5 - (. - gText_NoticesGoldCard)
	.endif

	@ data/text/pkmn_center_nurse.inc:42 gText_YouWantTheUsual
	.globl gText_YouWantTheUsual
gText_YouWantTheUsual: @ 0x082438B9
	.string "{PLAYER}さん おつかれさまです!\nいつもので よろしい ですね!{EOS}"
	.if (. - gText_YouWantTheUsual) > 0x1f
	.error "gText_YouWantTheUsual may not grow beyond its original slot"
	.endif
	.if (. - gText_YouWantTheUsual) < 0x1f
	.space 0x1f - (. - gText_YouWantTheUsual)
	.endif

	@ data/text/pkmn_center_nurse.inc:46 gText_IllTakeYourPkmn2
	.globl gText_IllTakeYourPkmn2
gText_IllTakeYourPkmn2: @ 0x082438D8
	.string "では おあずかりさせて いただきます!{EOS}"
	.if (. - gText_IllTakeYourPkmn2) > 0x14
	.error "gText_IllTakeYourPkmn2 may not grow beyond its original slot"
	.endif
	.if (. - gText_IllTakeYourPkmn2) < 0x14
	.space 0x14 - (. - gText_IllTakeYourPkmn2)
	.endif

	@ data/text/pkmn_center_nurse.inc:49 gText_ThankYouForWaiting
	.globl gText_ThankYouForWaiting
gText_ThankYouForWaiting: @ 0x082438EC
	.string "たいへん おまたせ いたしました!{EOS}"
	.if (. - gText_ThankYouForWaiting) > 0x12
	.error "gText_ThankYouForWaiting may not grow beyond its original slot"
	.endif
	.if (. - gText_ThankYouForWaiting) < 0x12
	.space 0x12 - (. - gText_ThankYouForWaiting)
	.endif

	@ data/text/pkmn_center_nurse.inc:52 gText_WeHopeToSeeYouAgain2
	.globl gText_WeHopeToSeeYouAgain2
gText_WeHopeToSeeYouAgain2: @ 0x082438FE
	.string "また いつでも おこしください!{EOS}"
	.if (. - gText_WeHopeToSeeYouAgain2) > 0x11
	.error "gText_WeHopeToSeeYouAgain2 may not grow beyond its original slot"
	.endif
	.if (. - gText_WeHopeToSeeYouAgain2) < 0x11
	.space 0x11 - (. - gText_WeHopeToSeeYouAgain2)
	.endif
