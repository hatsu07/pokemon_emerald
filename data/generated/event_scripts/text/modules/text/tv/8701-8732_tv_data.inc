	.globl gText_Rom_252E95
	.set gText_Rom_252E95, gText_Rom_252E0D + 0x88

	@ data/text/tv.inc:1141 GabbyAndTy_Text_GabbyPreFirstBattle (+1 aliases)
	.globl GabbyAndTy_Text_GabbyPreFirstBattle
GabbyAndTy_Text_GabbyPreFirstBattle: @ 0x08252E99
	.string "マリ『おっ こんなところに\nつよそうな トレーナー はっけん!\pよーし カメラを まわして\nインタビュー かいしよ!"
	.byte EOS
	.if (. - GabbyAndTy_Text_GabbyPreFirstBattle) > 0x3b
	.error "GabbyAndTy_Text_GabbyPreFirstBattle may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_GabbyPreFirstBattle) < 0x3b
	.space 0x3b - (. - GabbyAndTy_Text_GabbyPreFirstBattle)
	.endif

	@ data/text/tv.inc:1162 GabbyAndTy_Text_GabbyIntro (+1 aliases)
	.globl GabbyAndTy_Text_GabbyIntro
GabbyAndTy_Text_GabbyIntro: @ 0x08252ED4
	.string "マリ『あ! あなたは\nこのあいだの {PLAYER}さん!\pよーし どのくらい つよく なったか\nさっそく インタビュー かいしよ!"
	.byte EOS
	.if (. - GabbyAndTy_Text_GabbyIntro) > 0x3d
	.error "GabbyAndTy_Text_GabbyIntro may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_GabbyIntro) < 0x3d
	.space 0x3d - (. - GabbyAndTy_Text_GabbyIntro)
	.endif

	@ data/text/tv.inc:1144 GabbyAndTy_Text_GabbyDefeatFirstTime (+1 aliases)
	.globl GabbyAndTy_Text_GabbyDefeatFirstTime
GabbyAndTy_Text_GabbyDefeatFirstTime: @ 0x08252F11
	.string "マリ『わたしの めに くるいはないわ\nすごい トレーナーの はっけんよ!"
	.byte EOS
	.if (. - GabbyAndTy_Text_GabbyDefeatFirstTime) > 0x25
	.error "GabbyAndTy_Text_GabbyDefeatFirstTime may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_GabbyDefeatFirstTime) < 0x25
	.space 0x25 - (. - GabbyAndTy_Text_GabbyDefeatFirstTime)
	.endif

	@ data/text/tv.inc:1177 GabbyAndTy_Text_WhoAreYouInterview
	.globl GabbyAndTy_Text_WhoAreYouInterview
GabbyAndTy_Text_WhoAreYouInterview: @ 0x08252F36
	.string "マリ『すごい! すごい!\nあなた いったい なにもの!?\pさすが わたしたちが\nめを つけただけ あるわ!\p……あっ じつは わたしたち\nいろんな ばしょの いろんな トレーナーを\lインタビューして まわっているのよ\pだから すこしだけ\nインタビュー させて もらえないかな?"
	.byte EOS
	.if (. - GabbyAndTy_Text_WhoAreYouInterview) > 0x8b
	.error "GabbyAndTy_Text_WhoAreYouInterview may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_WhoAreYouInterview) < 0x8b
	.space 0x8b - (. - GabbyAndTy_Text_WhoAreYouInterview)
	.endif

	@ data/text/tv.inc:1180 GabbyAndTy_Text_QuoteFromLastInterview
	.globl GabbyAndTy_Text_QuoteFromLastInterview
GabbyAndTy_Text_QuoteFromLastInterview: @ 0x08252FC1
	.string "マリ『「{STR_VAR_1}!」\pおぼえてる? まえに たたかった とき\nあなたが いった きめゼリフよ\pわたしたち ちゃーんと\nおぼえてるん だからね!"
	.byte EOS
	.if (. - GabbyAndTy_Text_QuoteFromLastInterview) > 0x46
	.error "GabbyAndTy_Text_QuoteFromLastInterview may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_QuoteFromLastInterview) < 0x46
	.space 0x46 - (. - GabbyAndTy_Text_QuoteFromLastInterview)
	.endif

	@ data/text/tv.inc:1189 GabbyAndTy_Text_YouStompedUsInterviewAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl GabbyAndTy_Text_YouStompedUsInterviewAgain
GabbyAndTy_Text_YouStompedUsInterviewAgain: @ 0x08253007
	.string "そうそう まえに たたかった ときは\nても あしも でなかった のよねぇ……\pところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - GabbyAndTy_Text_YouStompedUsInterviewAgain) != 0x41
	.error "GabbyAndTy_Text_YouStompedUsInterviewAgain must retain its original byte length"
	.endif
	.globl gText_Rom_25302E
	.set gText_Rom_25302E, GabbyAndTy_Text_YouStompedUsInterviewAgain + 0x27

	@ data/text/tv.inc:1192 GabbyAndTy_Text_YouThrewABallAtUsInterviewAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl GabbyAndTy_Text_YouThrewABallAtUsInterviewAgain
