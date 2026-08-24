	@ data/text/apprentice.inc:1 gText_ApprenticeChallenge0
	.globl gText_ApprenticeChallenge0
gText_ApprenticeChallenge0: @ 0x0826CD7D
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばん でしです!\nグスン…… きんちょう するなあ"
	.byte EOS
	.if (. - gText_ApprenticeChallenge0) > 0x22
	.error "gText_ApprenticeChallenge0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge0) < 0x22
	.space 0x22 - (. - gText_ApprenticeChallenge0)
	.endif

	@ data/text/apprentice.inc:4 gText_ApprenticeChallenge1
	.globl gText_ApprenticeChallenge1
gText_ApprenticeChallenge1: @ 0x0826CD9F
	.string "ぼく {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でし なんだ! いくぞー!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge1) > 0x1d
	.error "gText_ApprenticeChallenge1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge1) < 0x1d
	.space 0x1d - (. - gText_ApprenticeChallenge1)
	.endif

	@ data/text/apprentice.inc:7 gText_ApprenticeChallenge2
	.globl gText_ApprenticeChallenge2
gText_ApprenticeChallenge2: @ 0x0826CDBC
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんの でしだ!\nいざ しょうぶ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge2) > 0x1a
	.error "gText_ApprenticeChallenge2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge2) < 0x1a
	.space 0x1a - (. - gText_ApprenticeChallenge2)
	.endif

	@ data/text/apprentice.inc:10 gText_ApprenticeChallenge3
	.globl gText_ApprenticeChallenge3
gText_ApprenticeChallenge3: @ 0x0826CDD6
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんでしです…\nあたし なんかが かてる かな……?"
	.byte EOS
	.if (. - gText_ApprenticeChallenge3) > 0x23
	.error "gText_ApprenticeChallenge3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge3) < 0x23
	.space 0x23 - (. - gText_ApprenticeChallenge3)
	.endif

	@ data/text/apprentice.inc:13 gText_ApprenticeChallenge4
	.globl gText_ApprenticeChallenge4
gText_ApprenticeChallenge4: @ 0x0826CDF9
	.string "{STR_VAR_1}の {STR_VAR_2}ばん でしなの!\nしょうぶ して あげるわ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge4) > 0x1d
	.error "gText_ApprenticeChallenge4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge4) < 0x1d
	.space 0x1d - (. - gText_ApprenticeChallenge4)
	.endif

	@ data/text/apprentice.inc:16 gText_ApprenticeChallenge5
	.globl gText_ApprenticeChallenge5
gText_ApprenticeChallenge5: @ 0x0826CE16
	.string "いそがしい なか {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でし やってる オレです!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge5) > 0x23
	.error "gText_ApprenticeChallenge5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge5) < 0x23
	.space 0x23 - (. - gText_ApprenticeChallenge5)
	.endif

	@ data/text/apprentice.inc:19 gText_ApprenticeChallenge6
	.globl gText_ApprenticeChallenge6
gText_ApprenticeChallenge6: @ 0x0826CE39
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんの\nでしトレーナーよ よっろしくぅ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge6) > 0x1d
	.error "gText_ApprenticeChallenge6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge6) < 0x1d
	.space 0x1d - (. - gText_ApprenticeChallenge6)
	.endif

	@ data/text/apprentice.inc:22 gText_ApprenticeChallenge7
	.globl gText_ApprenticeChallenge7
gText_ApprenticeChallenge7: @ 0x0826CE56
	.string "わたくし {STR_VAR_1}さまの {STR_VAR_2}ばんの\nでしで ございますの…… いきますわよ"
	.byte EOS
	.if (. - gText_ApprenticeChallenge7) > 0x25
	.error "gText_ApprenticeChallenge7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge7) < 0x25
	.space 0x25 - (. - gText_ApprenticeChallenge7)
	.endif

	@ data/text/apprentice.inc:25 gText_ApprenticeChallenge8
	.globl gText_ApprenticeChallenge8
gText_ApprenticeChallenge8: @ 0x0826CE7B
	.string "キャー! {STR_VAR_1}せんせいの\n{STR_VAR_2}ばん でし ですっ! がんばります!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge8) > 0x22
	.error "gText_ApprenticeChallenge8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge8) < 0x22
	.space 0x22 - (. - gText_ApprenticeChallenge8)
	.endif

	@ data/text/apprentice.inc:28 gText_ApprenticeChallenge9
	.globl gText_ApprenticeChallenge9
gText_ApprenticeChallenge9: @ 0x0826CE9D
	.string "いえーい! {STR_VAR_1}さんの\n{STR_VAR_2}ばん でしの おじさんと しょうぶ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge9) > 0x21
	.error "gText_ApprenticeChallenge9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge9) < 0x21
	.space 0x21 - (. - gText_ApprenticeChallenge9)
	.endif

	@ data/text/apprentice.inc:31 gText_ApprenticeChallenge10
	.globl gText_ApprenticeChallenge10
gText_ApprenticeChallenge10: @ 0x0826CEBE
	.string "{STR_VAR_1}の 1000ばんめの でしだ!\nうそ ほんとは {STR_VAR_2}ばん! いくぞ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge10) > 0x25
	.error "gText_ApprenticeChallenge10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge10) < 0x25
	.space 0x25 - (. - gText_ApprenticeChallenge10)
	.endif

	@ data/text/apprentice.inc:34 gText_ApprenticeChallenge11
	.globl gText_ApprenticeChallenge11
gText_ApprenticeChallenge11: @ 0x0826CEE3
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんの\nでしだぜ! ノリノリで いってみようぜー!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge11) > 0x22
	.error "gText_ApprenticeChallenge11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge11) < 0x22
	.space 0x22 - (. - gText_ApprenticeChallenge11)
	.endif

	@ data/text/apprentice.inc:37 gText_ApprenticeChallenge12
	.globl gText_ApprenticeChallenge12
gText_ApprenticeChallenge12: @ 0x0826CF05
	.string "イヤハァ! {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でしとは オレのことっ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge12) > 0x1f
	.error "gText_ApprenticeChallenge12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge12) < 0x1f
	.space 0x1f - (. - gText_ApprenticeChallenge12)
	.endif

	@ data/text/apprentice.inc:40 gText_ApprenticeChallenge13
	.globl gText_ApprenticeChallenge13
gText_ApprenticeChallenge13: @ 0x0826CF24
	.string "……ゴホっ ゴホっ よろしく!\n{STR_VAR_1}さんの {STR_VAR_2}ばんでしだ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge13) > 0x1f
	.error "gText_ApprenticeChallenge13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge13) < 0x1f
	.space 0x1f - (. - gText_ApprenticeChallenge13)
	.endif

	@ data/text/apprentice.inc:43 gText_ApprenticeChallenge14
	.globl gText_ApprenticeChallenge14
gText_ApprenticeChallenge14: @ 0x0826CF43
	.string "て てれますが {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でし やってます……!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge14) > 0x20
	.error "gText_ApprenticeChallenge14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge14) < 0x20
	.space 0x20 - (. - gText_ApprenticeChallenge14)
	.endif

	@ data/text/apprentice.inc:46 gText_ApprenticeChallenge15
	.globl gText_ApprenticeChallenge15
gText_ApprenticeChallenge15: @ 0x0826CF63
	.string "うそじゃない! わたしは\n{STR_VAR_1}さんの {STR_VAR_2}ばんの でしだ"
	.byte EOS
	.if (. - gText_ApprenticeChallenge15) > 0x1d
	.error "gText_ApprenticeChallenge15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge15) < 0x1d
	.space 0x1d - (. - gText_ApprenticeChallenge15)
	.endif

