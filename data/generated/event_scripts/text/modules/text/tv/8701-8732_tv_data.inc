	.globl gText_Rom_252E95
	.set gText_Rom_252E95, gText_Rom_252E0D + 0x88

	@ data/text/tv.inc:1141 GabbyAndTy_Text_GabbyPreFirstBattle (+1 aliases)
	.globl gText_Rom_252E99
gText_Rom_252E99: @ 0x08252E99
	.string "マリ『おっ こんなところに\nつよそうな トレーナー はっけん!\pよーし カメラを まわして\nインタビュー かいしよ!"
	.byte EOS
	.if (. - gText_Rom_252E99) > 0x3b
	.error "gText_Rom_252E99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252E99) < 0x3b
	.space 0x3b - (. - gText_Rom_252E99)
	.endif

	@ data/text/tv.inc:1162 GabbyAndTy_Text_GabbyIntro (+1 aliases)
	.globl gText_Rom_252ED4
gText_Rom_252ED4: @ 0x08252ED4
	.string "マリ『あ! あなたは\nこのあいだの {PLAYER}さん!\pよーし どのくらい つよく なったか\nさっそく インタビュー かいしよ!"
	.byte EOS
	.if (. - gText_Rom_252ED4) > 0x3d
	.error "gText_Rom_252ED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252ED4) < 0x3d
	.space 0x3d - (. - gText_Rom_252ED4)
	.endif

	@ data/text/tv.inc:1144 GabbyAndTy_Text_GabbyDefeatFirstTime (+1 aliases)
	.globl gText_Rom_252F11
gText_Rom_252F11: @ 0x08252F11
	.string "マリ『わたしの めに くるいはないわ\nすごい トレーナーの はっけんよ!"
	.byte EOS
	.if (. - gText_Rom_252F11) > 0x25
	.error "gText_Rom_252F11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252F11) < 0x25
	.space 0x25 - (. - gText_Rom_252F11)
	.endif

	@ data/text/tv.inc:1177 GabbyAndTy_Text_WhoAreYouInterview
	.globl gText_Rom_252F36
gText_Rom_252F36: @ 0x08252F36
	.string "マリ『すごい! すごい!\nあなた いったい なにもの!?\pさすが わたしたちが\nめを つけただけ あるわ!\p……あっ じつは わたしたち\nいろんな ばしょの いろんな トレーナーを\lインタビューして まわっているのよ\pだから すこしだけ\nインタビュー させて もらえないかな?"
	.byte EOS
	.if (. - gText_Rom_252F36) > 0x8b
	.error "gText_Rom_252F36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252F36) < 0x8b
	.space 0x8b - (. - gText_Rom_252F36)
	.endif

	@ data/text/tv.inc:1180 GabbyAndTy_Text_QuoteFromLastInterview
	.globl gText_Rom_252FC1
gText_Rom_252FC1: @ 0x08252FC1
	.string "マリ『「{STR_VAR_1}!」\pおぼえてる? まえに たたかった とき\nあなたが いった きめゼリフよ\pわたしたち ちゃーんと\nおぼえてるん だからね!"
	.byte EOS
	.if (. - gText_Rom_252FC1) > 0x46
	.error "gText_Rom_252FC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252FC1) < 0x46
	.space 0x46 - (. - gText_Rom_252FC1)
	.endif

	@ data/text/tv.inc:1189 GabbyAndTy_Text_YouStompedUsInterviewAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_253007
gText_Rom_253007: @ 0x08253007
	.string "そうそう まえに たたかった ときは\nても あしも でなかった のよねぇ……\pところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - gText_Rom_253007) != 0x41
	.error "gText_Rom_253007 must retain its original byte length"
	.endif
	.globl gText_Rom_25302E
	.set gText_Rom_25302E, gText_Rom_253007 + 0x27

	@ data/text/tv.inc:1192 GabbyAndTy_Text_YouThrewABallAtUsInterviewAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_253048
gText_Rom_253048: @ 0x08253048
	.string "そうそう まえに たたかった ときは\nボールを なげられ たんだっけ……\pもう びっくりして みんなに\nいいふらし ちゃったわよ!\pところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - gText_Rom_253048) != 0x5c
	.error "gText_Rom_253048 must retain its original byte length"
	.endif
	.globl gText_Rom_25308A
	.set gText_Rom_25308A, gText_Rom_253048 + 0x42

	@ data/text/tv.inc:1195 GabbyAndTy_Text_CleverItemSkillsInterviewAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2530A4
gText_Rom_2530A4: @ 0x082530A4
	.string "そうそう まえに たたかった ときは\nどうぐを うまく つかわれて\lまけちゃった のよね\pところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - gText_Rom_2530A4) != 0x47
	.error "gText_Rom_2530A4 must retain its original byte length"
	.endif
	.globl gText_Rom_2530D1
	.set gText_Rom_2530D1, gText_Rom_2530A4 + 0x2d

	@ data/text/tv.inc:1198 GabbyAndTy_Text_WeLookedRespectableInterviewAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2530EB
gText_Rom_2530EB: @ 0x082530EB
	.string "そうそう まえに たたかった ときは\nけっこう いいしょうぶ だったんだよね……\pところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - gText_Rom_2530EB) != 0x43
	.error "gText_Rom_2530EB must retain its original byte length"
	.endif
	.globl gText_Rom_253114
	.set gText_Rom_253114, gText_Rom_2530EB + 0x29

	@ data/text/tv.inc:1186 GabbyAndTy_Text_InterviewAgain
	.globl gText_Rom_25312E
gText_Rom_25312E: @ 0x0825312E
	.string "ところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - gText_Rom_25312E) > 0x1a
	.error "gText_Rom_25312E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25312E) < 0x1a
	.space 0x1a - (. - gText_Rom_25312E)
	.endif

	@ data/text/tv.inc:1201 GabbyAndTy_Text_DescribeYourFeelings
	.globl gText_Rom_253148
gText_Rom_253148: @ 0x08253148
	.string "ほんと!?\nありがとう!\pじゃあ たたかいの あとの\nかんそうを ビシッと ひとことで\lどうぞ!"
	.byte EOS
	.if (. - gText_Rom_253148) > 0x31
	.error "gText_Rom_253148 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253148) < 0x31
	.space 0x31 - (. - gText_Rom_253148)
	.endif

	@ data/text/tv.inc:1204 GabbyAndTy_Text_PerfectWellBeSeeingYou
	.globl gText_Rom_253179
gText_Rom_253179: @ 0x08253179
	.string "マリ『んー!\nさいこうの きめゼリフね\pなんか いいテレビばんぐみが\nできそうな よかん!\pもしかしたら このことを\nテレビで ほうそうするかも しれないから\lテレビの チェックを わすれないでね!\pそれじゃあ\nまた どこかで!"
	.byte EOS
	.if (. - gText_Rom_253179) > 0x73
	.error "gText_Rom_253179 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253179) < 0x73
	.space 0x73 - (. - gText_Rom_253179)
	.endif

	@ data/text/tv.inc:1207 GabbyAndTy_Text_DontGiveUpKeepingEyeOut
	.globl gText_Rom_2531EC
gText_Rom_2531EC: @ 0x082531EC
	.string "マリ『そう……\pでも これからも がんばってね!\nあなたのこと ちゅうもく してるわ!"
	.byte EOS
	.if (. - gText_Rom_2531EC) > 0x2c
	.error "gText_Rom_2531EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2531EC) < 0x2c
	.space 0x2c - (. - gText_Rom_2531EC)
	.endif

