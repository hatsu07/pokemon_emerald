	@ data/text/apprentice.inc:331 gText_ApprenticeWhatHeldItem6
	.globl gText_Rom_26F23B
gText_Rom_26F23B: @ 0x0826F23B
	.string "よぅ {PLAYER}さん わたしだよ!\nきょうも ひとつ そうだんが あるの\lアドバイス おねがい ねっ!\pジャーン では そうだんです!\nわたしの {STR_VAR_1}に\lなにか どうぐを もたせるなら\lいったい なにに したら いいかな?"
	.byte EOS
	.if (. - gText_Rom_26F23B) > 0x6d
	.error "gText_Rom_26F23B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F23B) < 0x6d
	.space 0x6d - (. - gText_Rom_26F23B)
	.endif

	@ data/text/apprentice.inc:334 gText_ApprenticeHoldNothing6
	.globl gText_Rom_26F2A8
gText_Rom_26F2A8: @ 0x0826F2A8
	.string "ふーん? {STR_VAR_1}は\nもちものは いらないって ことかな?"
	.byte EOS
	.if (. - gText_Rom_26F2A8) > 0x1c
	.error "gText_Rom_26F2A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F2A8) < 0x1c
	.space 0x1c - (. - gText_Rom_26F2A8)
	.endif

	@ data/text/apprentice.inc:337 gText_ApprenticeThanksNoHeldItem6
	.globl gText_Rom_26F2C4
gText_Rom_26F2C4: @ 0x0826F2C4
	.string "じゃ そうするね!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_Rom_26F2C4) > 0x32
	.error "gText_Rom_26F2C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F2C4) < 0x32
	.space 0x32 - (. - gText_Rom_26F2C4)
	.endif

	@ data/text/apprentice.inc:340 gText_ApprenticeThanksHeldItem6
	.globl gText_Rom_26F2F6
gText_Rom_26F2F6: @ 0x0826F2F6
	.string "ははぁーん!\n{STR_VAR_1}とは シブイわぁ\lぜひ そうして みるね!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_Rom_26F2F6) > 0x47
	.error "gText_Rom_26F2F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F2F6) < 0x47
	.space 0x47 - (. - gText_Rom_26F2F6)
	.endif

	@ data/text/apprentice.inc:343 gText_ApprenticeItemAlreadyRecommended6
	.globl gText_Rom_26F33D
gText_Rom_26F33D: @ 0x0826F33D
	.string "あっはは やだぁ\n{STR_VAR_1}は もう\lおしえて もらった じゃない!\l{PLAYER}さん だいじょぶ?\pあ! それとも {STR_VAR_2}は\nもちものは いらないって ことかな?"
	.byte EOS
	.if (. - gText_Rom_26F33D) > 0x4b
	.error "gText_Rom_26F33D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F33D) < 0x4b
	.space 0x4b - (. - gText_Rom_26F33D)
	.endif

	@ data/text/apprentice.inc:346 gText_ApprenticeWhatHeldItem7
	.globl gText_Rom_26F388
gText_Rom_26F388: @ 0x0826F388
	.string "ごきげん いかがですか {PLAYER}さん\nきいて くださる?\pこのまえ たたかった トレーナーさん\nポケモンに なにか どうぐを\lもたせていた らしいんですの\pおかげで まけて しまいましたわ……\pわたくしも まけずに なにか\n{STR_VAR_1}に もたせたいんですの!\lなにが よろしいの でしょう\lきめて いただければ うれしいのですが……"
	.byte EOS
	.if (. - gText_Rom_26F388) > 0xa2
	.error "gText_Rom_26F388 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F388) < 0xa2
	.space 0xa2 - (. - gText_Rom_26F388)
	.endif

	@ data/text/apprentice.inc:349 gText_ApprenticeHoldNothing7
	.globl gText_Rom_26F42A
gText_Rom_26F42A: @ 0x0826F42A
	.string "それは つまり…… どうぐは\nもたせなくて よろしいんですのね?"
	.byte EOS
	.if (. - gText_Rom_26F42A) > 0x21
	.error "gText_Rom_26F42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F42A) < 0x21
	.space 0x21 - (. - gText_Rom_26F42A)
	.endif

	@ data/text/apprentice.inc:352 gText_ApprenticeThanksNoHeldItem7
	.globl gText_Rom_26F44B
gText_Rom_26F44B: @ 0x0826F44B
	.string "わかりましたわ!\nこのまま がんばる ことに しますわ\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_Rom_26F44B) > 0x42
	.error "gText_Rom_26F44B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F44B) < 0x42
	.space 0x42 - (. - gText_Rom_26F44B)
	.endif

	@ data/text/apprentice.inc:355 gText_ApprenticeThanksHeldItem7
	.globl gText_Rom_26F48D
