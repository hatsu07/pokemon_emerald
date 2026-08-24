	@ data/text/secret_base_trainers.inc:94 SecretBase_Text_Trainer7AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer7AcceptBattle
SecretBase_Text_Trainer7AcceptBattle: @ 0x0824563F
	.string "それでは おねがいします{EOS}"
	.if (. - SecretBase_Text_Trainer7AcceptBattle) != 0xd
	.error "SecretBase_Text_Trainer7AcceptBattle must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:97 SecretBase_Text_Trainer7DeclineBattle
	.globl SecretBase_Text_Trainer7DeclineBattle
SecretBase_Text_Trainer7DeclineBattle: @ 0x0824564C
	.string "そう それは ざんねん です…{EOS}"
	.if (. - SecretBase_Text_Trainer7DeclineBattle) > 0x10
	.error "SecretBase_Text_Trainer7DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer7DeclineBattle) < 0x10
	.space 0x10 - (. - SecretBase_Text_Trainer7DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:100 SecretBase_Text_Trainer7Defeated
	.globl SecretBase_Text_Trainer7Defeated
SecretBase_Text_Trainer7Defeated: @ 0x0824565C
	.string "まいりました……{EOS}"
	.if (. - SecretBase_Text_Trainer7Defeated) > 0x9
	.error "SecretBase_Text_Trainer7Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer7Defeated) < 0x9
	.space 0x9 - (. - SecretBase_Text_Trainer7Defeated)
	.endif

	@ data/text/secret_base_trainers.inc:103 SecretBase_Text_Trainer7PostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer7PostBattle
SecretBase_Text_Trainer7PostBattle: @ 0x08245665
	.string "ああ たのしかった!\nつぎは おかいものを たのしもう かしら{EOS}"
	.if (. - SecretBase_Text_Trainer7PostBattle) != 0x20
	.error "SecretBase_Text_Trainer7PostBattle must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:106 SecretBase_Text_Trainer7PreChampion
	.globl SecretBase_Text_Trainer7PreChampion
SecretBase_Text_Trainer7PreChampion: @ 0x08245685
	.string "わたし グッズの おかいものが\nだいすき です\pそれと おなじくらい ポケモンを そだてるの\nだいすき です{EOS}"
	.if (. - SecretBase_Text_Trainer7PreChampion) > 0x37
	.error "SecretBase_Text_Trainer7PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer7PreChampion) < 0x37
	.space 0x37 - (. - SecretBase_Text_Trainer7PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:109 SecretBase_Text_Trainer3Intro
	.globl SecretBase_Text_Trainer3Intro
SecretBase_Text_Trainer3Intro: @ 0x082456BC
	.string "みつかり にくい ばしょに\nひみつきちを つくる ひとが いるけど\lこっそりと かくれて いたいのかなぁ……\pうん せっかく みつけて くれたんだから\nポケモン しょうぶ しようか?{EOS}"
	.if (. - SecretBase_Text_Trainer3Intro) > 0x5c
	.error "SecretBase_Text_Trainer3Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer3Intro) < 0x5c
	.space 0x5c - (. - SecretBase_Text_Trainer3Intro)
	.endif

	@ data/text/secret_base_trainers.inc:112 SecretBase_Text_Trainer3AcceptBattle
	.globl SecretBase_Text_Trainer3AcceptBattle
SecretBase_Text_Trainer3AcceptBattle: @ 0x08245718
	.string "かんたんには おわらせ ないよ!{EOS}"
	.if (. - SecretBase_Text_Trainer3AcceptBattle) > 0x11
	.error "SecretBase_Text_Trainer3AcceptBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer3AcceptBattle) < 0x11
	.space 0x11 - (. - SecretBase_Text_Trainer3AcceptBattle)
	.endif

	@ data/text/secret_base_trainers.inc:115 SecretBase_Text_Trainer3DeclineBattle
	.globl SecretBase_Text_Trainer3DeclineBattle
SecretBase_Text_Trainer3DeclineBattle: @ 0x08245729
	.string "もしかして さがすのに つかれちゃった?{EOS}"
	.if (. - SecretBase_Text_Trainer3DeclineBattle) > 0x15
	.error "SecretBase_Text_Trainer3DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer3DeclineBattle) < 0x15
	.space 0x15 - (. - SecretBase_Text_Trainer3DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:118 SecretBase_Text_Trainer3Defeated
	.globl SecretBase_Text_Trainer3Defeated
SecretBase_Text_Trainer3Defeated: @ 0x0824573E
	.string "おわっちゃった……{EOS}"
	.if (. - SecretBase_Text_Trainer3Defeated) > 0xa
	.error "SecretBase_Text_Trainer3Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer3Defeated) < 0xa
	.space 0xa - (. - SecretBase_Text_Trainer3Defeated)
	.endif

	@ data/text/secret_base_trainers.inc:121 SecretBase_Text_Trainer3PostBattle
	.globl SecretBase_Text_Trainer3PostBattle
SecretBase_Text_Trainer3PostBattle: @ 0x08245748
	.string "きみの ひみつきちは どこなんだい!\nこんど あそびに いこうかなー{EOS}"
	.if (. - SecretBase_Text_Trainer3PostBattle) > 0x23
	.error "SecretBase_Text_Trainer3PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer3PostBattle) < 0x23
	.space 0x23 - (. - SecretBase_Text_Trainer3PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:124 SecretBase_Text_Trainer3PreChampion
	.globl SecretBase_Text_Trainer3PreChampion
SecretBase_Text_Trainer3PreChampion: @ 0x0824576B
	.string "みつかり にくい ばしょに\nひみつきちを つくる ひとが いるけど\lこっそりと かくれて いたいのかなぁ{EOS}"
	.if (. - SecretBase_Text_Trainer3PreChampion) > 0x35
	.error "SecretBase_Text_Trainer3PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer3PreChampion) < 0x35
	.space 0x35 - (. - SecretBase_Text_Trainer3PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:127 SecretBase_Text_Trainer8Intro
	.globl SecretBase_Text_Trainer8Intro
SecretBase_Text_Trainer8Intro: @ 0x082457A0
	.string "グッズを てにいれる ほうほうは\nいろいろ あるって はなしよ\pどっちが すてきな グッズを\nてにいれるか きょうそうね!\pついでに ポケモン しょうぶも しない?{EOS}"
	.if (. - SecretBase_Text_Trainer8Intro) > 0x53
	.error "SecretBase_Text_Trainer8Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer8Intro) < 0x53
	.space 0x53 - (. - SecretBase_Text_Trainer8Intro)
	.endif

	@ data/text/secret_base_trainers.inc:130 SecretBase_Text_Trainer8AcceptBattle
	.globl SecretBase_Text_Trainer8AcceptBattle
SecretBase_Text_Trainer8AcceptBattle: @ 0x082457F3
	.string "じぶんの ひみつきちで まけられないわ!{EOS}"
	.if (. - SecretBase_Text_Trainer8AcceptBattle) > 0x15
	.error "SecretBase_Text_Trainer8AcceptBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer8AcceptBattle) < 0x15
	.space 0x15 - (. - SecretBase_Text_Trainer8AcceptBattle)
	.endif

	@ data/text/secret_base_trainers.inc:133 SecretBase_Text_Trainer8DeclineBattle
	.globl SecretBase_Text_Trainer8DeclineBattle
SecretBase_Text_Trainer8DeclineBattle: @ 0x08245808
	.string "いつでも しょうぶ まってるわ!{EOS}"
	.if (. - SecretBase_Text_Trainer8DeclineBattle) > 0x11
	.error "SecretBase_Text_Trainer8DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer8DeclineBattle) < 0x11
	.space 0x11 - (. - SecretBase_Text_Trainer8DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:136 SecretBase_Text_Trainer8Defeated
	.globl SecretBase_Text_Trainer8Defeated
SecretBase_Text_Trainer8Defeated: @ 0x08245819
	.string "えっ もしかして わたしの まけ?{EOS}"
	.if (. - SecretBase_Text_Trainer8Defeated) > 0x12
	.error "SecretBase_Text_Trainer8Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer8Defeated) < 0x12
	.space 0x12 - (. - SecretBase_Text_Trainer8Defeated)
	.endif
