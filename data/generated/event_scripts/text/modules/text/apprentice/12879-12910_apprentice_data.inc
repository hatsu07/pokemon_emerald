	@ data/text/apprentice.inc:235 gText_ApprenticeWhichLevelMode15
	.globl gText_Rom_26E9A3
gText_Rom_26E9A3: @ 0x0826E9A3
	.string "ほんとうに みとめて くれるのかね?\nぬかよろこびは したく ないからな\pいや ほんとうなら いいんだ わるかった\nさっそく そうだんに のってほしい\pわたしが バトルタワーに でるなら\nレベル50…… オープンレベル……\lどちらの ほうが ふさわしいと おもうかね"
	.byte EOS
	.if (. - gText_Rom_26E9A3) > 0x86
	.error "gText_Rom_26E9A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E9A3) < 0x86
	.space 0x86 - (. - gText_Rom_26E9A3)
	.endif

	@ data/text/apprentice.inc:238 gText_ApprenticeLevelModeThanks15
	.globl gText_Rom_26EA29
gText_Rom_26EA29: @ 0x0826EA29
	.string "{STR_VAR_1}…… ほんとうかね?\pいや ほんとう なら いいんだ\nどうも ありがとう\pこんな わたし だが\nでし として みとめて くれて うれしい\lいずれまた あおう!"
	.byte EOS
	.if (. - gText_Rom_26EA29) > 0x52
	.error "gText_Rom_26EA29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EA29) < 0x52
	.space 0x52 - (. - gText_Rom_26EA29)
	.endif

	@ data/text/apprentice.inc:241 gText_ApprenticeWhatHeldItem0
	.globl gText_Rom_26EA7B
gText_Rom_26EA7B: @ 0x0826EA7B
	.string "はあ…… シクシク\nああっ {PLAYER}さん!\pぼくね きめられない ことが あって\nちょっと こまってたんです\pきめられない のは {STR_VAR_1}に\nなにを もたせるかって ことなんです\lおしえて ください {PLAYER}さん\lなにか もたせた ほうが いいですか?"
	.byte EOS
	.if (. - gText_Rom_26EA7B) > 0x79
	.error "gText_Rom_26EA7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EA7B) < 0x79
	.space 0x79 - (. - gText_Rom_26EA7B)
	.endif

	@ data/text/apprentice.inc:244 gText_ApprenticeHoldNothing0
	.globl gText_Rom_26EAF4
gText_Rom_26EAF4: @ 0x0826EAF4
	.string "えっ…… {STR_VAR_1}は\nなにも もたないほうが いいんですか?"
	.byte EOS
	.if (. - gText_Rom_26EAF4) > 0x1d
	.error "gText_Rom_26EAF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EAF4) < 0x1d
	.space 0x1d - (. - gText_Rom_26EAF4)
	.endif

	@ data/text/apprentice.inc:247 gText_ApprenticeThanksNoHeldItem0
	.globl gText_Rom_26EB11
gText_Rom_26EB11: @ 0x0826EB11
	.string "わっ わかりました!\nきまって うれしいです うぉぉーん!\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_Rom_26EB11) > 0x30
	.error "gText_Rom_26EB11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EB11) < 0x30
	.space 0x30 - (. - gText_Rom_26EB11)
	.endif

	@ data/text/apprentice.inc:250 gText_ApprenticeThanksHeldItem0
	.globl gText_Rom_26EB41
gText_Rom_26EB41: @ 0x0826EB41
	.string "よ よかった\n{STR_VAR_1}なら もってるかも……\lきまって うれしいです うぉぉーん!\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_Rom_26EB41) > 0x3a
	.error "gText_Rom_26EB41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EB41) < 0x3a
	.space 0x3a - (. - gText_Rom_26EB41)
	.endif

	@ data/text/apprentice.inc:253 gText_ApprenticeItemAlreadyRecommended0
	.globl gText_Rom_26EB7B
gText_Rom_26EB7B: @ 0x0826EB7B
	.string "うわーん! ひどいです\n{STR_VAR_1}は もう\lおしえてもらった どうぐ です グスン\pそれとも {STR_VAR_2}は\nなにも もたないほうが いいんですか?"
	.byte EOS
	.if (. - gText_Rom_26EB7B) > 0x44
	.error "gText_Rom_26EB7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EB7B) < 0x44
	.space 0x44 - (. - gText_Rom_26EB7B)
	.endif

	@ data/text/apprentice.inc:256 gText_ApprenticeWhatHeldItem1
	.globl gText_Rom_26EBBF
