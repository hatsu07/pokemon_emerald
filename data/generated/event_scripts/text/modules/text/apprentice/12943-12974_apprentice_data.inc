	@ data/text/apprentice.inc:331 gText_ApprenticeWhatHeldItem6
	.globl gText_ApprenticeWhatHeldItem6
gText_ApprenticeWhatHeldItem6: @ 0x0826F23B
	.string "よぅ {PLAYER}さん わたしだよ!\nきょうも ひとつ そうだんが あるの\lアドバイス おねがい ねっ!\pジャーン では そうだんです!\nわたしの {STR_VAR_1}に\lなにか どうぐを もたせるなら\lいったい なにに したら いいかな?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem6) > 0x6d
	.error "gText_ApprenticeWhatHeldItem6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem6) < 0x6d
	.space 0x6d - (. - gText_ApprenticeWhatHeldItem6)
	.endif

	@ data/text/apprentice.inc:334 gText_ApprenticeHoldNothing6
	.globl gText_ApprenticeHoldNothing6
gText_ApprenticeHoldNothing6: @ 0x0826F2A8
	.string "ふーん? {STR_VAR_1}は\nもちものは いらないって ことかな?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing6) > 0x1c
	.error "gText_ApprenticeHoldNothing6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing6) < 0x1c
	.space 0x1c - (. - gText_ApprenticeHoldNothing6)
	.endif

	@ data/text/apprentice.inc:337 gText_ApprenticeThanksNoHeldItem6
	.globl gText_ApprenticeThanksNoHeldItem6
gText_ApprenticeThanksNoHeldItem6: @ 0x0826F2C4
	.string "じゃ そうするね!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem6) > 0x32
	.error "gText_ApprenticeThanksNoHeldItem6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem6) < 0x32
	.space 0x32 - (. - gText_ApprenticeThanksNoHeldItem6)
	.endif

	@ data/text/apprentice.inc:340 gText_ApprenticeThanksHeldItem6
	.globl gText_ApprenticeThanksHeldItem6
gText_ApprenticeThanksHeldItem6: @ 0x0826F2F6
	.string "ははぁーん!\n{STR_VAR_1}とは シブイわぁ\lぜひ そうして みるね!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem6) > 0x47
	.error "gText_ApprenticeThanksHeldItem6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem6) < 0x47
	.space 0x47 - (. - gText_ApprenticeThanksHeldItem6)
	.endif

	@ data/text/apprentice.inc:343 gText_ApprenticeItemAlreadyRecommended6
	.globl gText_ApprenticeItemAlreadyRecommended6
gText_ApprenticeItemAlreadyRecommended6: @ 0x0826F33D
	.string "あっはは やだぁ\n{STR_VAR_1}は もう\lおしえて もらった じゃない!\l{PLAYER}さん だいじょぶ?\pあ! それとも {STR_VAR_2}は\nもちものは いらないって ことかな?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended6) > 0x4b
	.error "gText_ApprenticeItemAlreadyRecommended6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended6) < 0x4b
	.space 0x4b - (. - gText_ApprenticeItemAlreadyRecommended6)
	.endif

	@ data/text/apprentice.inc:346 gText_ApprenticeWhatHeldItem7
	.globl gText_ApprenticeWhatHeldItem7
gText_ApprenticeWhatHeldItem7: @ 0x0826F388
	.string "ごきげん いかがですか {PLAYER}さん\nきいて くださる?\pこのまえ たたかった トレーナーさん\nポケモンに なにか どうぐを\lもたせていた らしいんですの\pおかげで まけて しまいましたわ……\pわたくしも まけずに なにか\n{STR_VAR_1}に もたせたいんですの!\lなにが よろしいの でしょう\lきめて いただければ うれしいのですが……"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem7) > 0xa2
	.error "gText_ApprenticeWhatHeldItem7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem7) < 0xa2
	.space 0xa2 - (. - gText_ApprenticeWhatHeldItem7)
	.endif

	@ data/text/apprentice.inc:349 gText_ApprenticeHoldNothing7
	.globl gText_ApprenticeHoldNothing7
gText_ApprenticeHoldNothing7: @ 0x0826F42A
	.string "それは つまり…… どうぐは\nもたせなくて よろしいんですのね?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing7) > 0x21
	.error "gText_ApprenticeHoldNothing7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing7) < 0x21
	.space 0x21 - (. - gText_ApprenticeHoldNothing7)
	.endif

	@ data/text/apprentice.inc:352 gText_ApprenticeThanksNoHeldItem7
	.globl gText_ApprenticeThanksNoHeldItem7
gText_ApprenticeThanksNoHeldItem7: @ 0x0826F44B
	.string "わかりましたわ!\nこのまま がんばる ことに しますわ\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem7) > 0x42
	.error "gText_ApprenticeThanksNoHeldItem7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem7) < 0x42
	.space 0x42 - (. - gText_ApprenticeThanksNoHeldItem7)
	.endif

	@ data/text/apprentice.inc:355 gText_ApprenticeThanksHeldItem7
	.globl gText_ApprenticeThanksHeldItem7