gText_Rom_26F48D: @ 0x0826F48D
	.string "{STR_VAR_1} ですのね!\nさっそく とりよせますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_Rom_26F48D) > 0x3d
	.error "gText_Rom_26F48D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F48D) < 0x3d
	.space 0x3d - (. - gText_Rom_26F48D)
	.endif

	@ data/text/apprentice.inc:358 gText_ApprenticeItemAlreadyRecommended7
	.globl gText_Rom_26F4CA
gText_Rom_26F4CA: @ 0x0826F4CA
	.string "それは もう おしえて いただいて\nわたくし もっておりますわ!\pそれとも…… {STR_VAR_2}には\nなにも もたせないで よろしいと……?"
	.byte EOS
	.if (. - gText_Rom_26F4CA) > 0x41
	.error "gText_Rom_26F4CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F4CA) < 0x41
	.space 0x41 - (. - gText_Rom_26F4CA)
	.endif

	@ data/text/apprentice.inc:361 gText_ApprenticeWhatHeldItem8
	.globl gText_Rom_26F50B
gText_Rom_26F50B: @ 0x0826F50B
	.string "{PLAYER}さんっ!\nきょうも あえて かんげき ですっ……!\pそそそそそ そうだっ!\nあのっ {PLAYER}さんに\lきめて ほしいことが あるのですっ!\pわたしの {STR_VAR_1}には\nなにを もたせれば いいですかっ?"
	.byte EOS
	.if (. - gText_Rom_26F50B) > 0x61
	.error "gText_Rom_26F50B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F50B) < 0x61
	.space 0x61 - (. - gText_Rom_26F50B)
	.endif

	@ data/text/apprentice.inc:364 gText_ApprenticeHoldNothing8
	.globl gText_Rom_26F56C
gText_Rom_26F56C: @ 0x0826F56C
	.string "うわあぁっ いがいな おこたえだあ!\nつまり なにも いらないの ですねっ?"
	.byte EOS
	.if (. - gText_Rom_26F56C) > 0x27
	.error "gText_Rom_26F56C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F56C) < 0x27
	.space 0x27 - (. - gText_Rom_26F56C)
	.endif

	@ data/text/apprentice.inc:367 gText_ApprenticeThanksNoHeldItem8
	.globl gText_Rom_26F593
gText_Rom_26F593: @ 0x0826F593
	.string "りょうかいで ありますっ!\nどうぐ なしで がんばるで あります!\pでは また こんど\nいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_Rom_26F593) > 0x3e
	.error "gText_Rom_26F593 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F593) < 0x3e
	.space 0x3e - (. - gText_Rom_26F593)
	.endif

	@ data/text/apprentice.inc:370 gText_ApprenticeThanksHeldItem8
	.globl gText_Rom_26F5D1
gText_Rom_26F5D1: @ 0x0826F5D1
	.string "{STR_VAR_1} ですねっ!\nこれって これって {PLAYER}さんと\lもしかして おそろい だったりしてっ!\pもー ぜったい もたせちゃいます!\nでは また こんど\lいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_Rom_26F5D1) > 0x5b
	.error "gText_Rom_26F5D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F5D1) < 0x5b
	.space 0x5b - (. - gText_Rom_26F5D1)
	.endif

	@ data/text/apprentice.inc:373 gText_ApprenticeItemAlreadyRecommended8
	.globl gText_Rom_26F62C
gText_Rom_26F62C: @ 0x0826F62C
	.string "あれ まえにも {STR_VAR_1}を\nおすすめして くれました よね!\pやっぱり コレが いちばん ですかっ?\nあ それとも もしかして\l{STR_VAR_2}には なにも\lもたせなくて いいって ことですかっ?"
	.byte EOS
	.if (. - gText_Rom_26F62C) > 0x5b
	.error "gText_Rom_26F62C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F62C) < 0x5b
	.space 0x5b - (. - gText_Rom_26F62C)
	.endif

	@ data/text/apprentice.inc:376 gText_ApprenticeWhatHeldItem9
	.globl gText_Rom_26F687
gText_Rom_26F687: @ 0x0826F687
	.string "ハロウ ハローウ\nマイ ティーチャー {PLAYER}{KUN}!\pきょうは ポケモンの どうぐに ついて\nアドバイスを おねがい したいんだ!\pおじさんの {STR_VAR_1}には\nどんな どうぐを もたせれば いいかな?\lパーっと きめちゃって くれ!"
	.byte EOS
	.if (. - gText_Rom_26F687) > 0x70
	.error "gText_Rom_26F687 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F687) < 0x70
	.space 0x70 - (. - gText_Rom_26F687)
	.endif