GabbyAndTy_Text_YouThrewABallAtUsInterviewAgain: @ 0x08253048
	.string "そうそう まえに たたかった ときは\nボールを なげられ たんだっけ……\pもう びっくりして みんなに\nいいふらし ちゃったわよ!\pところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - GabbyAndTy_Text_YouThrewABallAtUsInterviewAgain) != 0x5c
	.error "GabbyAndTy_Text_YouThrewABallAtUsInterviewAgain must retain its original byte length"
	.endif
	.globl gText_Rom_25308A
	.set gText_Rom_25308A, GabbyAndTy_Text_YouThrewABallAtUsInterviewAgain + 0x42

	@ data/text/tv.inc:1195 GabbyAndTy_Text_CleverItemSkillsInterviewAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl GabbyAndTy_Text_CleverItemSkillsInterviewAgain
GabbyAndTy_Text_CleverItemSkillsInterviewAgain: @ 0x082530A4
	.string "そうそう まえに たたかった ときは\nどうぐを うまく つかわれて\lまけちゃった のよね\pところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - GabbyAndTy_Text_CleverItemSkillsInterviewAgain) != 0x47
	.error "GabbyAndTy_Text_CleverItemSkillsInterviewAgain must retain its original byte length"
	.endif
	.globl gText_Rom_2530D1
	.set gText_Rom_2530D1, GabbyAndTy_Text_CleverItemSkillsInterviewAgain + 0x2d

	@ data/text/tv.inc:1198 GabbyAndTy_Text_WeLookedRespectableInterviewAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl GabbyAndTy_Text_WeLookedRespectableInterviewAgain
GabbyAndTy_Text_WeLookedRespectableInterviewAgain: @ 0x082530EB
	.string "そうそう まえに たたかった ときは\nけっこう いいしょうぶ だったんだよね……\pところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - GabbyAndTy_Text_WeLookedRespectableInterviewAgain) != 0x43
	.error "GabbyAndTy_Text_WeLookedRespectableInterviewAgain must retain its original byte length"
	.endif
	.globl gText_Rom_253114
	.set gText_Rom_253114, GabbyAndTy_Text_WeLookedRespectableInterviewAgain + 0x29

	@ data/text/tv.inc:1186 GabbyAndTy_Text_InterviewAgain
	.globl GabbyAndTy_Text_InterviewAgain
GabbyAndTy_Text_InterviewAgain: @ 0x0825312E
	.string "ところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - GabbyAndTy_Text_InterviewAgain) > 0x1a
	.error "GabbyAndTy_Text_InterviewAgain may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_InterviewAgain) < 0x1a
	.space 0x1a - (. - GabbyAndTy_Text_InterviewAgain)
	.endif

	@ data/text/tv.inc:1201 GabbyAndTy_Text_DescribeYourFeelings
	.globl GabbyAndTy_Text_DescribeYourFeelings
GabbyAndTy_Text_DescribeYourFeelings: @ 0x08253148
	.string "ほんと!?\nありがとう!\pじゃあ たたかいの あとの\nかんそうを ビシッと ひとことで\lどうぞ!"
	.byte EOS
	.if (. - GabbyAndTy_Text_DescribeYourFeelings) > 0x31
	.error "GabbyAndTy_Text_DescribeYourFeelings may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_DescribeYourFeelings) < 0x31
	.space 0x31 - (. - GabbyAndTy_Text_DescribeYourFeelings)
	.endif

	@ data/text/tv.inc:1204 GabbyAndTy_Text_PerfectWellBeSeeingYou
	.globl GabbyAndTy_Text_PerfectWellBeSeeingYou
GabbyAndTy_Text_PerfectWellBeSeeingYou: @ 0x08253179
	.string "マリ『んー!\nさいこうの きめゼリフね\pなんか いいテレビばんぐみが\nできそうな よかん!\pもしかしたら このことを\nテレビで ほうそうするかも しれないから\lテレビの チェックを わすれないでね!\pそれじゃあ\nまた どこかで!"
	.byte EOS
	.if (. - GabbyAndTy_Text_PerfectWellBeSeeingYou) > 0x73
	.error "GabbyAndTy_Text_PerfectWellBeSeeingYou may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_PerfectWellBeSeeingYou) < 0x73
	.space 0x73 - (. - GabbyAndTy_Text_PerfectWellBeSeeingYou)
	.endif

	@ data/text/tv.inc:1207 GabbyAndTy_Text_DontGiveUpKeepingEyeOut
	.globl GabbyAndTy_Text_DontGiveUpKeepingEyeOut
GabbyAndTy_Text_DontGiveUpKeepingEyeOut: @ 0x082531EC
	.string "マリ『そう……\pでも これからも がんばってね!\nあなたのこと ちゅうもく してるわ!"
	.byte EOS
	.if (. - GabbyAndTy_Text_DontGiveUpKeepingEyeOut) > 0x2c
	.error "GabbyAndTy_Text_DontGiveUpKeepingEyeOut may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_DontGiveUpKeepingEyeOut) < 0x2c
	.space 0x2c - (. - GabbyAndTy_Text_DontGiveUpKeepingEyeOut)
	.endif