gText_ApprenticeThanksHeldItem7: @ 0x0826F48D
	.string "{STR_VAR_1} ですのね!\nさっそく とりよせますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem7) > 0x3d
	.error "gText_ApprenticeThanksHeldItem7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem7) < 0x3d
	.space 0x3d - (. - gText_ApprenticeThanksHeldItem7)
	.endif

	@ data/text/apprentice.inc:358 gText_ApprenticeItemAlreadyRecommended7
	.globl gText_ApprenticeItemAlreadyRecommended7
gText_ApprenticeItemAlreadyRecommended7: @ 0x0826F4CA
	.string "それは もう おしえて いただいて\nわたくし もっておりますわ!\pそれとも…… {STR_VAR_2}には\nなにも もたせないで よろしいと……?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended7) > 0x41
	.error "gText_ApprenticeItemAlreadyRecommended7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended7) < 0x41
	.space 0x41 - (. - gText_ApprenticeItemAlreadyRecommended7)
	.endif

	@ data/text/apprentice.inc:361 gText_ApprenticeWhatHeldItem8
	.globl gText_ApprenticeWhatHeldItem8
gText_ApprenticeWhatHeldItem8: @ 0x0826F50B
	.string "{PLAYER}さんっ!\nきょうも あえて かんげき ですっ……!\pそそそそそ そうだっ!\nあのっ {PLAYER}さんに\lきめて ほしいことが あるのですっ!\pわたしの {STR_VAR_1}には\nなにを もたせれば いいですかっ?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem8) > 0x61
	.error "gText_ApprenticeWhatHeldItem8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem8) < 0x61
	.space 0x61 - (. - gText_ApprenticeWhatHeldItem8)
	.endif

	@ data/text/apprentice.inc:364 gText_ApprenticeHoldNothing8
	.globl gText_ApprenticeHoldNothing8
gText_ApprenticeHoldNothing8: @ 0x0826F56C
	.string "うわあぁっ いがいな おこたえだあ!\nつまり なにも いらないの ですねっ?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing8) > 0x27
	.error "gText_ApprenticeHoldNothing8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing8) < 0x27
	.space 0x27 - (. - gText_ApprenticeHoldNothing8)
	.endif

	@ data/text/apprentice.inc:367 gText_ApprenticeThanksNoHeldItem8
	.globl gText_ApprenticeThanksNoHeldItem8
gText_ApprenticeThanksNoHeldItem8: @ 0x0826F593
	.string "りょうかいで ありますっ!\nどうぐ なしで がんばるで あります!\pでは また こんど\nいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem8) > 0x3e
	.error "gText_ApprenticeThanksNoHeldItem8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem8) < 0x3e
	.space 0x3e - (. - gText_ApprenticeThanksNoHeldItem8)
	.endif

	@ data/text/apprentice.inc:370 gText_ApprenticeThanksHeldItem8
	.globl gText_ApprenticeThanksHeldItem8
gText_ApprenticeThanksHeldItem8: @ 0x0826F5D1
	.string "{STR_VAR_1} ですねっ!\nこれって これって {PLAYER}さんと\lもしかして おそろい だったりしてっ!\pもー ぜったい もたせちゃいます!\nでは また こんど\lいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem8) > 0x5b
	.error "gText_ApprenticeThanksHeldItem8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem8) < 0x5b
	.space 0x5b - (. - gText_ApprenticeThanksHeldItem8)
	.endif

	@ data/text/apprentice.inc:373 gText_ApprenticeItemAlreadyRecommended8
	.globl gText_ApprenticeItemAlreadyRecommended8
gText_ApprenticeItemAlreadyRecommended8: @ 0x0826F62C
	.string "あれ まえにも {STR_VAR_1}を\nおすすめして くれました よね!\pやっぱり コレが いちばん ですかっ?\nあ それとも もしかして\l{STR_VAR_2}には なにも\lもたせなくて いいって ことですかっ?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended8) > 0x5b
	.error "gText_ApprenticeItemAlreadyRecommended8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended8) < 0x5b
	.space 0x5b - (. - gText_ApprenticeItemAlreadyRecommended8)
	.endif

	@ data/text/apprentice.inc:376 gText_ApprenticeWhatHeldItem9
	.globl gText_ApprenticeWhatHeldItem9
gText_ApprenticeWhatHeldItem9: @ 0x0826F687
	.string "ハロウ ハローウ\nマイ ティーチャー {PLAYER}{KUN}!\pきょうは ポケモンの どうぐに ついて\nアドバイスを おねがい したいんだ!\pおじさんの {STR_VAR_1}には\nどんな どうぐを もたせれば いいかな?\lパーっと きめちゃって くれ!"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem9) > 0x70
	.error "gText_ApprenticeWhatHeldItem9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem9) < 0x70
	.space 0x70 - (. - gText_ApprenticeWhatHeldItem9)
	.endif