gText_Rom_26EBBF: @ 0x0826EBBF
	.string "わー {PLAYER}さん だ!\nよかった! ききたい ことが あったんだ!\pあのね {PLAYER}さんは\nポケモンに どうぐを もたせてる?\lボクも もたせたいんだけど……\pボクの {STR_VAR_1}には\nなにを もたせたら いいのかな\l{PLAYER}さんは どう おもう?"
	.byte EOS
	.if (. - gText_Rom_26EBBF) > 0x74
	.error "gText_Rom_26EBBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EBBF) < 0x74
	.space 0x74 - (. - gText_Rom_26EBBF)
	.endif

	@ data/text/apprentice.inc:259 gText_ApprenticeHoldNothing1
	.globl gText_Rom_26EC33
gText_Rom_26EC33: @ 0x0826EC33
	.string "えっ {STR_VAR_1}は\nなにも もたせなくて いいって こと?"
	.byte EOS
	.if (. - gText_Rom_26EC33) > 0x1b
	.error "gText_Rom_26EC33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EC33) < 0x1b
	.space 0x1b - (. - gText_Rom_26EC33)
	.endif

	@ data/text/apprentice.inc:262 gText_ApprenticeThanksNoHeldItem1
	.globl gText_Rom_26EC4E
gText_Rom_26EC4E: @ 0x0826EC4E
	.string "わかったー じゃあ そうするー!\nせんせい ありがと!"
	.byte EOS
	.if (. - gText_Rom_26EC4E) > 0x1c
	.error "gText_Rom_26EC4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EC4E) < 0x1c
	.space 0x1c - (. - gText_Rom_26EC4E)
	.endif

	@ data/text/apprentice.inc:265 gText_ApprenticeThanksHeldItem1
	.globl gText_Rom_26EC6A
gText_Rom_26EC6A: @ 0x0826EC6A
	.string "へええ! {STR_VAR_1}かー\nじゃあ そうするー!\pせんせい ありがと!"
	.byte EOS
	.if (. - gText_Rom_26EC6A) > 0x20
	.error "gText_Rom_26EC6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EC6A) < 0x20
	.space 0x20 - (. - gText_Rom_26EC6A)
	.endif

	@ data/text/apprentice.inc:268 gText_ApprenticeItemAlreadyRecommended1
	.globl gText_Rom_26EC8A
gText_Rom_26EC8A: @ 0x0826EC8A
	.string "あ えっと そうじゃなくて\nまだ おしえて もらってない どうぐで\lなにが いいか しりたいんだ!\pそれとも こんどは\nなにも もたせなくって いいのかな?"
	.byte EOS
	.if (. - gText_Rom_26EC8A) > 0x4f
	.error "gText_Rom_26EC8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EC8A) < 0x4f
	.space 0x4f - (. - gText_Rom_26EC8A)
	.endif

	@ data/text/apprentice.inc:271 gText_ApprenticeWhatHeldItem2
	.globl gText_Rom_26ECD9
gText_Rom_26ECD9: @ 0x0826ECD9
	.string "{PLAYER}さん こんにちは!\nぼくの {STR_VAR_1}の ことなんだけど\pなにか もちものを もたせたいんだ!\nなにか いい もちもの おしえてください!"
	.byte EOS
	.if (. - gText_Rom_26ECD9) > 0x45
	.error "gText_Rom_26ECD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ECD9) < 0x45
	.space 0x45 - (. - gText_Rom_26ECD9)
	.endif

	@ data/text/apprentice.inc:274 gText_ApprenticeHoldNothing2
	.globl gText_Rom_26ED1E
gText_Rom_26ED1E: @ 0x0826ED1E
	.string "じゃあ {STR_VAR_1}には\nなにも もたせなくても いいんだね?"
	.byte EOS
	.if (. - gText_Rom_26ED1E) > 0x1c
	.error "gText_Rom_26ED1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ED1E) < 0x1c
	.space 0x1c - (. - gText_Rom_26ED1E)
	.endif

	@ data/text/apprentice.inc:277 gText_ApprenticeThanksNoHeldItem2
	.globl gText_Rom_26ED3A
gText_Rom_26ED3A: @ 0x0826ED3A
	.string "わかりました!\nじゃあ また!"
	.byte EOS
	.if (. - gText_Rom_26ED3A) > 0x10
	.error "gText_Rom_26ED3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ED3A) < 0x10
	.space 0x10 - (. - gText_Rom_26ED3A)
	.endif

	@ data/text/apprentice.inc:280 gText_ApprenticeThanksHeldItem2
	.globl gText_Rom_26ED4A
gText_Rom_26ED4A: @ 0x0826ED4A
	.string "{STR_VAR_1} ですか!\nわかりました!\pがんばって さがしてきます!\nじゃあ また!"
	.byte EOS
	.if (. - gText_Rom_26ED4A) > 0x27
	.error "gText_Rom_26ED4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ED4A) < 0x27
	.space 0x27 - (. - gText_Rom_26ED4A)
	.endif

