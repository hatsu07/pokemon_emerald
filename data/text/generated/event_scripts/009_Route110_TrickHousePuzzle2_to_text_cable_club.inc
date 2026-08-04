	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:108 Route110_TrickHousePuzzle2_Text_TedDefeat (+1 aliases)
	.globl gText_Rom_23E1F1
gText_Rom_23E1F1: @ 0x0823E1F1
	.string "しょうぶ してたら\nよけい わかんなくなった!$"
	.if (. - gText_Rom_23E1F1) > 0x18
	.error "gText_Rom_23E1F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E1F1) < 0x18
	.space 0x18 - (. - gText_Rom_23E1F1)
	.endif

	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:111 Route110_TrickHousePuzzle2_Text_TedPostBattle
	.globl gText_Rom_23E209
gText_Rom_23E209: @ 0x0823E209
	.string "きみ ぼくの かわりに\nスイッチ ぜんぶ おしてきてよ!$"
	.if (. - gText_Rom_23E209) > 0x1d
	.error "gText_Rom_23E209 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E209) < 0x1d
	.space 0x1d - (. - gText_Rom_23E209)
	.endif

	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:114 Route110_TrickHousePuzzle2_Text_PaulIntro (+1 aliases)
	.globl gText_Rom_23E226
gText_Rom_23E226: @ 0x0823E226
	.string "おっ! カラクリやしき\n2どめの チャレンジだね!$"
	.if (. - gText_Rom_23E226) > 0x1a
	.error "gText_Rom_23E226 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E226) < 0x1a
	.space 0x1a - (. - gText_Rom_23E226)
	.endif

	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:117 Route110_TrickHousePuzzle2_Text_PaulDefeat (+1 aliases)
	.globl gText_Rom_23E240
gText_Rom_23E240: @ 0x0823E240
	.string "ポケモンしょうぶも\nそんなに つよいの?$"
	.if (. - gText_Rom_23E240) > 0x15
	.error "gText_Rom_23E240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E240) < 0x15
	.space 0x15 - (. - gText_Rom_23E240)
	.endif

	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:120 Route110_TrickHousePuzzle2_Text_PaulPostBattle
	.globl gText_Rom_23E255
gText_Rom_23E255: @ 0x0823E255
	.string "カラクリだいおうが ひとりで\nこの しかけを つくってるんだって!$"
	.if (. - gText_Rom_23E255) > 0x22
	.error "gText_Rom_23E255 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E255) < 0x22
	.space 0x22 - (. - gText_Rom_23E255)
	.endif

	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:123 Route110_TrickHousePuzzle2_Text_GeorgiaIntro (+1 aliases)
	.globl gText_Rom_23E277
gText_Rom_23E277: @ 0x0823E277
	.string "いつか わたしの ジムを つくりたくて\nしかけを けんきゅうしてるの!$"
	.if (. - gText_Rom_23E277) > 0x24
	.error "gText_Rom_23E277 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E277) < 0x24
	.space 0x24 - (. - gText_Rom_23E277)
	.endif

	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:126 Route110_TrickHousePuzzle2_Text_GeorgiaDefeat (+1 aliases)
	.globl gText_Rom_23E29B
gText_Rom_23E29B: @ 0x0823E29B
	.string "ポケモンしょうぶは\nけんきゅう ぶそく だったわーっ!$"
	.if (. - gText_Rom_23E29B) > 0x1c
	.error "gText_Rom_23E29B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E29B) < 0x1c
	.space 0x1c - (. - gText_Rom_23E29B)
	.endif

	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:129 Route110_TrickHousePuzzle2_Text_GeorgiaPostBattle
	.globl gText_Rom_23E2B7
gText_Rom_23E2B7: @ 0x0823E2B7
	.string "あなた つよいのね…\nジムリーダーに なれるんじゃない?$"
	.if (. - gText_Rom_23E2B7) > 0x1d
	.error "gText_Rom_23E2B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E2B7) < 0x1d
	.space 0x1d - (. - gText_Rom_23E2B7)
	.endif
	.incbin "baserom.gba", 0x23e2d4, 0x731

	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:304 Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_23EA05
gText_Rom_23EA05: @ 0x0823EA05
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま あこがれ」\p…… …… ……\pかぎの はずれる おとがした!$"
	.if (. - gText_Rom_23EA05) > 0x43
	.error "gText_Rom_23EA05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA05) < 0x43
	.space 0x43 - (. - gText_Rom_23EA05)
	.endif

	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:307 Route110_TrickHousePuzzle3_Text_JustinIntro (+1 aliases)
	.globl gText_Rom_23EA48
gText_Rom_23EA48: @ 0x0823EA48
	.string "なんども おなじ ところに\nもどって きちゃうよー!$"
	.if (. - gText_Rom_23EA48) > 0x1b
	.error "gText_Rom_23EA48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA48) < 0x1b
	.space 0x1b - (. - gText_Rom_23EA48)
	.endif

	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:310 Route110_TrickHousePuzzle3_Text_JustinDefeat (+1 aliases)
	.globl gText_Rom_23EA63
gText_Rom_23EA63: @ 0x0823EA63
	.string "ぼくが こまってるのに\nダメおしで かつなんて ひどいよー!$"
	.if (. - gText_Rom_23EA63) > 0x1f
	.error "gText_Rom_23EA63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA63) < 0x1f
	.space 0x1f - (. - gText_Rom_23EA63)
	.endif

	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:313 Route110_TrickHousePuzzle3_Text_JustinPostBattle
	.globl gText_Rom_23EA82
gText_Rom_23EA82: @ 0x0823EA82
	.string "とびら だらけで\nせまくて こわいよー!$"
	.if (. - gText_Rom_23EA82) > 0x15
	.error "gText_Rom_23EA82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA82) < 0x15
	.space 0x15 - (. - gText_Rom_23EA82)
	.endif

	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:316 Route110_TrickHousePuzzle3_Text_MarthaIntro (+1 aliases)
	.globl gText_Rom_23EA97
gText_Rom_23EA97: @ 0x0823EA97
	.string "なにが なんだか わからなくて\nかなしく なってきたわ……$"
	.if (. - gText_Rom_23EA97) > 0x1e
	.error "gText_Rom_23EA97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA97) < 0x1e
	.space 0x1e - (. - gText_Rom_23EA97)
	.endif

	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:319 Route110_TrickHousePuzzle3_Text_MarthaDefeat (+1 aliases)
	.globl gText_Rom_23EAB5
gText_Rom_23EAB5: @ 0x0823EAB5
	.string "ひっ ひどいわ……$"
	.if (. - gText_Rom_23EAB5) > 0xa
	.error "gText_Rom_23EAB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EAB5) < 0xa
	.space 0xa - (. - gText_Rom_23EAB5)
	.endif

	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:322 Route110_TrickHousePuzzle3_Text_MarthaPostBattle
	.globl gText_Rom_23EABF
gText_Rom_23EABF: @ 0x0823EABF
	.string "どうせ あたしは よわいし\nほうこうおんちよー!$"
	.if (. - gText_Rom_23EABF) > 0x19
	.error "gText_Rom_23EABF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EABF) < 0x19
	.space 0x19 - (. - gText_Rom_23EABF)
	.endif

	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:325 Route110_TrickHousePuzzle3_Text_AlanIntro (+1 aliases)
	.globl gText_Rom_23EAD8
gText_Rom_23EAD8: @ 0x0823EAD8
	.string "いったい なんの ために\nこんな やしきが あるんだろう……?$"
	.if (. - gText_Rom_23EAD8) > 0x20
	.error "gText_Rom_23EAD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EAD8) < 0x20
	.space 0x20 - (. - gText_Rom_23EAD8)
	.endif

	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:328 Route110_TrickHousePuzzle3_Text_AlanDefeat (+1 aliases)
	.globl gText_Rom_23EAF8
gText_Rom_23EAF8: @ 0x0823EAF8
	.string "いったい なぜ\nわしは まけて しまったんだろう……?$"
	.if (. - gText_Rom_23EAF8) > 0x1c
	.error "gText_Rom_23EAF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EAF8) < 0x1c
	.space 0x1c - (. - gText_Rom_23EAF8)
	.endif

	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:331 Route110_TrickHousePuzzle3_Text_AlanPostBattle
	.globl gText_Rom_23EB14
gText_Rom_23EB14: @ 0x0823EB14
	.string "いったい どれくらいの しかけが\nこの やしきに あるんだろう…?\pきみなら わかるかもな$"
	.if (. - gText_Rom_23EB14) > 0x2e
	.error "gText_Rom_23EB14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EB14) < 0x2e
	.space 0x2e - (. - gText_Rom_23EB14)
	.endif
	.incbin "baserom.gba", 0x23eb42, 0x63

	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:30 Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_23EBA5
gText_Rom_23EBA5: @ 0x0823EBA5
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま かっこいい」\p…… …… ……\pかぎの はずれる おとがした!$"
	.if (. - gText_Rom_23EBA5) > 0x44
	.error "gText_Rom_23EBA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EBA5) < 0x44
	.space 0x44 - (. - gText_Rom_23EBA5)
	.endif

	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:33 Route110_TrickHousePuzzle4_Text_CoraIntro (+1 aliases)
	.globl gText_Rom_23EBE9
gText_Rom_23EBE9: @ 0x0823EBE9
	.string "こういうの かんがえるのって めんどう!\nわたしは しょうぶだけ したいのにー!$"
	.if (. - gText_Rom_23EBE9) > 0x29
	.error "gText_Rom_23EBE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EBE9) < 0x29
	.space 0x29 - (. - gText_Rom_23EBE9)
	.endif

	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:36 Route110_TrickHousePuzzle4_Text_CoraDefeat (+1 aliases)
	.globl gText_Rom_23EC12
gText_Rom_23EC12: @ 0x0823EC12
	.string "まけちゃった けど やっぱり\nしょうぶが いちばん たのしい!$"
	.if (. - gText_Rom_23EC12) > 0x20
	.error "gText_Rom_23EC12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EC12) < 0x20
	.space 0x20 - (. - gText_Rom_23EC12)
	.endif

	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:39 Route110_TrickHousePuzzle4_Text_CoraPostBattle
	.globl gText_Rom_23EC32
gText_Rom_23EC32: @ 0x0823EC32
	.string "トレーナーが いそうな ところは\nどこにでも いきたく なるわよね!$"
	.if (. - gText_Rom_23EC32) > 0x23
	.error "gText_Rom_23EC32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EC32) < 0x23
	.space 0x23 - (. - gText_Rom_23EC32)
	.endif

	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:42 Route110_TrickHousePuzzle4_Text_YujiIntro (+1 aliases)
	.globl gText_Rom_23EC55
gText_Rom_23EC55: @ 0x0823EC55
	.string "このくらいの いわは\nゆび いっぽんで らくしょう だぜ!$"
	.if (. - gText_Rom_23EC55) > 0x1e
	.error "gText_Rom_23EC55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EC55) < 0x1e
	.space 0x1e - (. - gText_Rom_23EC55)
	.endif

	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:45 Route110_TrickHousePuzzle4_Text_YujiDefeat (+1 aliases)
	.globl gText_Rom_23EC73
gText_Rom_23EC73: @ 0x0823EC73
	.string "いわが おせても\nパズルが とけない……$"
	.if (. - gText_Rom_23EC73) > 0x15
	.error "gText_Rom_23EC73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EC73) < 0x15
	.space 0x15 - (. - gText_Rom_23EC73)
	.endif

	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:48 Route110_TrickHousePuzzle4_Text_YujiPostBattle
	.globl gText_Rom_23EC88
gText_Rom_23EC88: @ 0x0823EC88
	.string "ちからが つよいだけじゃ ダメだね……\nアタマ つかわないと$"
	.if (. - gText_Rom_23EC88) > 0x1f
	.error "gText_Rom_23EC88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EC88) < 0x1f
	.space 0x1f - (. - gText_Rom_23EC88)
	.endif

	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:51 Route110_TrickHousePuzzle4_Text_PaulaIntro (+1 aliases)
	.globl gText_Rom_23ECA7
gText_Rom_23ECA7: @ 0x0823ECA7
	.string "カラクリやしきも だんだん\nむずかしく なってきたわね!$"
	.if (. - gText_Rom_23ECA7) > 0x1d
	.error "gText_Rom_23ECA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23ECA7) < 0x1d
	.space 0x1d - (. - gText_Rom_23ECA7)
	.endif

	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:54 Route110_TrickHousePuzzle4_Text_PaulaDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23ECC4
gText_Rom_23ECC4: @ 0x0823ECC4
	.string "ああっ!$"
	.if (. - gText_Rom_23ECC4) != 0x5
	.error "gText_Rom_23ECC4 must retain its original byte length"
	.endif
	.globl gText_Rom_23ECC5
	.set gText_Rom_23ECC5, gText_Rom_23ECC4 + 0x1

	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:57 Route110_TrickHousePuzzle4_Text_PaulaPostBattle
	.globl gText_Rom_23ECC9
gText_Rom_23ECC9: @ 0x0823ECC9
	.string "さいごまで いった\nひとって いるのかしらね?$"
	.if (. - gText_Rom_23ECC9) > 0x18
	.error "gText_Rom_23ECC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23ECC9) < 0x18
	.space 0x18 - (. - gText_Rom_23ECC9)
	.endif
	.incbin "baserom.gba", 0x23ece1, 0xb70

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:898 Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_23F851
gText_Rom_23F851: @ 0x0823F851
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま てんさい」\p…… …… ……\pかぎの はずれる おとがした!$"
	.if (. - gText_Rom_23F851) > 0x43
	.error "gText_Rom_23F851 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F851) < 0x43
	.space 0x43 - (. - gText_Rom_23F851)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:901 Route110_TrickHousePuzzle5_Text_Mechadoll1Intro
	.globl gText_Rom_23F894
gText_Rom_23F894: @ 0x0823F894
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 1ゴウ!\pからくりニンギョウ 5ゴウノ トコロマデ\nツヅケテ くいずニ セイカイ スレバ\lあいことばニ タドリツケルゾ!$"
	.if (. - gText_Rom_23F894) > 0x54
	.error "gText_Rom_23F894 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F894) < 0x54
	.space 0x54 - (. - gText_Rom_23F894)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:904 Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1
	.globl gText_Rom_23F8E8
gText_Rom_23F8E8: @ 0x0823F8E8
	.string "からくりニンギョウ 1ゴウ くいず!\pこのなかで 110ばんどうろに\nいない ポケモンは どれ?$"
	.if (. - gText_Rom_23F8E8) > 0x31
	.error "gText_Rom_23F8E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F8E8) < 0x31
	.space 0x31 - (. - gText_Rom_23F8E8)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:907 Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2
	.globl gText_Rom_23F919
gText_Rom_23F919: @ 0x0823F919
	.string "からくりニンギョウ 1ゴウ くいず!\pこのなかで みずタイプが はいってない\nポケモンは どれ?$"
	.if (. - gText_Rom_23F919) > 0x31
	.error "gText_Rom_23F919 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F919) < 0x31
	.space 0x31 - (. - gText_Rom_23F919)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:910 Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3
	.globl gText_Rom_23F94A
gText_Rom_23F94A: @ 0x0823F94A
	.string "からくりニンギョウ 1ゴウ くいず!\pこのなかで きゅうけつを\nつかえない ポケモンは どれ?$"
	.if (. - gText_Rom_23F94A) > 0x30
	.error "gText_Rom_23F94A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F94A) < 0x30
	.space 0x30 - (. - gText_Rom_23F94A)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:913 Route110_TrickHousePuzzle5_Text_CorrectGoThrough
	.globl gText_Rom_23F97A
gText_Rom_23F97A: @ 0x0823F97A
	.string "オメデトウ セイカイ デース!\nサキヘ ドウゾ!$"
	.if (. - gText_Rom_23F97A) > 0x19
	.error "gText_Rom_23F97A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F97A) < 0x19
	.space 0x19 - (. - gText_Rom_23F97A)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:916 Route110_TrickHousePuzzle5_Text_DisappointmentError
	.globl gText_Rom_23F993
gText_Rom_23F993: @ 0x0823F993
	.string "ザンネン!\nマチガイ デーーース!$"
	.if (. - gText_Rom_23F993) > 0x12
	.error "gText_Rom_23F993 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F993) < 0x12
	.space 0x12 - (. - gText_Rom_23F993)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:919 Route110_TrickHousePuzzle5_Text_Wahahahaha
	.globl gText_Rom_23F9A5
gText_Rom_23F9A5: @ 0x0823F9A5
	.string "ワハハハハ! ワハハハハ! カタカタ!$"
	.if (. - gText_Rom_23F9A5) > 0x14
	.error "gText_Rom_23F9A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F9A5) < 0x14
	.space 0x14 - (. - gText_Rom_23F9A5)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:922 Route110_TrickHousePuzzle5_Text_WaitForNextChallenge
	.globl gText_Rom_23F9B9
gText_Rom_23F9B9: @ 0x0823F9B9
	.string "マタノ ちゃれんじ オマチシテマース!$"
	.if (. - gText_Rom_23F9B9) > 0x14
	.error "gText_Rom_23F9B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F9B9) < 0x14
	.space 0x14 - (. - gText_Rom_23F9B9)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:925 Route110_TrickHousePuzzle5_Text_Mechadoll2Intro
	.globl gText_Rom_23F9CD
gText_Rom_23F9CD: @ 0x0823F9CD
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 2ゴウ!\l1ゴウノ くいずハ ヤサシスギルヨ!$"
	.if (. - gText_Rom_23F9CD) > 0x2f
	.error "gText_Rom_23F9CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F9CD) < 0x2f
	.space 0x2f - (. - gText_Rom_23F9CD)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:928 Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1
	.globl gText_Rom_23F9FC
gText_Rom_23F9FC: @ 0x0823F9FC
	.string "からくりニンギョウ 2ゴウ くいず!\pミツルくんが パパから かしてもらった\nポケモンは なんだった?$"
	.if (. - gText_Rom_23F9FC) > 0x34
	.error "gText_Rom_23F9FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F9FC) < 0x34
	.space 0x34 - (. - gText_Rom_23F9FC)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:931 Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2
	.globl gText_Rom_23FA30
gText_Rom_23FA30: @ 0x0823FA30
	.string "からくりニンギョウ 2ゴウ くいず!\pオダマキはかせを おいかけていた\nポケモンは なんだった?$"
	.if (. - gText_Rom_23FA30) > 0x31
	.error "gText_Rom_23FA30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FA30) < 0x31
	.space 0x31 - (. - gText_Rom_23FA30)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:934 Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3
	.globl gText_Rom_23FA61
gText_Rom_23FA61: @ 0x0823FA61
	.string "からくりニンギョウ 2ゴウ くいず!\pトウカのもりで アクアだんが\nたたかわせた ポケモンは なんだった?$"
	.if (. - gText_Rom_23FA61) > 0x36
	.error "gText_Rom_23FA61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FA61) < 0x36
	.space 0x36 - (. - gText_Rom_23FA61)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:937 Route110_TrickHousePuzzle5_Text_Mechadoll3Intro
	.globl gText_Rom_23FA97
gText_Rom_23FA97: @ 0x0823FA97
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 3ゴウ!\lオカネニハ ウルサイノダ!$"
	.if (. - gText_Rom_23FA97) > 0x2a
	.error "gText_Rom_23FA97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FA97) < 0x2a
	.space 0x2a - (. - gText_Rom_23FA97)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:940 Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1
	.globl gText_Rom_23FAC1
gText_Rom_23FAC1: @ 0x0823FAC1
	.string "からくりニンギョウ 3ゴウ くいず!\pハーバーメール 3つ かうのと\nやけどなおし 1つ かうのと\lどっちが たかい?$"
	.if (. - gText_Rom_23FAC1) > 0x3c
	.error "gText_Rom_23FAC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FAC1) < 0x3c
	.space 0x3c - (. - gText_Rom_23FAC1)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:943 Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2
	.globl gText_Rom_23FAFD
gText_Rom_23FAFD: @ 0x0823FAFD
	.string "からくりニンギョウ 3ゴウ くいず!\pスーパーボールを うって\nキズぐすりを かうと いくら のこる?$"
	.if (. - gText_Rom_23FAFD) > 0x34
	.error "gText_Rom_23FAFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FAFD) < 0x34
	.space 0x34 - (. - gText_Rom_23FAFD)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:946 Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3
	.globl gText_Rom_23FB31
gText_Rom_23FB31: @ 0x0823FB31
	.string "からくりニンギョウ 3ゴウ くいず!\pむしよけスプレーと サイコソーダを かうと\nいいキズぐすり より たかくなる?$"
	.if (. - gText_Rom_23FB31) > 0x3b
	.error "gText_Rom_23FB31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FB31) < 0x3b
	.space 0x3b - (. - gText_Rom_23FB31)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:949 Route110_TrickHousePuzzle5_Text_Mechadoll4Intro
	.globl gText_Rom_23FB6C
gText_Rom_23FB6C: @ 0x0823FB6C
	.string "カタカタ…\nからくりニンギョウ 4ゴウ ヨーン!\lウツクシイ ワタシノ くいず イクワヨ!$"
	.if (. - gText_Rom_23FB6C) > 0x2e
	.error "gText_Rom_23FB6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FB6C) < 0x2e
	.space 0x2e - (. - gText_Rom_23FB6C)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:952 Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1
	.globl gText_Rom_23FB9A
gText_Rom_23FB9A: @ 0x0823FB9A
	.string "からくりニンギョウ 4ゴウ くいずヨ!\pうみのいえには だんせいと じょせい\nどちらが おおい?$"
	.if (. - gText_Rom_23FB9A) > 0x31
	.error "gText_Rom_23FB9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FB9A) < 0x31
	.space 0x31 - (. - gText_Rom_23FB9A)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:955 Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2
	.globl gText_Rom_23FBCB
gText_Rom_23FBCB: @ 0x0823FBCB
	.string "からくりニンギョウ 4ゴウ くいずヨ!\pフエンタウンに いる\nおじいさんと おばあさん どっちがおおい?$"
	.if (. - gText_Rom_23FBCB) > 0x35
	.error "gText_Rom_23FBCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FBCB) < 0x35
	.space 0x35 - (. - gText_Rom_23FBCB)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:958 Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3
	.globl gText_Rom_23FC00
gText_Rom_23FC00: @ 0x0823FC00
	.string "からくりニンギョウ 4ゴウ くいずヨ!\pポケモン トレーナーズ スクールに\nおんなのこの せいとは なんにん いた?$"
	.if (. - gText_Rom_23FC00) > 0x3b
	.error "gText_Rom_23FC00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FC00) < 0x3b
	.space 0x3b - (. - gText_Rom_23FC00)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:961 Route110_TrickHousePuzzle5_Text_Mechadoll5Intro
	.globl gText_Rom_23FC3B
gText_Rom_23FC3B: @ 0x0823FC3B
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 5ゴウ!\lダイオウノ サイコウ ケッサク!$"
	.if (. - gText_Rom_23FC3B) > 0x2d
	.error "gText_Rom_23FC3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FC3B) < 0x2d
	.space 0x2d - (. - gText_Rom_23FC3B)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:964 Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1
	.globl gText_Rom_23FC68
gText_Rom_23FC68: @ 0x0823FC68
	.string "からくりニンギョウ 5ゴウ くいず!\pカイナシティの だいすきクラブに\nポケモンは なんひき いた?$"
	.if (. - gText_Rom_23FC68) > 0x33
	.error "gText_Rom_23FC68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FC68) < 0x33
	.space 0x33 - (. - gText_Rom_23FC68)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:967 Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2
	.globl gText_Rom_23FC9B
gText_Rom_23FC9B: @ 0x0823FC9B
	.string "からくりニンギョウ 5ゴウ くいず!\pヒワマキシティに ある ツリーハウス\nぜんぶで いくつ?$"
	.if (. - gText_Rom_23FC9B) > 0x30
	.error "gText_Rom_23FC9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FC9B) < 0x30
	.space 0x30 - (. - gText_Rom_23FC9B)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:970 Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3
	.globl gText_Rom_23FCCB
gText_Rom_23FCCB: @ 0x0823FCCB
	.string "からくりニンギョウ 5ゴウ くいず!\pサイクリングロードの うえに\nトライアスリートは なんにん いた?$"
	.if (. - gText_Rom_23FCCB) > 0x35
	.error "gText_Rom_23FCCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FCCB) < 0x35
	.space 0x35 - (. - gText_Rom_23FCCB)
	.endif
	.incbin "baserom.gba", 0x23fd00, 0x7f

	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:45 Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_23FD7F
gText_Rom_23FD7F: @ 0x0823FD7F
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま いのち」\p…… …… ……\pかぎの はずれる おとがした!$"
	.if (. - gText_Rom_23FD7F) > 0x42
	.error "gText_Rom_23FD7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FD7F) < 0x42
	.space 0x42 - (. - gText_Rom_23FD7F)
	.endif

	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:48 Route110_TrickHousePuzzle6_Text_SophiaIntro (+1 aliases)
	.globl gText_Rom_23FDC1
gText_Rom_23FDC1: @ 0x0823FDC1
	.string "さいきん へんな やしきが あるって\nきいたから しらべに きたのよ!$"
	.if (. - gText_Rom_23FDC1) > 0x24
	.error "gText_Rom_23FDC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FDC1) < 0x24
	.space 0x24 - (. - gText_Rom_23FDC1)
	.endif

	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:51 Route110_TrickHousePuzzle6_Text_SophiaDefeat (+1 aliases)
	.globl gText_Rom_23FDE5
gText_Rom_23FDE5: @ 0x0823FDE5
	.string "つよい トレーナーを はっけん!$"
	.if (. - gText_Rom_23FDE5) > 0x11
	.error "gText_Rom_23FDE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FDE5) < 0x11
	.space 0x11 - (. - gText_Rom_23FDE5)
	.endif

	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:54 Route110_TrickHousePuzzle6_Text_SophiaPostBattle
	.globl gText_Rom_23FDF6
gText_Rom_23FDF6: @ 0x0823FDF6
	.string "やしきを しらべてたら おもしろくて\nなんかいも チャレンジ してるのよ!$"
	.if (. - gText_Rom_23FDF6) > 0x26
	.error "gText_Rom_23FDF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FDF6) < 0x26
	.space 0x26 - (. - gText_Rom_23FDF6)
	.endif

	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:57 Route110_TrickHousePuzzle6_Text_BennyIntro (+1 aliases)
	.globl gText_Rom_23FE1C
gText_Rom_23FE1C: @ 0x0823FE1C
	.string "おいらの とりポケモンで\nかべを とびこえて いっちゃうか……?$"
	.if (. - gText_Rom_23FE1C) > 0x21
	.error "gText_Rom_23FE1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FE1C) < 0x21
	.space 0x21 - (. - gText_Rom_23FE1C)
	.endif

	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:60 Route110_TrickHousePuzzle6_Text_BennyDefeat (+1 aliases)
	.globl gText_Rom_23FE3D
gText_Rom_23FE3D: @ 0x0823FE3D
	.string "わわっ しまった!$"
	.if (. - gText_Rom_23FE3D) > 0xa
	.error "gText_Rom_23FE3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FE3D) < 0xa
	.space 0xa - (. - gText_Rom_23FE3D)
	.endif

	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:63 Route110_TrickHousePuzzle6_Text_BennyPostBattle
	.globl gText_Rom_23FE47
gText_Rom_23FE47: @ 0x0823FE47
	.string "てへへ… ズルしようと したから\nまけちゃったの かな……$"
	.if (. - gText_Rom_23FE47) > 0x1e
	.error "gText_Rom_23FE47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FE47) < 0x1e
	.space 0x1e - (. - gText_Rom_23FE47)
	.endif

	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:66 Route110_TrickHousePuzzle6_Text_SebastianIntro (+1 aliases)
	.globl gText_Rom_23FE65
gText_Rom_23FE65: @ 0x0823FE65
	.string "かいてん する とびらで\nめが まわってきた……$"
	.if (. - gText_Rom_23FE65) > 0x19
	.error "gText_Rom_23FE65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FE65) < 0x19
	.space 0x19 - (. - gText_Rom_23FE65)
	.endif

	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:69 Route110_TrickHousePuzzle6_Text_SebastianDefeat (+1 aliases)
	.globl gText_Rom_23FE7E
gText_Rom_23FE7E: @ 0x0823FE7E
	.string "くーるくる くーるくる\nおれは もう ダメだ……$"
	.if (. - gText_Rom_23FE7E) > 0x19
	.error "gText_Rom_23FE7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FE7E) < 0x19
	.space 0x19 - (. - gText_Rom_23FE7E)
	.endif

	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:72 Route110_TrickHousePuzzle6_Text_SebastianPostBattle
	.globl gText_Rom_23FE97
gText_Rom_23FE97: @ 0x0823FE97
	.string "キミは ぜんぜん へいき みたいだね\nそれとも ポーカーフェイス なの?$"
	.if (. - gText_Rom_23FE97) > 0x25
	.error "gText_Rom_23FE97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FE97) < 0x25
	.space 0x25 - (. - gText_Rom_23FE97)
	.endif
	.incbin "baserom.gba", 0x23febc, 0x382

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:317 Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_24023E
gText_Rom_24023E: @ 0x0824023E
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま だきしめたい」\p…… …… ……\pかぎの はずれる おとがした!$"
	.if (. - gText_Rom_24023E) > 0x45
	.error "gText_Rom_24023E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24023E) < 0x45
	.space 0x45 - (. - gText_Rom_24023E)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:320 Route110_TrickHousePuzzle7_Text_JoshuaIntro (+1 aliases)
	.globl gText_Rom_240283
gText_Rom_240283: @ 0x08240283
	.string "いつも カラクリだいおうは パッと\nきえちゃうけど どう やってるんだろ?$"
	.if (. - gText_Rom_240283) > 0x26
	.error "gText_Rom_240283 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240283) < 0x26
	.space 0x26 - (. - gText_Rom_240283)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:323 Route110_TrickHousePuzzle7_Text_JoshuaDefeat (+1 aliases)
	.globl gText_Rom_2402A9
gText_Rom_2402A9: @ 0x082402A9
	.string "ひえー\nなんで そんなに つよいの?$"
	.if (. - gText_Rom_2402A9) > 0x13
	.error "gText_Rom_2402A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2402A9) < 0x13
	.space 0x13 - (. - gText_Rom_2402A9)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:326 Route110_TrickHousePuzzle7_Text_JoshuaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2402BC
gText_Rom_2402BC: @ 0x082402BC
	.string "ぼくも じゆう じざいに\nきえたり あらわれたり してみたいな$"
	.if (. - gText_Rom_2402BC) != 0x20
	.error "gText_Rom_2402BC must retain its original byte length"
	.endif
	.globl gText_Rom_2402D7
	.set gText_Rom_2402D7, gText_Rom_2402BC + 0x1b

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:329 Route110_TrickHousePuzzle7_Text_PatriciaIntro (+1 aliases)
	.globl gText_Rom_2402DC
gText_Rom_2402DC: @ 0x082402DC
	.string "おなじところを つづけて\nなんども まわると ふきつなのよ……$"
	.if (. - gText_Rom_2402DC) > 0x20
	.error "gText_Rom_2402DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2402DC) < 0x20
	.space 0x20 - (. - gText_Rom_2402DC)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:332 Route110_TrickHousePuzzle7_Text_PatriciaDefeat (+1 aliases)
	.globl gText_Rom_2402FC
gText_Rom_2402FC: @ 0x082402FC
	.string "まけた……!\nえんぎが わるいわ……!$"
	.if (. - gText_Rom_2402FC) > 0x14
	.error "gText_Rom_2402FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2402FC) < 0x14
	.space 0x14 - (. - gText_Rom_2402FC)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:335 Route110_TrickHousePuzzle7_Text_PatriciaPostBattle
	.globl gText_Rom_240310
gText_Rom_240310: @ 0x08240310
	.string "わたしは もう 10かい いじょう\nまわってしまった…… ふきつだわ……$"
	.if (. - gText_Rom_240310) > 0x25
	.error "gText_Rom_240310 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240310) < 0x25
	.space 0x25 - (. - gText_Rom_240310)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:338 Route110_TrickHousePuzzle7_Text_AlexisIntro (+1 aliases)
	.globl gText_Rom_240335
gText_Rom_240335: @ 0x08240335
	.string "かった ほうが さきに このしかけを\nぬけられる よかんが するわ!$"
	.if (. - gText_Rom_240335) > 0x23
	.error "gText_Rom_240335 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240335) < 0x23
	.space 0x23 - (. - gText_Rom_240335)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:341 Route110_TrickHousePuzzle7_Text_AlexisDefeat (+1 aliases)
	.globl gText_Rom_240358
gText_Rom_240358: @ 0x08240358
	.string "あら!\nじゃあ おさきに どうぞ!$"
	.if (. - gText_Rom_240358) > 0x12
	.error "gText_Rom_240358 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240358) < 0x12
	.space 0x12 - (. - gText_Rom_240358)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:344 Route110_TrickHousePuzzle7_Text_AlexisPostBattle
	.globl gText_Rom_24036A
gText_Rom_24036A: @ 0x0824036A
	.string "あなたは カラクリやしきの しかけを\nすべて とく って よかんが するわ!$"
	.if (. - gText_Rom_24036A) > 0x27
	.error "gText_Rom_24036A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24036A) < 0x27
	.space 0x27 - (. - gText_Rom_24036A)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:347 Route110_TrickHousePuzzle7_Text_MarielaIntro (+1 aliases)
	.globl gText_Rom_240391
gText_Rom_240391: @ 0x08240391
	.string "んっふっふっふ きたわねっ\nさあ しょうぶよ!$"
	.if (. - gText_Rom_240391) > 0x18
	.error "gText_Rom_240391 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240391) < 0x18
	.space 0x18 - (. - gText_Rom_240391)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:350 Route110_TrickHousePuzzle7_Text_MarielaDefeat (+1 aliases)
	.globl gText_Rom_2403A9
gText_Rom_2403A9: @ 0x082403A9
	.string "あっさり かってくれちゃって!$"
	.if (. - gText_Rom_2403A9) > 0x10
	.error "gText_Rom_2403A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2403A9) < 0x10
	.space 0x10 - (. - gText_Rom_2403A9)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:353 Route110_TrickHousePuzzle7_Text_MarielaPostBattle
	.globl gText_Rom_2403B9
gText_Rom_2403B9: @ 0x082403B9
	.string "ふん べつに くやしく ないから!\nわたし!$"
	.if (. - gText_Rom_2403B9) > 0x17
	.error "gText_Rom_2403B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2403B9) < 0x17
	.space 0x17 - (. - gText_Rom_2403B9)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:356 Route110_TrickHousePuzzle7_Text_AlvaroIntro (+1 aliases)
	.globl gText_Rom_2403D0
gText_Rom_2403D0: @ 0x082403D0
	.string "きみが どんどん\nちかづいて くるのを みていたぜ!$"
	.if (. - gText_Rom_2403D0) > 0x1b
	.error "gText_Rom_2403D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2403D0) < 0x1b
	.space 0x1b - (. - gText_Rom_2403D0)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:359 Route110_TrickHousePuzzle7_Text_AlvaroDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2403EB
gText_Rom_2403EB: @ 0x082403EB
	.string "こんな けっかは\nみえなかった$"
	.if (. - gText_Rom_2403EB) != 0x10
	.error "gText_Rom_2403EB must retain its original byte length"
	.endif
	.globl gText_Rom_2403F6
	.set gText_Rom_2403F6, gText_Rom_2403EB + 0xb
	.globl gText_Rom_2403F7
	.set gText_Rom_2403F7, gText_Rom_2403EB + 0xc

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:362 Route110_TrickHousePuzzle7_Text_AlvaroPostBattle
	.globl gText_Rom_2403FB
gText_Rom_2403FB: @ 0x082403FB
	.string "ま こんな ところで あったんだ\nものずき どうし おたがい がんばろうぜ!$"
	.if (. - gText_Rom_2403FB) > 0x27
	.error "gText_Rom_2403FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2403FB) < 0x27
	.space 0x27 - (. - gText_Rom_2403FB)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:365 Route110_TrickHousePuzzle7_Text_EverettIntro (+1 aliases)
	.globl gText_Rom_240422
gText_Rom_240422: @ 0x08240422
	.string "せ せまいな……\nここは……$"
	.if (. - gText_Rom_240422) > 0xf
	.error "gText_Rom_240422 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240422) < 0xf
	.space 0xf - (. - gText_Rom_240422)
	.endif

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:368 Route110_TrickHousePuzzle7_Text_EverettDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_240431
gText_Rom_240431: @ 0x08240431
	.string "おお つよいつよい$"
	.if (. - gText_Rom_240431) != 0xa
	.error "gText_Rom_240431 must retain its original byte length"
	.endif
	.globl gText_Rom_240437
	.set gText_Rom_240437, gText_Rom_240431 + 0x6

	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:371 Route110_TrickHousePuzzle7_Text_EverettPostBattle
	.globl gText_Rom_24043B
gText_Rom_24043B: @ 0x0824043B
	.string "もし かったら いれかわって やれと\nおもって いたんだけどね$"
	.if (. - gText_Rom_24043B) > 0x20
	.error "gText_Rom_24043B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24043B) < 0x20
	.space 0x20 - (. - gText_Rom_24043B)
	.endif
	.incbin "baserom.gba", 0x24045b, 0x63

	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:30 Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_2404BE
gText_Rom_2404BE: @ 0x082404BE
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま あいしてる」\p…… …… ……\pかぎの はずれる おとがした!$"
	.if (. - gText_Rom_2404BE) > 0x44
	.error "gText_Rom_2404BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2404BE) < 0x44
	.space 0x44 - (. - gText_Rom_2404BE)
	.endif

	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:33 Route110_TrickHousePuzzle8_Text_VincentIntro (+1 aliases)
	.globl gText_Rom_240502
gText_Rom_240502: @ 0x08240502
	.string "ここまで こられる トレーナーは\nそうは いないよな!$"
	.if (. - gText_Rom_240502) > 0x1c
	.error "gText_Rom_240502 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240502) < 0x1c
	.space 0x1c - (. - gText_Rom_240502)
	.endif

	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:36 Route110_TrickHousePuzzle8_Text_VincentDefeat (+1 aliases)
	.globl gText_Rom_24051E
gText_Rom_24051E: @ 0x0824051E
	.string "つまり キミも\nすごいって ことだよな…$"
	.if (. - gText_Rom_24051E) > 0x15
	.error "gText_Rom_24051E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24051E) < 0x15
	.space 0x15 - (. - gText_Rom_24051E)
	.endif

	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:39 Route110_TrickHousePuzzle8_Text_VincentPostBattle
	.globl gText_Rom_240533
gText_Rom_240533: @ 0x08240533
	.string "えっ ポケモンリーグの チャンピオンに\nかったって? す すごい……!$"
	.if (. - gText_Rom_240533) > 0x24
	.error "gText_Rom_240533 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240533) < 0x24
	.space 0x24 - (. - gText_Rom_240533)
	.endif

	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:42 Route110_TrickHousePuzzle8_Text_KeiraIntro (+1 aliases)
	.globl gText_Rom_240557
gText_Rom_240557: @ 0x08240557
	.string "わたしと しょうぶ できるなんて\nあなた しあわせよ!$"
	.if (. - gText_Rom_240557) > 0x1c
	.error "gText_Rom_240557 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240557) < 0x1c
	.space 0x1c - (. - gText_Rom_240557)
	.endif

	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:45 Route110_TrickHousePuzzle8_Text_KeiraDefeat (+1 aliases)
	.globl gText_Rom_240573
gText_Rom_240573: @ 0x08240573
	.string "そんな わたしが\nまけるなんて……!$"
	.if (. - gText_Rom_240573) > 0x13
	.error "gText_Rom_240573 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240573) < 0x13
	.space 0x13 - (. - gText_Rom_240573)
	.endif

	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:48 Route110_TrickHousePuzzle8_Text_KeiraPostBattle
	.globl gText_Rom_240586
gText_Rom_240586: @ 0x08240586
	.string "わたしに かつなんて きせきよ!\nじまん できる ことだわ!$"
	.if (. - gText_Rom_240586) > 0x1f
	.error "gText_Rom_240586 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240586) < 0x1f
	.space 0x1f - (. - gText_Rom_240586)
	.endif

	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:51 Route110_TrickHousePuzzle8_Text_LeroyIntro (+1 aliases)
	.globl gText_Rom_2405A5
gText_Rom_2405A5: @ 0x082405A5
	.string "あなたも カラクリやしきに\nちょうせん しつづけて いるんですね!$"
	.if (. - gText_Rom_2405A5) > 0x22
	.error "gText_Rom_2405A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2405A5) < 0x22
	.space 0x22 - (. - gText_Rom_2405A5)
	.endif

	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:54 Route110_TrickHousePuzzle8_Text_LeroyDefeat (+1 aliases)
	.globl gText_Rom_2405C7
gText_Rom_2405C7: @ 0x082405C7
	.string "なるほど……\nすばらしい センスですね!$"
	.if (. - gText_Rom_2405C7) > 0x15
	.error "gText_Rom_2405C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2405C7) < 0x15
	.space 0x15 - (. - gText_Rom_2405C7)
	.endif

	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:57 Route110_TrickHousePuzzle8_Text_LeroyPostBattle
	.globl gText_Rom_2405DC
gText_Rom_2405DC: @ 0x082405DC
	.string "あなた みたいな ひとが きてくれて\nカラクリだいおうも まんぞく でしょうね!$"
	.if (. - gText_Rom_2405DC) > 0x29
	.error "gText_Rom_2405DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2405DC) < 0x29
	.space 0x29 - (. - gText_Rom_2405DC)
	.endif
	.incbin "baserom.gba", 0x240605, 0x4a

	@ data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.inc:55 Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad (+1 aliases)
	.globl gText_Rom_24064F
gText_Rom_24064F: @ 0x0824064F
	.string "サイクリング ロードでは\nおもいっきり スピードを だせるんだ!\pだれにも ぶつからずに かけぬけると\nすごく きもち いいよ!$"
	.if (. - gText_Rom_24064F) > 0x41
	.error "gText_Rom_24064F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24064F) < 0x41
	.space 0x41 - (. - gText_Rom_24064F)
	.endif

	@ data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.inc:61 Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk (+1 aliases)
	.globl gText_Rom_240690
gText_Rom_240690: @ 0x08240690
	.string "サイクリング ロードを\nあるいて すすむのは あぶない です!\lじてんしゃに のって きてください$"
	.if (. - gText_Rom_240690) > 0x32
	.error "gText_Rom_240690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240690) < 0x32
	.space 0x32 - (. - gText_Rom_240690)
	.endif
	.incbin "baserom.gba", 0x2406c2, 0x82

	@ data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.inc:55 Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad (+1 aliases)
	.globl gText_Rom_240744
gText_Rom_240744: @ 0x08240744
	.string "サイクリング ロードでは\nおもいっきり スピードを だせるんだ!\pだれにも ぶつからずに かけぬけると\nすごく きもち いいよ!$"
	.if (. - gText_Rom_240744) > 0x41
	.error "gText_Rom_240744 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240744) < 0x41
	.space 0x41 - (. - gText_Rom_240744)
	.endif

	@ data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.inc:61 Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk (+1 aliases)
	.globl gText_Rom_240785
gText_Rom_240785: @ 0x08240785
	.string "サイクリング ロードを\nあるいて すすむのは あぶない です!\lじてんしゃに のって きてください$"
	.if (. - gText_Rom_240785) > 0x32
	.error "gText_Rom_240785 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240785) < 0x32
	.space 0x32 - (. - gText_Rom_240785)
	.endif
	.incbin "baserom.gba", 0x2407b7, 0x49a

	@ field-script:0x2407F7 FieldScriptText_240C51
	.globl gText_Rom_240C51
gText_Rom_240C51: @ 0x08240C51
	.string "この　あたりは\nかざんばい　だらけ　ペコペコ！\pわたし　すごいよ　ペコペコ\pかざんばいを　ガラスに　してね\nそれで　どうぐ　つくるよ　ペコペコ！\pきみも　これで\nかざんばいを　あつめなさい　ペコペコ！$"
	.if (. - gText_Rom_240C51) > 0x65
	.error "gText_Rom_240C51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240C51) < 0x65
	.space 0x65 - (. - gText_Rom_240C51)
	.endif

	@ field-script:0x240810 FieldScriptText_240CB6
	.globl gText_Rom_240CB6
gText_Rom_240CB6: @ 0x08240CB6
	.string "その　ふくろを　もって\nはいの　つもった　ところを　あるくと\lあら　ふしぎ！\pふくろの　なかに　かざんばいが\nどんどん　たまっていくよ　ペコペコ！\pかざんばいが　たまったと　おもったら\nわたしの　ところに　きなさい　ペコペコ！$"
	.if (. - gText_Rom_240CB6) > 0x72
	.error "gText_Rom_240CB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240CB6) < 0x72
	.space 0x72 - (. - gText_Rom_240CB6)
	.endif

	@ field-script:0x240834 FieldScriptText_240D28
	.globl gText_Rom_240D28
gText_Rom_240D28: @ 0x08240D28
	.string "かざんばい　あるのかね　ペコペコ！\nどれどれ　みせてごらん　ペコポコ！$"
	.if (. - gText_Rom_240D28) > 0x24
	.error "gText_Rom_240D28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240D28) < 0x24
	.space 0x24 - (. - gText_Rom_240D28)
	.endif

	@ field-script:0x240A9A FieldScriptText_240D4C
	.globl gText_Rom_240D4C
gText_Rom_240D4C: @ 0x08240D4C
	.string "うーん……\nかざんばいが　すくないよ　ペコペコ！\lガラスのどうぐ　できないよ　ペコペコ！\pあと　{0xFD}{0x02}ほ　あるけば\nあおいビードロ　つくれるよ　ペコペコ！$"
	.if (. - gText_Rom_240D4C) > 0x4d
	.error "gText_Rom_240D4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240D4C) < 0x4d
	.space 0x4d - (. - gText_Rom_240D4C)
	.endif

	@ field-script:0x240846 FieldScriptText_240D99
	.globl gText_Rom_240D99
gText_Rom_240D99: @ 0x08240D99
	.string "おほっ\nかざんばい　あつまってるよ　ペコペコ！\lガラスのどうぐ　つくるよ　ペコペコ！\pどれが　いいかね　ペコペコ$"
	.if (. - gText_Rom_240D99) > 0x39
	.error "gText_Rom_240D99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240D99) < 0x39
	.space 0x39 - (. - gText_Rom_240D99)
	.endif

	@ field-script:0x2408ED FieldScriptText_240DD2
	.globl gText_Rom_240DD2
gText_Rom_240DD2: @ 0x08240DD2
	.string "{0xFD}{0x02}　だね　ペコペコ！\nほんとうに　それで　いいんだね？　ペコペコ$"
	.if (. - gText_Rom_240DD2) > 0x22
	.error "gText_Rom_240DD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240DD2) < 0x22
	.space 0x22 - (. - gText_Rom_240DD2)
	.endif

	@ field-script:0x240AB8 FieldScriptText_240DF4
	.globl gText_Rom_240DF4
gText_Rom_240DF4: @ 0x08240DF4
	.string "どれが　いいかね　ペコペコ$"
	.if (. - gText_Rom_240DF4) > 0xe
	.error "gText_Rom_240DF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240DF4) < 0xe
	.space 0xe - (. - gText_Rom_240DF4)
	.endif

	@ field-script:0x240AC5 FieldScriptText_240E02
	.globl gText_Rom_240E02
gText_Rom_240E02: @ 0x08240E02
	.string "{0xFD}{0x02}　だね　ペコペコ！\pよしっ！　どうぐを　つくるよ　ペコペコ！\nちょっと　まってなさいよ　ペコペコ$"
	.if (. - gText_Rom_240E02) > 0x33
	.error "gText_Rom_240E02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240E02) < 0x33
	.space 0x33 - (. - gText_Rom_240E02)
	.endif

	@ field-script:0x240AAC FieldScriptText_240E35
	.globl gText_Rom_240E35
gText_Rom_240E35: @ 0x08240E35
	.string "{0xFD}{0x02}　だね　ペコペコ！\pだけど　それを　つくるには\nかざんばいが　たりないよ　ペコペコ！\pかざんばいの　つもっている　ところを\nあと　{0xFD}{0x03}ほ　あるかないと　ペコペコ！\pどれが　いいかね　ペコペコ$"
	.if (. - gText_Rom_240E35) > 0x62
	.error "gText_Rom_240E35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240E35) < 0x62
	.space 0x62 - (. - gText_Rom_240E35)
	.endif

	@ field-script:0x240A82 FieldScriptText_240E97
	.globl gText_Rom_240E97
gText_Rom_240E97: @ 0x08240E97
	.string "せっかく　かざんばいを　あつめたのに\nほしい　ものは　ないのかね　ペコペコ……$"
	.if (. - gText_Rom_240E97) > 0x28
	.error "gText_Rom_240E97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240E97) < 0x28
	.space 0x28 - (. - gText_Rom_240E97)
	.endif

	@ field-script:0x240AD8 FieldScriptText_240EBF
	.globl gText_Rom_240EBF
gText_Rom_240EBF: @ 0x08240EBF
	.string "おお　{0xFD}{0x02}　できたよ\nもって　いきなさいよ　ペコペコ$"
	.if (. - gText_Rom_240EBF) > 0x1b
	.error "gText_Rom_240EBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240EBF) < 0x1b
	.space 0x1b - (. - gText_Rom_240EBF)
	.endif

	@ field-script:0x240B2D FieldScriptText_240EDA
	.globl gText_Rom_240EDA
gText_Rom_240EDA: @ 0x08240EDA
	.string "あら？\nそれいじょう　もてないよ　ペコペコ\pあずかって　おくから\nこんど　きなさい　ペコペコ$"
	.if (. - gText_Rom_240EDA) > 0x2f
	.error "gText_Rom_240EDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240EDA) < 0x2f
	.space 0x2f - (. - gText_Rom_240EDA)
	.endif

	@ field-script:0x240B3C FieldScriptText_240F09
	.globl gText_Rom_240F09
gText_Rom_240F09: @ 0x08240F09
	.string "あら？\nパソコン　いっぱい　なのか　ペコペコ\pあずかって　おくから\nこんど　きなさい　ペコペコ$"
	.if (. - gText_Rom_240F09) > 0x30
	.error "gText_Rom_240F09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240F09) < 0x30
	.space 0x30 - (. - gText_Rom_240F09)
	.endif

	@ field-script:0x240853 FieldScriptText_240F39
	.globl gText_Rom_240F39
gText_Rom_240F39: @ 0x08240F39
	.string "あら？\nはいぶくろ　もっていないのか　ペコペコ\pもちあるかないと\nかざんばい　たまらないよ　ペコペコ$"
	.if (. - gText_Rom_240F39) > 0x33
	.error "gText_Rom_240F39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240F39) < 0x33
	.space 0x33 - (. - gText_Rom_240F39)
	.endif

	@ field-script:0x240C4A FieldScriptText_240F6C
	.globl gText_Rom_240F6C
gText_Rom_240F6C: @ 0x08240F6C
	.string "おやかたが　はなすのに　あわせて\nビードロ　ふくと　たのしか！\pペコペコ！　ペコポコ！$"
	.if (. - gText_Rom_240F6C) > 0x2c
	.error "gText_Rom_240F6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240F6C) < 0x2c
	.space 0x2c - (. - gText_Rom_240F6C)
	.endif
	.incbin "baserom.gba", 0x240f98, 0x31c

	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:71 Route119_WeatherInstitute_1F_Text_Grunt1Intro (+1 aliases)
	.globl gText_Rom_2412B4
gText_Rom_2412B4: @ 0x082412B4
	.string "リーダーが ここでの けんきゅうに\nきょうみを もったらしくて\lおれらを よこしたんだ! ジャマするな!$"
	.if (. - gText_Rom_2412B4) > 0x35
	.error "gText_Rom_2412B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2412B4) < 0x35
	.space 0x35 - (. - gText_Rom_2412B4)
	.endif

	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:77 Route119_WeatherInstitute_1F_Text_Grunt1Defeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2412E9
gText_Rom_2412E9: @ 0x082412E9
	.string "くそー\nこどもに まけた……$"
	.if (. - gText_Rom_2412E9) != 0xf
	.error "gText_Rom_2412E9 must retain its original byte length"
	.endif
	.globl gText_Rom_2412F2
	.set gText_Rom_2412F2, gText_Rom_2412E9 + 0x9

	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:81 Route119_WeatherInstitute_1F_Text_Grunt1PostBattle
	.globl gText_Rom_2412F8
gText_Rom_2412F8: @ 0x082412F8
	.string "リーダーは なんでも しっている……\pしかし なにを かんがえて いるのか\nしたっぱの おれらには さっぱりだ$"
	.if (. - gText_Rom_2412F8) > 0x38
	.error "gText_Rom_2412F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2412F8) < 0x38
	.space 0x38 - (. - gText_Rom_2412F8)
	.endif

	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:86 Route119_WeatherInstitute_1F_Text_Grunt4Intro (+1 aliases)
	.globl gText_Rom_241330
gText_Rom_241330: @ 0x08241330
	.string "あら?\nどうして ここに こどもが いるのかしら?$"
	.if (. - gText_Rom_241330) > 0x1a
	.error "gText_Rom_241330 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241330) < 0x1a
	.space 0x1a - (. - gText_Rom_241330)
	.endif

	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:90 Route119_WeatherInstitute_1F_Text_Grunt4Defeat (+1 aliases)
	.globl gText_Rom_24134A
gText_Rom_24134A: @ 0x0824134A
	.string "あらー\nまけちゃったー!?$"
	.if (. - gText_Rom_24134A) > 0xe
	.error "gText_Rom_24134A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24134A) < 0xe
	.space 0xe - (. - gText_Rom_24134A)
	.endif

	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:94 Route119_WeatherInstitute_1F_Text_Grunt4PostBattle
	.globl gText_Rom_241358
gText_Rom_241358: @ 0x08241358
	.string "あらら……\nこどもに まけたら おこられちゃう……\pベッドで ねてようかしら?$"
	.if (. - gText_Rom_241358) > 0x28
	.error "gText_Rom_241358 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241358) < 0x28
	.space 0x28 - (. - gText_Rom_241358)
	.endif

	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:99 Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs
	.globl gText_Rom_241380
gText_Rom_241380: @ 0x08241380
	.string "ぼくが ベッドで ねてる あいだに\nみんな 2かいに いっちゃったよ$"
	.if (. - gText_Rom_241380) > 0x23
	.error "gText_Rom_241380 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241380) < 0x23
	.space 0x23 - (. - gText_Rom_241380)
	.endif

	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:103 Route119_WeatherInstitute_1F_Text_WowYoureStrong
	.globl gText_Rom_2413A3
gText_Rom_2413A3: @ 0x082413A3
	.string "{STR_VAR_1} つよいんだね!\pぼくも {STR_VAR_1} みたいな\nポケモントレーナーに なりたいや!$"
	.if (. - gText_Rom_2413A3) > 0x29
	.error "gText_Rom_2413A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2413A3) < 0x29
	.space 0x29 - (. - gText_Rom_2413A3)
	.endif

	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:108 Route119_WeatherInstitute_1F_Text_ProfStudyingRain
	.globl gText_Rom_2413CC
gText_Rom_2413CC: @ 0x082413CC
	.string "はかせは あめが だいすき なのです\pですが あめが ふりつづくと\nこまってしまう ひとも いるわけです\pそこで はかせは\nこの あめを なにかに つかえないか\lけんきゅう なさっているのです$"
	.if (. - gText_Rom_2413CC) > 0x61
	.error "gText_Rom_2413CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2413CC) < 0x61
	.space 0x61 - (. - gText_Rom_2413CC)
	.endif

	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:116 Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather
	.globl gText_Rom_24142D
gText_Rom_24142D: @ 0x0824142D
	.string "この けんきゅうじょの 2かいでは\nホウエンちほうの てんきの\lうつりかわりを しらべています\pさいきん また あちこちで\nいちじてきな ひでりや おおあめが\lかんそく されている ようですが……$"
	.if (. - gText_Rom_24142D) > 0x63
	.error "gText_Rom_24142D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24142D) < 0x63
	.space 0x63 - (. - gText_Rom_24142D)
	.endif

	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:124 Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo
	.globl gText_Rom_241490
gText_Rom_241490: @ 0x08241490
	.string "やあ!\nあなたの おかげで たすかりましたよ!\lそれにしても……\pアクアだんの れんちゅうは\nなにを するつもり だったのでしょう?$"
	.if (. - gText_Rom_241490) > 0x43
	.error "gText_Rom_241490 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241490) < 0x43
	.space 0x43 - (. - gText_Rom_241490)
	.endif

	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:130 Route119_WeatherInstitute_1F_Text_TakeRestInBed
	.globl gText_Rom_2414D3
gText_Rom_2414D3: @ 0x082414D3
	.string "ベッドが ある……\nやすんでいこう$"
	.if (. - gText_Rom_2414D3) > 0x12
	.error "gText_Rom_2414D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2414D3) < 0x12
	.space 0x12 - (. - gText_Rom_2414D3)
	.endif
	.incbin "baserom.gba", 0x2414e5, 0x27e

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:206 Route119_WeatherInstitute_2F_Text_Grunt2Intro (+1 aliases)
	.globl gText_Rom_241763
gText_Rom_241763: @ 0x08241763
	.string "この けんきゅうじょで うみだされた\nポケモンは てんきと かんけいある って\lきいたから いただきに きたのさ!$"
	.if (. - gText_Rom_241763) > 0x3a
	.error "gText_Rom_241763 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241763) < 0x3a
	.space 0x3a - (. - gText_Rom_241763)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:211 Route119_WeatherInstitute_2F_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_24179D
gText_Rom_24179D: @ 0x0824179D
	.string "こんな こどもに じゃま されるのか!?$"
	.if (. - gText_Rom_24179D) > 0x15
	.error "gText_Rom_24179D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24179D) < 0x15
	.space 0x15 - (. - gText_Rom_24179D)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:214 Route119_WeatherInstitute_2F_Text_Grunt2PostBattle
	.globl gText_Rom_2417B2
gText_Rom_2417B2: @ 0x082417B2
	.string "ここで うみだされた ポケモンが\nもし てんきを じゆうに あやつれるなら\lぜったい アクアだんに ひつよう だぜ!$"
	.if (. - gText_Rom_2417B2) > 0x3b
	.error "gText_Rom_2417B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2417B2) < 0x3b
	.space 0x3b - (. - gText_Rom_2417B2)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:219 Route119_WeatherInstitute_2F_Text_Grunt3Intro (+1 aliases)
	.globl gText_Rom_2417ED
gText_Rom_2417ED: @ 0x082417ED
	.string "おれたち アクアだん!\nめずらしい ものが ある ところなら\lどこにでも あらわれる!$"
	.if (. - gText_Rom_2417ED) > 0x2c
	.error "gText_Rom_2417ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2417ED) < 0x2c
	.space 0x2c - (. - gText_Rom_2417ED)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:224 Route119_WeatherInstitute_2F_Text_Grunt3Defeat (+1 aliases)
	.globl gText_Rom_241819
gText_Rom_241819: @ 0x08241819
	.string "こいつは まいった!$"
	.if (. - gText_Rom_241819) > 0xb
	.error "gText_Rom_241819 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241819) < 0xb
	.space 0xb - (. - gText_Rom_241819)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:227 Route119_WeatherInstitute_2F_Text_Grunt3PostBattle
	.globl gText_Rom_241824
gText_Rom_241824: @ 0x08241824
	.string "アクアだんの りそうを しらないくせに\nじゃま するんじゃ ないよ!$"
	.if (. - gText_Rom_241824) > 0x23
	.error "gText_Rom_241824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241824) < 0x23
	.space 0x23 - (. - gText_Rom_241824)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:232 Route119_WeatherInstitute_2F_Text_Grunt5Intro (+1 aliases)
	.globl gText_Rom_241847
gText_Rom_241847: @ 0x08241847
	.string "あなたも てんきに かんけいのある\nポケモンを さがしに きたの?\pだめよ!\nあたしたちが さきに いただくんだから!$"
	.if (. - gText_Rom_241847) > 0x3c
	.error "gText_Rom_241847 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241847) < 0x3c
	.space 0x3c - (. - gText_Rom_241847)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:238 Route119_WeatherInstitute_2F_Text_Grunt5Defeat (+1 aliases)
	.globl gText_Rom_241883
gText_Rom_241883: @ 0x08241883
	.string "んもー ポケモンがー$"
	.if (. - gText_Rom_241883) > 0xb
	.error "gText_Rom_241883 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241883) < 0xb
	.space 0xb - (. - gText_Rom_241883)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:241 Route119_WeatherInstitute_2F_Text_Grunt5PostBattle
	.globl gText_Rom_24188E
gText_Rom_24188E: @ 0x0824188E
	.string "ふん いいさ!\pあたしたちが ほんとうに ほしいのは\nもっと ほかに…… イヒヒヒ$"
	.if (. - gText_Rom_24188E) > 0x2a
	.error "gText_Rom_24188E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24188E) < 0x2a
	.space 0x2a - (. - gText_Rom_24188E)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:247 Route119_WeatherInstitute_2F_Text_ShellyIntro (+1 aliases)
	.globl gText_Rom_2418B8
gText_Rom_2418B8: @ 0x082418B8
	.string "オーッホッホ!\pわれわれ アクアだんの\nじゃまを しようと いうの!?\pもう こわいものしらず といおうか\nただの おろかものと いおうか……\pかわいすぎて にくらしく なっちゃう!\nやっつけて あげるわね!$"
	.if (. - gText_Rom_2418B8) > 0x69
	.error "gText_Rom_2418B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2418B8) < 0x69
	.space 0x69 - (. - gText_Rom_2418B8)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:256 Route119_WeatherInstitute_2F_Text_ShellyDefeat (+1 aliases)
	.globl gText_Rom_241921
gText_Rom_241921: @ 0x08241921
	.string "オーッホッホ!\nつよくて にくらしく なっちゃうわ!$"
	.if (. - gText_Rom_241921) > 0x1b
	.error "gText_Rom_241921 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241921) < 0x1b
	.space 0x1b - (. - gText_Rom_241921)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:260 Route119_WeatherInstitute_2F_Text_ShellyPostBattle
	.globl gText_Rom_24193C
gText_Rom_24193C: @ 0x0824193C
	.string "マグマだん だけでも めざわり なのに\nあなた どうして わたしたちの まわりを\lチョロチョロ かぎまわって いるの!$"
	.if (. - gText_Rom_24193C) > 0x3c
	.error "gText_Rom_24193C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24193C) < 0x3c
	.space 0x3c - (. - gText_Rom_24193C)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:266 Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy
	.globl gText_Rom_241978
gText_Rom_241978: @ 0x08241978
	.string "たいへんです!\pたったいま マグマだんの れんちゅうが\nてんきけんきゅうじょを つうかして\lおくりびやま ほうめんに\lむかって いきました!$"
	.if (. - gText_Rom_241978) > 0x47
	.error "gText_Rom_241978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241978) < 0x47
	.space 0x47 - (. - gText_Rom_241978)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:273 Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre
	.globl gText_Rom_2419BF
gText_Rom_2419BF: @ 0x082419BF
	.string "なんですって!\pえーい こうしちゃ いられない\nわれわれも おくりびやまに いそぐわよ!\pオーッホッホ!\nマグマだんめ まってなさーい!$"
	.if (. - gText_Rom_2419BF) > 0x45
	.error "gText_Rom_2419BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2419BF) < 0x45
	.space 0x45 - (. - gText_Rom_2419BF)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:280 Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_241A04
gText_Rom_241A04: @ 0x08241A04
	.string "ありがとうよ\nきみの おかげで たすかったよ\pおれいと いっては なんだが\nこの ポケモンを もらって おくれ$"
	.if (. - gText_Rom_241A04) != 0x38
	.error "gText_Rom_241A04 must retain its original byte length"
	.endif
	.globl gText_Rom_241A38
	.set gText_Rom_241A38, gText_Rom_241A04 + 0x34

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:287 Route119_WeatherInstitute_2F_Text_NoRoomForPokemon
	.globl gText_Rom_241A3C
gText_Rom_241A3C: @ 0x08241A3C
	.string "あら? それいじょう\nポケモンを もてないようだよ$"
	.if (. - gText_Rom_241A3C) > 0x1a
	.error "gText_Rom_241A3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241A3C) < 0x1a
	.space 0x1a - (. - gText_Rom_241A3C)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:291 Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
	.globl gText_Rom_241A56
gText_Rom_241A56: @ 0x08241A56
	.string "{PLAYER}は\nポワルンを もらった!$"
	.if (. - gText_Rom_241A56) > 0x10
	.error "gText_Rom_241A56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241A56) < 0x10
	.space 0x10 - (. - gText_Rom_241A56)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:294 Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather
	.globl gText_Rom_241A66
gText_Rom_241A66: @ 0x08241A66
	.string "そいつは そのときの てんきに よって\nすがたを かえる ポケモン なんだよ\pけんきゅうじょ には たくさん いるから\nえんりょせずに もらって おくれよ$"
	.if (. - gText_Rom_241A66) > 0x4e
	.error "gText_Rom_241A66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241A66) < 0x4e
	.space 0x4e - (. - gText_Rom_241A66)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:300 Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous
	.globl gText_Rom_241AB4
gText_Rom_241AB4: @ 0x08241AB4
	.string "わたしも ながい あいだ\nあめの けんきゅうを してるが\lてんきを じゆうじざいに かえるだなんて\lにんげんには むりな はなし だよ$"
	.if (. - gText_Rom_241AB4) > 0x44
	.error "gText_Rom_241AB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241AB4) < 0x44
	.space 0x44 - (. - gText_Rom_241AB4)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:305 Route119_WeatherInstitute_2F_Text_GroudonWeather
	.globl gText_Rom_241AF8
gText_Rom_241AF8: @ 0x08241AF8
	.string "わたしは ホウエンちほうの てんきを\nかんそく しています\pげんざい {STR_VAR_1}で\nひでりが はっせい しています!\pということは\n{STR_VAR_1}の どこかに……?$"
	.if (. - gText_Rom_241AF8) > 0x4b
	.error "gText_Rom_241AF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241AF8) < 0x4b
	.space 0x4b - (. - gText_Rom_241AF8)
	.endif

	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:313 Route119_WeatherInstitute_2F_Text_KyogreWeather
	.globl gText_Rom_241B43
gText_Rom_241B43: @ 0x08241B43
	.string "わたしは ホウエンちほうの てんきを\nかんそく しています\pげんざい {STR_VAR_1}で\nはげしい おおあめが ふっています!\pということは\n{STR_VAR_1}の どこかに……?$"
	.if (. - gText_Rom_241B43) > 0x4d
	.error "gText_Rom_241B43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241B43) < 0x4d
	.space 0x4d - (. - gText_Rom_241B43)
	.endif

	@ field-script:0x24172F FieldScriptText_241B90
	.globl gText_Rom_241B90
gText_Rom_241B90: @ 0x08241B90
	.string "いじょう　きしょうは\nもう　かんそく　されなく　なりました\pたまに　あめが　ふっても\nそれは　めぐみのあめと　いえるでしょう！$"
	.if (. - gText_Rom_241B90) > 0x40
	.error "gText_Rom_241B90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241B90) < 0x40
	.space 0x40 - (. - gText_Rom_241B90)
	.endif
	.incbin "baserom.gba", 0x241bd0, 0x1d

	@ data/maps/Route119_House/scripts.inc:18 Route119_House_Text_RumorAboutCaveOfOrigin
	.globl gText_Rom_241BED
gText_Rom_241BED: @ 0x08241BED
	.string "どこかに めざめのほこら とよばれる\nどうくつが あるんですって!\pポケモンの たましいが よみがえる ところ\nという うわさ だけど\lそんなこと ほんとうに あるのかしら?$"
	.if (. - gText_Rom_241BED) > 0x58
	.error "gText_Rom_241BED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241BED) < 0x58
	.space 0x58 - (. - gText_Rom_241BED)
	.endif

	@ data/maps/Route119_House/scripts.inc:25 Route119_House_Text_Wingull
	.globl gText_Rom_241C45
gText_Rom_241C45: @ 0x08241C45
	.string "キャモメ『ぴひょ?$"
	.if (. - gText_Rom_241C45) > 0xa
	.error "gText_Rom_241C45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241C45) < 0xa
	.space 0xa - (. - gText_Rom_241C45)
	.endif
	.incbin "baserom.gba", 0x241c4f, 0x544

	@ field-script:0x241C66 FieldScriptText_242193
	.globl gText_Rom_242193
gText_Rom_242193: @ 0x08242193
	.string "オレは　ダイビング　トレジャーハンター！\pふかい　うみに　もぐっては\nかいていに　ねむる　おたからを　あつめる\lすげえ　やろう　なのさ！$"
	.if (. - gText_Rom_242193) > 0x45
	.error "gText_Rom_242193 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_242193) < 0x45
	.space 0x45 - (. - gText_Rom_242193)
	.endif

	@ field-script:0x241C77 FieldScriptText_2421D8
	.globl gText_Rom_2421D8
gText_Rom_2421D8: @ 0x082421D8
	.string "おおむかしに　つくられた　という\nいろいろな　かけら　みつかったかい？$"
	.if (. - gText_Rom_2421D8) > 0x24
	.error "gText_Rom_2421D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2421D8) < 0x24
	.space 0x24 - (. - gText_Rom_2421D8)
	.endif

	@ field-script:0x242180 FieldScriptText_2421FC
	.globl gText_Rom_2421FC
gText_Rom_2421FC: @ 0x082421FC
	.string "きみ　おたから　もってないのか……\pあかいかけら　とか\nいろいろな　かけらを　みつけたら\lこうかん　してくれよな！$"
	.if (. - gText_Rom_2421FC) > 0x3a
	.error "gText_Rom_2421FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2421FC) < 0x3a
	.space 0x3a - (. - gText_Rom_2421FC)
	.endif

	@ field-script:0x241CF9 FieldScriptText_242236
	.globl gText_Rom_242236
gText_Rom_242236: @ 0x08242236
	.string "おおっ！　それは！\nオレが　さがしている　かけら！！\pなっ　なっ！\nきみの　もってる　おたからと\lオレの　おたから　こうかん　してくれよ！$"
	.if (. - gText_Rom_242236) > 0x46
	.error "gText_Rom_242236 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_242236) < 0x46
	.space 0x46 - (. - gText_Rom_242236)
	.endif

	@ field-script:0x241D06 FieldScriptText_24227C
	.globl gText_Rom_24227C
gText_Rom_24227C: @ 0x0824227C
	.string "どれを　こうかん　するんだい？$"
	.if (. - gText_Rom_24227C) > 0x10
	.error "gText_Rom_24227C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24227C) < 0x10
	.space 0x10 - (. - gText_Rom_24227C)
	.endif

	@ field-script:0x2420F1 FieldScriptText_24228C
	.globl gText_Rom_24228C
gText_Rom_24228C: @ 0x0824228C
	.string "{0xFD}{0x02}　を　{0xFD}{0x03}に\nこうかん　するんだな？$"
	.if (. - gText_Rom_24228C) > 0x15
	.error "gText_Rom_24228C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24228C) < 0x15
	.space 0x15 - (. - gText_Rom_24228C)
	.endif

	@ field-script:0x24213B FieldScriptText_2422A1
	.globl gText_Rom_2422A1
gText_Rom_2422A1: @ 0x082422A1
	.string "とりひき　せいりつ！\nだいじに　つかって　くれよな！$"
	.if (. - gText_Rom_2422A1) > 0x1b
	.error "gText_Rom_2422A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2422A1) < 0x1b
	.space 0x1b - (. - gText_Rom_2422A1)
	.endif

	@ field-script:0x242153 FieldScriptText_2422BC
	.globl gText_Rom_2422BC
gText_Rom_2422BC: @ 0x082422BC
	.string "まだ　こうかん　するかい？$"
	.if (. - gText_Rom_2422BC) > 0xe
	.error "gText_Rom_2422BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2422BC) < 0xe
	.space 0xe - (. - gText_Rom_2422BC)
	.endif

	@ field-script:0x24216C FieldScriptText_2422CA
	.globl gText_Rom_2422CA
gText_Rom_2422CA: @ 0x082422CA
	.string "おっと　バッグが　いっぱい　だぜ\nどうぐを　へらして　きなよ$"
	.if (. - gText_Rom_2422CA) > 0x1f
	.error "gText_Rom_2422CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2422CA) < 0x1f
	.space 0x1f - (. - gText_Rom_2422CA)
	.endif

	@ field-script:0x242176 FieldScriptText_2422E9
	.globl gText_Rom_2422E9
gText_Rom_2422E9: @ 0x082422E9
	.string "そいつは　がっかりだ\nきが　むいたら　また　きてくれよな！$"
	.if (. - gText_Rom_2422E9) > 0x1e
	.error "gText_Rom_2422E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2422E9) < 0x1e
	.space 0x1e - (. - gText_Rom_2422E9)
	.endif

	@ field-script:0x24218C FieldScriptText_242307
	.globl gText_Rom_242307
gText_Rom_242307: @ 0x08242307
	.string "ほしいモノ　　　　　　　あげるモノ\n　あかいかけら　　　{ESCAPE}{0x02}{ESCAPE}{0x03}　ほのおのいし\pほしいモノ　　　　　　　あげるモノ\n　きいろいかけら　　{ESCAPE}{0x02}{ESCAPE}{0x03}　かみなりのいし\pほしいモノ　　　　　　　あげるモノ\n　あおいかけら　　　{ESCAPE}{0x02}{ESCAPE}{0x03}　みずのいし\pほしいモノ　　　　　　　あげるモノ\n　みどりのかけら　　{ESCAPE}{0x02}{ESCAPE}{0x03}　リーフのいし$"
	.if (. - gText_Rom_242307) > 0xa8
	.error "gText_Rom_242307 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_242307) < 0xa8
	.space 0xa8 - (. - gText_Rom_242307)
	.endif
	.globl Std_MsgboxNPC
Std_MsgboxNPC: @ 0x082423AF
	.incbin "baserom.gba", 0x2423af, 0xb
	.globl Std_MsgboxSign
Std_MsgboxSign: @ 0x082423BA
	.incbin "baserom.gba", 0x2423ba, 0xa
	.globl Std_MsgboxDefault
Std_MsgboxDefault: @ 0x082423C4
	.incbin "baserom.gba", 0x2423c4, 0x8
	.globl Std_MsgboxYesNo
Std_MsgboxYesNo: @ 0x082423CC
	.incbin "baserom.gba", 0x2423cc, 0xa
	.globl Std_MsgboxGetPoints
Std_MsgboxGetPoints: @ 0x082423D6
	.incbin "baserom.gba", 0x2423d6, 0xb
	.globl Std_MsgboxPokenav
Std_MsgboxPokenav: @ 0x082423E1
	.incbin "baserom.gba", 0x2423e1, 0xd
	.globl gUnknown_82423EE
gUnknown_82423EE: @ 0x082423EE
	.incbin "baserom.gba", 0x2423ee, 0xe
	.globl gUnknown_82423FC
gUnknown_82423FC: @ 0x082423FC
	.incbin "baserom.gba", 0x2423fc, 0x28
	.globl gUnknown_8242424
gUnknown_8242424: @ 0x08242424
	.incbin "baserom.gba", 0x242424, 0x38
	.globl gUnknown_824245C
gUnknown_824245C: @ 0x0824245C
	.incbin "baserom.gba", 0x24245c, 0xf
	.globl gUnknown_824246B
gUnknown_824246B: @ 0x0824246B
	.incbin "baserom.gba", 0x24246b, 0x27
	.globl gUnknown_8242492
gUnknown_8242492: @ 0x08242492
	.incbin "baserom.gba", 0x242492, 0x9c
	.globl Std_MsgboxAutoclose
Std_MsgboxAutoclose: @ 0x0824252E
	.incbin "baserom.gba", 0x24252e, 0x14a
	.globl gUnknown_8242678
gUnknown_8242678: @ 0x08242678
	.incbin "baserom.gba", 0x242678, 0x279
	.globl gUnknown_82428F1
gUnknown_82428F1: @ 0x082428F1
	.incbin "baserom.gba", 0x2428f1, 0xb
	.globl gUnknown_82428FC
gUnknown_82428FC: @ 0x082428FC
	.incbin "baserom.gba", 0x2428fc, 0x271
	.globl Std_ObtainItem
Std_ObtainItem: @ 0x08242B6D
	.incbin "baserom.gba", 0x242b6d, 0xe2
	.globl Std_ObtainDecoration
Std_ObtainDecoration: @ 0x08242C4F
	.incbin "baserom.gba", 0x242c4f, 0x46
	.globl Std_FindItem
Std_FindItem: @ 0x08242C95
	.incbin "baserom.gba", 0x242c95, 0xb4
	.globl gUnknown_8242D49
gUnknown_8242D49: @ 0x08242D49
	.incbin "baserom.gba", 0x242d49, 0xd5
	.globl gUnknown_8242E1E
gUnknown_8242E1E: @ 0x08242E1E
	.incbin "baserom.gba", 0x242e1e, 0x10e
	.globl gUnknown_8242F2C
gUnknown_8242F2C: @ 0x08242F2C
	.incbin "baserom.gba", 0x242f2c, 0x1ef

	.globl gUnknown_824311B
gUnknown_824311B: @ 0x0824311B
	.incbin "baserom.gba", 0x24311b, 0x2f4

	setwildbattle SPECIES_KECLEON, 30, ITEM_NONE

	.incbin "baserom.gba", 0x243415, 0x23c

	.globl gUnknown_8243651
gUnknown_8243651: @ 0x08243651
	.incbin "baserom.gba", 0x243651, 0x9
	.globl gUnknown_824365A
gUnknown_824365A: @ 0x0824365A
	.incbin "baserom.gba", 0x24365a, 0x9
	.globl gUnknown_8243663
gUnknown_8243663: @ 0x08243663
	.incbin "baserom.gba", 0x243663, 0x9
	.globl gUnknown_824366C
gUnknown_824366C: @ 0x0824366C
	.incbin "baserom.gba", 0x24366c, 0x9
	.globl gUnknown_8243675
gUnknown_8243675: @ 0x08243675
	.incbin "baserom.gba", 0x243675, 0x9
	.globl gUnknown_824367E
gUnknown_824367E: @ 0x0824367E
	.incbin "baserom.gba", 0x24367e, 0x9
	.globl gUnknown_8243687
gUnknown_8243687: @ 0x08243687
	.incbin "baserom.gba", 0x243687, 0x9

	@ data/text/record_mix.inc:1 Text_WouldYouLikeToMixRecords
	.globl gText_Rom_243690
gText_Rom_243690: @ 0x08243690
	.string "おともだちと レポートを\nまぜますか?$"
	.if (. - gText_Rom_243690) > 0x14
	.error "gText_Rom_243690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243690) < 0x14
	.space 0x14 - (. - gText_Rom_243690)
	.endif

	@ data/text/pkmn_center_nurse.inc:18 gText_WeHopeToSeeYouAgain (+1 aliases)
	.globl gText_Rom_2436A4
gText_Rom_2436A4: @ 0x082436A4
	.string "またの\nごりようを おまち してます!$"
	.if (. - gText_Rom_2436A4) > 0x14
	.error "gText_Rom_2436A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436A4) < 0x14
	.space 0x14 - (. - gText_Rom_2436A4)
	.endif

	@ field-script:0x242E2C FieldScriptText_2436B8
	.globl gText_Rom_2436B8
gText_Rom_2436B8: @ 0x082436B8
	.string "{0xFD}{0x01}は\nパソコンの　スイッチを　いれた！$"
	.if (. - gText_Rom_2436B8) > 0x15
	.error "gText_Rom_2436B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436B8) < 0x15
	.space 0x15 - (. - gText_Rom_2436B8)
	.endif
	.globl gUnknown_82436CD
gUnknown_82436CD: @ 0x082436CD

	@ data/text/pc.inc:5 gText_WhichPCShouldBeAccessed
	.globl gText_Rom_2436CD
gText_Rom_2436CD: @ 0x082436CD
	.string "どこの パソコンに せつぞく して\nつうしん しますか?$"
	.if (. - gText_Rom_2436CD) > 0x1d
	.error "gText_Rom_2436CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436CD) < 0x1d
	.space 0x1d - (. - gText_Rom_2436CD)
	.endif

	@ data/text/pc.inc:9 gText_AccessedSomeonesPC
	.globl gText_Rom_2436EA
gText_Rom_2436EA: @ 0x082436EA
	.string "だれかの パソコンに せつぞく した!$"
	.if (. - gText_Rom_2436EA) > 0x14
	.error "gText_Rom_2436EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436EA) < 0x14
	.space 0x14 - (. - gText_Rom_2436EA)
	.endif

	@ data/text/pc.inc:12 gText_StorageSystemOpened
	.globl gText_Rom_2436FE
gText_Rom_2436FE: @ 0x082436FE
	.string "ポケモンの あずかり システムを\nよびだした!$"
	.if (. - gText_Rom_2436FE) > 0x18
	.error "gText_Rom_2436FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436FE) < 0x18
	.space 0x18 - (. - gText_Rom_2436FE)
	.endif

	@ data/text/pc.inc:16 gText_AccessedPlayersPC
	.globl gText_Rom_243716
gText_Rom_243716: @ 0x08243716
	.string "{PLAYER}の パソコンに せつぞくした!$"
	.if (. - gText_Rom_243716) > 0x12
	.error "gText_Rom_243716 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243716) < 0x12
	.space 0x12 - (. - gText_Rom_243716)
	.endif

	@ data/text/pc.inc:19 gText_AccessedLanettesPC
	.globl gText_Rom_243728
gText_Rom_243728: @ 0x08243728
	.string "マユミの パソコンに せつぞく した!$"
	.if (. - gText_Rom_243728) > 0x14
	.error "gText_Rom_243728 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243728) < 0x14
	.space 0x14 - (. - gText_Rom_243728)
	.endif

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

	@ field-script:0x1DC4E1 FieldScriptText_24390F
	.globl gText_Rom_24390F
gText_Rom_24390F: @ 0x0824390F
	.string "ようこそ！\pおかいもの　ですね！$"
	.if (. - gText_Rom_24390F) > 0x11
	.error "gText_Rom_24390F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24390F) < 0x11
	.space 0x11 - (. - gText_Rom_24390F)
	.endif

	@ field-script:0x1DC13E FieldScriptText_243920
	.globl gText_Rom_243920
gText_Rom_243920: @ 0x08243920
	.string "またどうぞ！$"
	.if (. - gText_Rom_243920) > 0x7
	.error "gText_Rom_243920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243920) < 0x7
	.space 0x7 - (. - gText_Rom_243920)
	.endif

	@ field-script:0x211A4D FieldScriptText_243927
	.globl gText_Rom_243927
gText_Rom_243927: @ 0x08243927
	.string "{0xFD}{0x01}{0xFD}{0x05}　いらっしゃい！\pおかいものね！$"
	.if (. - gText_Rom_243927) > 0x15
	.error "gText_Rom_243927 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243927) < 0x15
	.space 0x15 - (. - gText_Rom_243927)
	.endif

	@ data/text/obtain_item.inc:1 gText_ObtainedTheItem (+1 aliases)
	.globl gText_Rom_24393C
gText_Rom_24393C: @ 0x0824393C
	.string "{STR_VAR_2}を てにいれた!$"
	.if (. - gText_Rom_24393C) > 0xb
	.error "gText_Rom_24393C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24393C) < 0xb
	.space 0xb - (. - gText_Rom_24393C)
	.endif

	@ data/text/obtain_item.inc:4 gText_TheBagIsFull
	.globl gText_Rom_243947
gText_Rom_243947: @ 0x08243947
	.string "バッグが いっぱいだ!$"
	.if (. - gText_Rom_243947) > 0xc
	.error "gText_Rom_243947 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243947) < 0xc
	.space 0xc - (. - gText_Rom_243947)
	.endif

	@ data/text/obtain_item.inc:7 gText_PutItemInPocket
	.globl gText_Rom_243953
gText_Rom_243953: @ 0x08243953
	.string "{PLAYER}は {STR_VAR_2}を\n{STR_VAR_3}ポケットに しまった!$"
	.if (. - gText_Rom_243953) > 0x16
	.error "gText_Rom_243953 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243953) < 0x16
	.space 0x16 - (. - gText_Rom_243953)
	.endif

	@ data/text/obtain_item.inc:11 gText_PlayerFoundOneItem
	.globl gText_Rom_243969
gText_Rom_243969: @ 0x08243969
	.string "{PLAYER}は {STR_VAR_2}を\nみつけた!$"
	.if (. - gText_Rom_243969) > 0xe
	.error "gText_Rom_243969 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243969) < 0xe
	.space 0xe - (. - gText_Rom_243969)
	.endif

	@ data/text/obtain_item.inc:15 gText_TooBadBagIsFull
	.globl gText_Rom_243977
gText_Rom_243977: @ 0x08243977
	.string "ざんねん!\nバッグが いっぱいだ……$"
	.if (. - gText_Rom_243977) > 0x13
	.error "gText_Rom_243977 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243977) < 0x13
	.space 0x13 - (. - gText_Rom_243977)
	.endif

	@ data/text/obtain_item.inc:19 gText_PlayerPutItemInBag
	.globl gText_Rom_24398A
gText_Rom_24398A: @ 0x0824398A
	.string "{PLAYER}は {STR_VAR_2}を\nバッグに しまった!$"
	.if (. - gText_Rom_24398A) > 0x13
	.error "gText_Rom_24398A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24398A) < 0x13
	.space 0x13 - (. - gText_Rom_24398A)
	.endif

	@ data/text/obtain_item.inc:1 gText_ObtainedTheItem (+1 aliases)
	.globl gText_Rom_24399D
gText_Rom_24399D: @ 0x0824399D
	.string "{STR_VAR_2}を てにいれた!$"
	.if (. - gText_Rom_24399D) > 0xb
	.error "gText_Rom_24399D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24399D) < 0xb
	.space 0xb - (. - gText_Rom_24399D)
	.endif

	@ data/text/obtain_item.inc:26 gText_NoRoomLeftForAnother
	.globl gText_Rom_2439A8
gText_Rom_2439A8: @ 0x082439A8
	.string "ざんねん! {STR_VAR_2}を\nいれる ばしょが いっぱいだ……$"
	.if (. - gText_Rom_2439A8) > 0x1b
	.error "gText_Rom_2439A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2439A8) < 0x1b
	.space 0x1b - (. - gText_Rom_2439A8)
	.endif

	@ data/text/obtain_item.inc:30 gText_TheDecorWasTransferredToThePC
	.globl gText_Rom_2439C3
gText_Rom_2439C3: @ 0x082439C3
	.string "{STR_VAR_2}は\nパソコンに てんそうされた!$"
	.if (. - gText_Rom_2439C3) > 0x13
	.error "gText_Rom_2439C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2439C3) < 0x13
	.space 0x13 - (. - gText_Rom_2439C3)
	.endif

	@ field-script:0x242EF8 FieldScriptText_2439D6
	.globl gText_Rom_2439D6
gText_Rom_2439D6: @ 0x082439D6
	.string "べんりなどうぐ　いろいろ　あります\n「フレンドリィショップ」$"
	.if (. - gText_Rom_2439D6) > 0x1f
	.error "gText_Rom_2439D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2439D6) < 0x1f
	.space 0x1f - (. - gText_Rom_2439D6)
	.endif

	@ field-script:0x242F01 FieldScriptText_2439F5
	.globl gText_Rom_2439F5
gText_Rom_2439F5: @ 0x082439F5
	.string "つかれた　ポケモンも　ひとやすみ！\n「ポケモンセンター」$"
	.if (. - gText_Rom_2439F5) > 0x1d
	.error "gText_Rom_2439F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2439F5) < 0x1d
	.space 0x1d - (. - gText_Rom_2439F5)
	.endif

	@ field-script:0x24C4FF FieldScriptText_243A12
	.globl gText_Rom_243A12
gText_Rom_243A12: @ 0x08243A12
	.string "{0xFD}{0x02}が　すきそうな　ばんぐみをやってる！\n…………………………………………………\pさきを　いそがなきゃ！$"
	.if (. - gText_Rom_243A12) > 0x35
	.error "gText_Rom_243A12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243A12) < 0x35
	.space 0x35 - (. - gText_Rom_243A12)
	.endif

	@ field-script:0x20B1A6 FieldScriptText_243A47
	.globl gText_Rom_243A47
gText_Rom_243A47: @ 0x08243A47
	.string "ミナモ　デパートへ　ようこそ！\pなんかいへ　いきますか？$"
	.if (. - gText_Rom_243A47) > 0x1d
	.error "gText_Rom_243A47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243A47) < 0x1d
	.space 0x1d - (. - gText_Rom_243A47)
	.endif

	@ field-script:0x1EA3ED FieldScriptText_243A64
	.globl gText_Rom_243A64
gText_Rom_243A64: @ 0x08243A64
	.string "さばくの　すなあらしが　ひどくて\nさきに　すすめない！$"
	.if (. - gText_Rom_243A64) > 0x1c
	.error "gText_Rom_243A64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243A64) < 0x1c
	.space 0x1c - (. - gText_Rom_243A64)
	.endif

	@ field-script:0x2440DF FieldScriptText_243A80
	.globl gText_Rom_243A80
gText_Rom_243A80: @ 0x08243A80
	.string "バッグに　いれてある　どうぐを\nべんりボタンに　とうろく　できます$"
	.if (. - gText_Rom_243A80) > 0x22
	.error "gText_Rom_243A80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243A80) < 0x22
	.space 0x22 - (. - gText_Rom_243A80)
	.endif

	@ field-script:0x1F01FD FieldScriptText_243AA2
	.globl gText_Rom_243AA2
gText_Rom_243AA2: @ 0x08243AA2
	.string "パソコンに\nポケモン　トレーナー　こうざの\lメールが　きている！\p……　……　……\pポケモンが　おぼえられる　わざは　4つ！\pどんな　わざを　おぼえさせるかで\nトレーナーの　じつりょくが　とわれます！\p……　……　……$"
	.if (. - gText_Rom_243AA2) > 0x6e
	.error "gText_Rom_243AA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243AA2) < 0x6e
	.space 0x6e - (. - gText_Rom_243AA2)
	.endif

	@ field-script:0x1F01E2 FieldScriptText_243B10
	.globl gText_Rom_243B10
gText_Rom_243B10: @ 0x08243B10
	.string "{0xFD}{0x01}は　パソコンの\nスイッチを　いれた！$"
	.if (. - gText_Rom_243B10) > 0x15
	.error "gText_Rom_243B10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243B10) < 0x15
	.space 0x15 - (. - gText_Rom_243B10)
	.endif

	@ field-script:0x2592C5 FieldScriptText_243B25
	.globl gText_Rom_243B25
gText_Rom_243B25: @ 0x08243B25
	.string "つうしんは　キャンセルされました$"
	.if (. - gText_Rom_243B25) > 0x11
	.error "gText_Rom_243B25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243B25) < 0x11
	.space 0x11 - (. - gText_Rom_243B25)
	.endif
	.incbin "baserom.gba", 0x243b36, 0x18

	@ field-script:0x244104 FieldScriptText_243B4E
	.globl gText_Rom_243B4E
gText_Rom_243B4E: @ 0x08243B4E
	.string "{0xFD}{0x01}の　てもとには\nたたかえるポケモンが　もういない！\p{0xFD}{0x01}は\nめのまえが　まっくらに　なった！$"
	.if (. - gText_Rom_243B4E) > 0x31
	.error "gText_Rom_243B4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243B4E) < 0x31
	.space 0x31 - (. - gText_Rom_243B4E)
	.endif

	@ field-script:0x244D04 FieldScriptText_243B7F
	.globl gText_Rom_243B7F
gText_Rom_243B7F: @ 0x08243B7F
	.string "{0xFD}{0x02}の　{0xFD}{0x03}を\nポケナビに　とうろく　した！$"
	.if (. - gText_Rom_243B7F) > 0x17
	.error "gText_Rom_243B7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243B7F) < 0x17
	.space 0x17 - (. - gText_Rom_243B7F)
	.endif

	@ field-script:0x1DC504 FieldScriptText_243B96
	.globl gText_Rom_243B96
gText_Rom_243B96: @ 0x08243B96
	.string "「ひみつのちから」って\nわざマシン　しってる？\pおれら　わざマシン　「ひみつのちから」が\nだいすき　なんだ\pおれらの　メンバーが　どこかで　くれるから\nそれを　もらったら　また　おいで！\pきみも　メンバーとして\nひみつで　いいものを　うってあげるよ$"
	.if (. - gText_Rom_243B96) > 0x7d
	.error "gText_Rom_243B96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243B96) < 0x7d
	.space 0x7d - (. - gText_Rom_243B96)
	.endif

	@ field-script:0x242AFA FieldScriptText_243C13
	.globl gText_Rom_243C13
gText_Rom_243C13: @ 0x08243C13
	.string "おあずかりした　ポケモンに\nポケルスが　ついて　いるようです\pくわしいことは　わかって　いないのですが\nポケルスと　いうのは　ポケモンに　くっつく\lちいさな　せいめいたいで\lこれが　ついている　あいだ\lポケモンが　よく　そだつ　みたいです$"
	.if (. - gText_Rom_243C13) > 0x78
	.error "gText_Rom_243C13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243C13) < 0x78
	.space 0x78 - (. - gText_Rom_243C13)
	.endif

	@ data/text/surf.inc:1 gText_WantToUseSurf
	.globl gText_Rom_243C8B
gText_Rom_243C8B: @ 0x08243C8B
	.string "みずは ふかい あおに そまっている……\nなみのりを つかいますか?$"
	.if (. - gText_Rom_243C8B) > 0x23
	.error "gText_Rom_243C8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243C8B) < 0x23
	.space 0x23 - (. - gText_Rom_243C8B)
	.endif

	@ data/text/surf.inc:5 gText_PlayerUsedSurf
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_243CAE
gText_Rom_243CAE: @ 0x08243CAE
	.string "{STR_VAR_1}は\nなみのりを つかった!$"
	.if (. - gText_Rom_243CAE) != 0x10
	.error "gText_Rom_243CAE must retain its original byte length"
	.endif
	.globl gText_Rom_243CB6
	.set gText_Rom_243CB6, gText_Rom_243CAE + 0x8
	.globl gText_Rom_243CB9
	.set gText_Rom_243CB9, gText_Rom_243CAE + 0xb

	@ field-script:0x21BB8A FieldScriptText_243CBE
	.globl gText_Rom_243CBE
gText_Rom_243CBE: @ 0x08243CBE
	.string "どこか　とおくの　とびらが\nひらいたような　おとだ……$"
	.if (. - gText_Rom_243CBE) > 0x1c
	.error "gText_Rom_243CBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243CBE) < 0x1c
	.space 0x1c - (. - gText_Rom_243CBE)
	.endif

	@ field-script:0x213E74 FieldScriptText_243CDA
	.globl gText_Rom_243CDA
gText_Rom_243CDA: @ 0x08243CDA
	.string "かべに　おおきな　あなが　あいている！$"
	.if (. - gText_Rom_243CDA) > 0x14
	.error "gText_Rom_243CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243CDA) < 0x14
	.space 0x14 - (. - gText_Rom_243CDA)
	.endif

	@ field-script:0x247016 FieldScriptText_243CEE
	.globl gText_Rom_243CEE
gText_Rom_243CEE: @ 0x08243CEE
	.string "もうしわけ　ございません\nポケモン　ワイヤレス　クラブは\lただいま　ちょうせいちゅう　です$"
	.if (. - gText_Rom_243CEE) > 0x2e
	.error "gText_Rom_243CEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243CEE) < 0x2e
	.space 0x2e - (. - gText_Rom_243CEE)
	.endif

	@ field-script:0x247020 FieldScriptText_243D1C
	.globl gText_Rom_243D1C
gText_Rom_243D1C: @ 0x08243D1C
	.string "ちょうせいちゅうの　ようだ$"
	.if (. - gText_Rom_243D1C) > 0xe
	.error "gText_Rom_243D1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243D1C) < 0xe
	.space 0xe - (. - gText_Rom_243D1C)
	.endif
	.incbin "baserom.gba", 0x243d2a, 0x58

	@ field-script:0x24346F FieldScriptText_243D82
	.globl gText_Rom_243D82
gText_Rom_243D82: @ 0x08243D82
	.string "{0xFD}{0x01}は\n{0xFD}{0x02}を　わたした！$"
	.if (. - gText_Rom_243D82) > 0xe
	.error "gText_Rom_243D82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243D82) < 0xe
	.space 0xe - (. - gText_Rom_243D82)
	.endif

	@ field-script:0x24681A FieldScriptText_243D90
	.globl gText_Rom_243D90
gText_Rom_243D90: @ 0x08243D90
	.string "ふしぎな　おくりものを　ごりよう\nいただき　ありがとう　ございます！$"
	.if (. - gText_Rom_243D90) > 0x23
	.error "gText_Rom_243D90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243D90) < 0x23
	.space 0x23 - (. - gText_Rom_243D90)
	.endif

	@ field-script:0x242D28 FieldScriptText_243DB3
	.globl gText_Rom_243DB3
gText_Rom_243DB3: @ 0x08243DB3
	.string "{0xFD}{0x01}は　{0xFD}{0x02}\n「{0xFD}{0x03}」を　みつけた！$"
	.if (. - gText_Rom_243DB3) > 0x13
	.error "gText_Rom_243DB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243DB3) < 0x13
	.space 0x13 - (. - gText_Rom_243DB3)
	.endif

	@ field-script:0x222AAF FieldScriptText_243DC6
	.globl gText_Rom_243DC6
gText_Rom_243DC6: @ 0x08243DC6
	.string "おかしな　きは\nホエルコじょうろを　いやがっている！\pおかしな　きが　おそいかかってきた！$"
	.if (. - gText_Rom_243DC6) > 0x2e
	.error "gText_Rom_243DC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243DC6) < 0x2e
	.space 0x2e - (. - gText_Rom_243DC6)
	.endif

	@ field-script:0x21C002 FieldScriptText_243DF4
	.globl gText_Rom_243DF4
gText_Rom_243DF4: @ 0x08243DF4
	.string "{0xFD}{0x02}は\nどこかへ　とびさって　いった！$"
	.if (. - gText_Rom_243DF4) > 0x14
	.error "gText_Rom_243DF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243DF4) < 0x14
	.space 0x14 - (. - gText_Rom_243DF4)
	.endif

	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E08
gText_Rom_243E08: @ 0x08243E08
	.string "{0xFD}{0x03}は　だれかのパソコンの\nボックス『{0xFD}{0x02}』に\lてんそう　された！$"
	.if (. - gText_Rom_243E08) > 0x22
	.error "gText_Rom_243E08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E08) < 0x22
	.space 0x22 - (. - gText_Rom_243E08)
	.endif

	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E2A
gText_Rom_243E2A: @ 0x08243E2A
	.string "{0xFD}{0x03}は　マユミのパソコンの\nボックス『{0xFD}{0x02}』に\lてんそう　された！$"
	.if (. - gText_Rom_243E2A) > 0x22
	.error "gText_Rom_243E2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E2A) < 0x22
	.space 0x22 - (. - gText_Rom_243E2A)
	.endif

	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E4C
gText_Rom_243E4C: @ 0x08243E4C
	.string "だれかのパソコンの\nボックス『{0xFD}{0x04}』が\lいっぱいだ！！\p{0xFD}{0x03}は\nボックス『{0xFD}{0x02}』に\lてんそう　された！$"
	.if (. - gText_Rom_243E4C) > 0x34
	.error "gText_Rom_243E4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E4C) < 0x34
	.space 0x34 - (. - gText_Rom_243E4C)
	.endif

	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E80
gText_Rom_243E80: @ 0x08243E80
	.string "マユミのパソコンの\nボックス『{0xFD}{0x04}』が\lいっぱいだ！！\p{0xFD}{0x03}は\nボックス『{0xFD}{0x02}』に\lてんそう　された！$"
	.if (. - gText_Rom_243E80) > 0x34
	.error "gText_Rom_243E80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E80) < 0x34
	.space 0x34 - (. - gText_Rom_243E80)
	.endif

	@ field-script:0x24423D FieldScriptText_243EB4
	.globl gText_Rom_243EB4
gText_Rom_243EB4: @ 0x08243EB4
	.string "ポケモンを　もちきれません！\pボックスも　いっぱいで\nてんそう　できません！$"
	.if (. - gText_Rom_243EB4) > 0x27
	.error "gText_Rom_243EB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243EB4) < 0x27
	.space 0x27 - (. - gText_Rom_243EB4)
	.endif

	@ data/text/pc_transfer.inc:50 gText_NicknameThisPokemon
	.globl gText_Rom_243EDB
gText_Rom_243EDB: @ 0x08243EDB
	.string "{STR_VAR_1}に\nニックネームを つけますか?$"
	.if (. - gText_Rom_243EDB) > 0x13
	.error "gText_Rom_243EDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243EDB) < 0x13
	.space 0x13 - (. - gText_Rom_243EDB)
	.endif

	@ data/text/questionnaire.inc:1 Questionnaire_Text_FillOut
	.globl gText_Rom_243EEE
gText_Rom_243EEE: @ 0x08243EEE
	.string "アンケートようの メモようしが ある\nアンケートに なにか かきますか?$"
	.if (. - gText_Rom_243EEE) > 0x25
	.error "gText_Rom_243EEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243EEE) < 0x25
	.space 0x25 - (. - gText_Rom_243EEE)
	.endif

	@ data/text/questionnaire.inc:5 Questionnaire_Text_ThankYou
	.globl gText_Rom_243F13
gText_Rom_243F13: @ 0x08243F13
	.string "アンケートに ごきょうりょく\nいただき ありがとう ございます!\pこの アンケートは こんごの\nさんこうに させて いただきます!$"
	.if (. - gText_Rom_243F13) > 0x42
	.error "gText_Rom_243F13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243F13) < 0x42
	.space 0x42 - (. - gText_Rom_243F13)
	.endif

	@ data/text/questionnaire.inc:11 Questionnaire_Text_YouKnowThoseWordsGift
	.globl gText_Rom_243F55
gText_Rom_243F55: @ 0x08243F55
	.string "…… おきゃくさま!\nそのことばを しってるの ですか!\pということは ふしぎなおくりもの を\nしって いらっしゃるの ですね!\pこれからは あなたにも\nふしぎなおくりもの が\lとどくように なるでしょう!$"
	.if (. - gText_Rom_243F55) > 0x68
	.error "gText_Rom_243F55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243F55) < 0x68
	.space 0x68 - (. - gText_Rom_243F55)
	.endif

	@ data/text/questionnaire.inc:20 Questionnaire_Text_YouCanAccessMysteryGift
	.globl gText_Rom_243FBD
gText_Rom_243FBD: @ 0x08243FBD
	.string "レポートをかくと ふしぎなおくりもの が\nつかえるように なります$"
	.if (. - gText_Rom_243FBD) > 0x22
	.error "gText_Rom_243FBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243FBD) < 0x22
	.space 0x22 - (. - gText_Rom_243FBD)
	.endif

	@ data/text/questionnaire.inc:24 Questionnaire_Text_YouKnowThoseWordsEvent
	.globl gText_Rom_243FDF
gText_Rom_243FDF: @ 0x08243FDF
	.string "…… おきゃくさま!\nそのことばを しってるの ですか!\pということは ふしぎなできごと を\nしって いらっしゃるの ですね!$"
	.if (. - gText_Rom_243FDF) > 0x40
	.error "gText_Rom_243FDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243FDF) < 0x40
	.space 0x40 - (. - gText_Rom_243FDF)
	.endif

	@ data/text/questionnaire.inc:30 Questionnaire_Text_YouCanAccessMysteryEvent
	.globl gText_Rom_24401F
gText_Rom_24401F: @ 0x0824401F
	.string "レポートをかくと ふしぎなできごと が\nつかえるように なります$"
	.if (. - gText_Rom_24401F) > 0x21
	.error "gText_Rom_24401F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24401F) < 0x21
	.space 0x21 - (. - gText_Rom_24401F)
	.endif

	@ data/text/questionnaire.inc:34 MysteryGift_Text_TheresATicketForYou
	.globl gText_Rom_244040
gText_Rom_244040: @ 0x08244040
	.string "ふしぎなできごと を ごりよう\nいただき ありがとう ございます!\l{PLAYER}さま ですね\pあなたさま あてに\nこの チケットが\lおくられて きました$"
	.if (. - gText_Rom_244040) > 0x49
	.error "gText_Rom_244040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244040) < 0x49
	.space 0x49 - (. - gText_Rom_244040)
	.endif

	@ data/text/questionnaire.inc:42 MysteryGift_Text_TryUsingItAtLilycovePort
	.globl gText_Rom_244089
gText_Rom_244089: @ 0x08244089
	.string "ミナモシティの ふなつきば で\nつかえる ようですね\pぜひ ごりよう してみては\nいかがでしょうか?$"
	.if (. - gText_Rom_244089) > 0x33
	.error "gText_Rom_244089 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244089) < 0x33
	.space 0x33 - (. - gText_Rom_244089)
	.endif

	@ data/text/abnormal_weather.inc:1 gText_AbnormalWeatherEnded_Rain
	.globl gText_Rom_2440BC
gText_Rom_2440BC: @ 0x082440BC
	.string "おおあめは おさまったようだ……$"
	.if (. - gText_Rom_2440BC) > 0x11
	.error "gText_Rom_2440BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2440BC) < 0x11
	.space 0x11 - (. - gText_Rom_2440BC)
	.endif

	@ data/text/abnormal_weather.inc:4 gText_AbnormalWeatherEnded_Sun
	.globl gText_Rom_2440CD
gText_Rom_2440CD: @ 0x082440CD
	.string "ひでりは おさまったようだ……$"
	.if (. - gText_Rom_2440CD) > 0x10
	.error "gText_Rom_2440CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2440CD) < 0x10
	.space 0x10 - (. - gText_Rom_2440CD)
	.endif
	.globl gUnknown_82440DD
gUnknown_82440DD: @ 0x082440DD
	.incbin "baserom.gba", 0x2440dd, 0x9
	.globl gUnknown_82440E6
gUnknown_82440E6: @ 0x082440E6
	.incbin "baserom.gba", 0x2440e6, 0x15f
	.globl gUnknown_8244245
gUnknown_8244245: @ 0x08244245
	.incbin "baserom.gba", 0x244245, 0x504
	.globl gUnknown_8244749
gUnknown_8244749: @ 0x08244749
	.incbin "baserom.gba", 0x244749, 0x5aa
	.globl Std_RegisteredInMatchCall
Std_RegisteredInMatchCall: @ 0x08244CF3
	.incbin "baserom.gba", 0x244cf3, 0x1d
	.globl gUnknown_8244D10
gUnknown_8244D10: @ 0x08244D10
	.incbin "baserom.gba", 0x244d10, 0x13
	.globl gUnknown_8244D23
gUnknown_8244D23: @ 0x08244D23
	.incbin "baserom.gba", 0x244d23, 0x17a
	.globl gUnknown_8244E9D
gUnknown_8244E9D: @ 0x08244E9D
	.incbin "baserom.gba", 0x244e9d, 0x3b
	.globl gUnknown_8244ED8
gUnknown_8244ED8: @ 0x08244ED8
	.incbin "baserom.gba", 0x244ed8, 0x2a

	@ field-script:0x244D96 FieldScriptText_244F02
	.globl gText_Rom_244F02
gText_Rom_244F02: @ 0x08244F02
	.string "ふかふかの　つちだ！$"
	.if (. - gText_Rom_244F02) > 0xb
	.error "gText_Rom_244F02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F02) < 0xb
	.space 0xb - (. - gText_Rom_244F02)
	.endif

	@ field-script:0x244DA0 FieldScriptText_244F0D
	.globl gText_Rom_244F0D
gText_Rom_244F0D: @ 0x08244F0D
	.string "ふかふかの　つちだ！\nきのみを　うめますか？$"
	.if (. - gText_Rom_244F0D) > 0x17
	.error "gText_Rom_244F0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F0D) < 0x17
	.space 0x17 - (. - gText_Rom_244F0D)
	.endif

	@ field-script:0x244EFB FieldScriptText_244F24
	.globl gText_Rom_244F24
gText_Rom_244F24: @ 0x08244F24
	.string "{0xFD}{0x01}は　ふかふかの　つちに\n{0xFD}{0x02}のみを　うめた！$"
	.if (. - gText_Rom_244F24) > 0x19
	.error "gText_Rom_244F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F24) < 0x19
	.space 0x19 - (. - gText_Rom_244F24)
	.endif

	@ field-script:0x244DDD FieldScriptText_244F3D
	.globl gText_Rom_244F3D
gText_Rom_244F3D: @ 0x08244F3D
	.string "{0xFD}{0x02}のみを　うめた　ばしょだ！$"
	.if (. - gText_Rom_244F3D) > 0x10
	.error "gText_Rom_244F3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F3D) < 0x10
	.space 0x10 - (. - gText_Rom_244F3D)
	.endif

	@ field-script:0x244DEA FieldScriptText_244F4D
	.globl gText_Rom_244F4D
gText_Rom_244F4D: @ 0x08244F4D
	.string "{0xFD}{0x02}の　めが　でてきた！$"
	.if (. - gText_Rom_244F4D) > 0xd
	.error "gText_Rom_244F4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F4D) < 0xd
	.space 0xd - (. - gText_Rom_244F4D)
	.endif

	@ field-script:0x244DF7 FieldScriptText_244F5A
	.globl gText_Rom_244F5A
gText_Rom_244F5A: @ 0x08244F5A
	.string "{0xFD}{0x02}の　みきが　おおきく　なってきた！$"
	.if (. - gText_Rom_244F5A) > 0x14
	.error "gText_Rom_244F5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F5A) < 0x14
	.space 0x14 - (. - gText_Rom_244F5A)
	.endif

	@ field-script:0x244E09 FieldScriptText_244F6E
	.globl gText_Rom_244F6E
gText_Rom_244F6E: @ 0x08244F6E
	.string "{0xFD}{0x02}の　はなが　{0xFD}{0x03}　さいてる！$"
	.if (. - gText_Rom_244F6E) > 0x11
	.error "gText_Rom_244F6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F6E) < 0x11
	.space 0x11 - (. - gText_Rom_244F6E)
	.endif

	@ field-script:0x244E33 FieldScriptText_244F7F
	.globl gText_Rom_244F7F
gText_Rom_244F7F: @ 0x08244F7F
	.string "とてもうつくしく$"
	.if (. - gText_Rom_244F7F) > 0x9
	.error "gText_Rom_244F7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F7F) < 0x9
	.space 0x9 - (. - gText_Rom_244F7F)
	.endif

	@ field-script:0x244E3A FieldScriptText_244F88
	.globl gText_Rom_244F88
gText_Rom_244F88: @ 0x08244F88
	.string "かわいく$"
	.if (. - gText_Rom_244F88) > 0x5
	.error "gText_Rom_244F88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F88) < 0x5
	.space 0x5 - (. - gText_Rom_244F88)
	.endif

	@ field-script:0x244E2C FieldScriptText_244F8D
	.globl gText_Rom_244F8D
gText_Rom_244F8D: @ 0x08244F8D
	.string "きれいに$"
	.if (. - gText_Rom_244F8D) > 0x5
	.error "gText_Rom_244F8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F8D) < 0x5
	.space 0x5 - (. - gText_Rom_244F8D)
	.endif

	@ field-script:0x244E47 FieldScriptText_244F92
	.globl gText_Rom_244F92
gText_Rom_244F92: @ 0x08244F92
	.string "{0xFD}{0x02}のみが　{0xFD}{0x03}こ　できてる！\p{0xFD}{0x02}のみを　とりますか？$"
	.if (. - gText_Rom_244F92) > 0x1d
	.error "gText_Rom_244F92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F92) < 0x1d
	.space 0x1d - (. - gText_Rom_244F92)
	.endif

	@ field-script:0x244E78 FieldScriptText_244FAF
	.globl gText_Rom_244FAF
gText_Rom_244FAF: @ 0x08244FAF
	.string "{0xFD}{0x01}は　{0xFD}{0x02}のみを　{0xFD}{0x03}こ　とった！$"
	.if (. - gText_Rom_244FAF) > 0x13
	.error "gText_Rom_244FAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244FAF) < 0x13
	.space 0x13 - (. - gText_Rom_244FAF)
	.endif

	@ field-script:0x244E83 FieldScriptText_244FC2
	.globl gText_Rom_244FC2
gText_Rom_244FC2: @ 0x08244FC2
	.string "{0xFD}{0x01}は　{0xFD}{0x02}のみを\nきのみポケットに　しまった！\pつちは　もとの　ふかふかに　もどった！$"
	.if (. - gText_Rom_244FC2) > 0x2d
	.error "gText_Rom_244FC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244FC2) < 0x2d
	.space 0x2d - (. - gText_Rom_244FC2)
	.endif

	@ field-script:0x244E8C FieldScriptText_244FEF
	.globl gText_Rom_244FEF
gText_Rom_244FEF: @ 0x08244FEF
	.string "バッグの　きのみポケットが　いっぱいだった\p{0xFD}{0x02}のみを　あきらめた$"
	.if (. - gText_Rom_244FEF) > 0x22
	.error "gText_Rom_244FEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244FEF) < 0x22
	.space 0x22 - (. - gText_Rom_244FEF)
	.endif

	@ field-script:0x244E95 FieldScriptText_245011
	.globl gText_Rom_245011
gText_Rom_245011: @ 0x08245011
	.string "{0xFD}{0x01}は　{0xFD}{0x02}のみを\nそのままに　しておいた$"
	.if (. - gText_Rom_245011) > 0x16
	.error "gText_Rom_245011 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245011) < 0x16
	.space 0x16 - (. - gText_Rom_245011)
	.endif

	@ field-script:0x244EBA FieldScriptText_245027
	.globl gText_Rom_245027
gText_Rom_245027: @ 0x08245027
	.string "もっている　ホエルコじょうろ　で\n{0xFD}{0x02}に　みずを　あげますか？$"
	.if (. - gText_Rom_245027) > 0x20
	.error "gText_Rom_245027 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245027) < 0x20
	.space 0x20 - (. - gText_Rom_245027)
	.endif

	@ field-script:0x244EDD FieldScriptText_245047
	.globl gText_Rom_245047
gText_Rom_245047: @ 0x08245047
	.string "{0xFD}{0x01}は　{0xFD}{0x02}に　みずを　あげた！$"
	.if (. - gText_Rom_245047) > 0x11
	.error "gText_Rom_245047 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245047) < 0x11
	.space 0x11 - (. - gText_Rom_245047)
	.endif

	@ field-script:0x244EEA FieldScriptText_245058
	.globl gText_Rom_245058
gText_Rom_245058: @ 0x08245058
	.string "とっても　よろこんでる　みたい！$"
	.if (. - gText_Rom_245058) > 0x11
	.error "gText_Rom_245058 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245058) < 0x11
	.space 0x11 - (. - gText_Rom_245058)
	.endif

	@ field-script:0x244D7B FieldScriptText_245069
	.globl gText_Rom_245069
gText_Rom_245069: @ 0x08245069
	.string "！$"
	.if (. - gText_Rom_245069) > 0x2
	.error "gText_Rom_245069 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245069) < 0x2
	.space 0x2 - (. - gText_Rom_245069)
	.endif

	@ field-script:0x245B9B FieldScriptText_24506B
	.globl gText_Rom_24506B
gText_Rom_24506B: @ 0x0824506B
	.string "ツルを　おとせば　うえに　のぼれそう$"
	.if (. - gText_Rom_24506B) > 0x13
	.error "gText_Rom_24506B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24506B) < 0x13
	.space 0x13 - (. - gText_Rom_24506B)
	.endif

	@ field-script:0x245B6A FieldScriptText_24507E
	.globl gText_Rom_24507E
gText_Rom_24507E: @ 0x0824507E
	.string "ツルを　おとせば　うえに　のぼれそう\pひみつのちからを　つかいますか？$"
	.if (. - gText_Rom_24507E) > 0x24
	.error "gText_Rom_24507E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24507E) < 0x24
	.space 0x24 - (. - gText_Rom_24507E)
	.endif

	@ field-script:0x245BA5 FieldScriptText_2450A2
	.globl gText_Rom_2450A2
gText_Rom_2450A2: @ 0x082450A2
	.string "ふといツルが　おちてきた！$"
	.if (. - gText_Rom_2450A2) > 0xe
	.error "gText_Rom_2450A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2450A2) < 0xe
	.space 0xe - (. - gText_Rom_2450A2)
	.endif

	@ field-script:0x245BF4 FieldScriptText_2450B0
	.globl gText_Rom_2450B0
gText_Rom_2450B0: @ 0x082450B0
	.string "くさのかたまりを　どければ\nなかへ　はいれそう$"
	.if (. - gText_Rom_2450B0) > 0x18
	.error "gText_Rom_2450B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2450B0) < 0x18
	.space 0x18 - (. - gText_Rom_2450B0)
	.endif

	@ field-script:0x245BC3 FieldScriptText_2450C8
	.globl gText_Rom_2450C8
gText_Rom_2450C8: @ 0x082450C8
	.string "くさのかたまりを　どければ\nなかへ　はいれそう\pひみつのちからを　つかいますか？$"
	.if (. - gText_Rom_2450C8) > 0x29
	.error "gText_Rom_2450C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2450C8) < 0x29
	.space 0x29 - (. - gText_Rom_2450C8)
	.endif

	@ field-script:0x245BFE FieldScriptText_2450F1
	.globl gText_Rom_2450F1
gText_Rom_2450F1: @ 0x082450F1
	.string "ちいさな　いりぐちを　はっけん！$"
	.if (. - gText_Rom_2450F1) > 0x11
	.error "gText_Rom_2450F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2450F1) < 0x11
	.space 0x11 - (. - gText_Rom_2450F1)
	.endif

	@ data/text/secret_base_trainers.inc:1 SecretBase_Text_Trainer0Intro
	.globl gText_Rom_245102
gText_Rom_245102: @ 0x08245102
	.string "きみは もう ひみつきちを つくったかい?\pぼくは あっち こっち まわって\nやっと この ばしょに きめたんだ!\pせっかく きたんだから\nポケモン しょうぶ しない?$"
	.if (. - gText_Rom_245102) > 0x55
	.error "gText_Rom_245102 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245102) < 0x55
	.space 0x55 - (. - gText_Rom_245102)
	.endif

	@ data/text/secret_base_trainers.inc:4 SecretBase_Text_Trainer0AcceptBattle
	.globl gText_Rom_245157
gText_Rom_245157: @ 0x08245157
	.string "それじゃ いくよ!$"
	.if (. - gText_Rom_245157) > 0xa
	.error "gText_Rom_245157 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245157) < 0xa
	.space 0xa - (. - gText_Rom_245157)
	.endif

	@ data/text/secret_base_trainers.inc:7 SecretBase_Text_Trainer0DeclineBattle
	.globl gText_Rom_245161
gText_Rom_245161: @ 0x08245161
	.string "えっ いまは むりなんだ…$"
	.if (. - gText_Rom_245161) > 0xe
	.error "gText_Rom_245161 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245161) < 0xe
	.space 0xe - (. - gText_Rom_245161)
	.endif
	.globl gUnknown_824516F
gUnknown_824516F: @ 0x0824516F

	@ data/text/secret_base_trainers.inc:10 SecretBase_Text_Trainer0Defeated
	.globl gText_Rom_24516F
gText_Rom_24516F: @ 0x0824516F
	.string "うわっ きみって つよいなー\nぼくが まけたこと ひみつに してね!$"
	.if (. - gText_Rom_24516F) > 0x23
	.error "gText_Rom_24516F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24516F) < 0x23
	.space 0x23 - (. - gText_Rom_24516F)
	.endif

	@ data/text/secret_base_trainers.inc:13 SecretBase_Text_Trainer0PostBattle
	.globl gText_Rom_245192
gText_Rom_245192: @ 0x08245192
	.string "ぼくの ひみつきち どうかなー\nまた あしたも あそびに きてね!$"
	.if (. - gText_Rom_245192) > 0x22
	.error "gText_Rom_245192 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245192) < 0x22
	.space 0x22 - (. - gText_Rom_245192)
	.endif

	@ data/text/secret_base_trainers.inc:16 SecretBase_Text_Trainer0PreChampion
	.globl gText_Rom_2451B4
gText_Rom_2451B4: @ 0x082451B4
	.string "きみは もう ひみつきちを つくったかい?\pぼくは あっち こっち まわって\nやっと この ばしょに きめたんだ!\pゆっくり して いってね!$"
	.if (. - gText_Rom_2451B4) > 0x48
	.error "gText_Rom_2451B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2451B4) < 0x48
	.space 0x48 - (. - gText_Rom_2451B4)
	.endif

	@ data/text/secret_base_trainers.inc:19 SecretBase_Text_Trainer5Intro
	.globl gText_Rom_2451FC
gText_Rom_2451FC: @ 0x082451FC
	.string "ひみつきちを つくれる ばしょは\nほかにも たくさん あるけど\lここが いちばん きにいったの!\pねっ! すてきでしょ!\pあっ もし よかったら\nポケモン しょうぶ しない?$"
	.if (. - gText_Rom_2451FC) > 0x58
	.error "gText_Rom_2451FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2451FC) < 0x58
	.space 0x58 - (. - gText_Rom_2451FC)
	.endif

	@ data/text/secret_base_trainers.inc:22 SecretBase_Text_Trainer5AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_245254
gText_Rom_245254: @ 0x08245254
	.string "それじゃ いくわよ!$"
	.if (. - gText_Rom_245254) != 0xb
	.error "gText_Rom_245254 must retain its original byte length"
	.endif
	.globl gText_Rom_24525B
	.set gText_Rom_24525B, gText_Rom_245254 + 0x7

	@ data/text/secret_base_trainers.inc:25 SecretBase_Text_Trainer5DeclineBattle
	.globl gText_Rom_24525F
gText_Rom_24525F: @ 0x0824525F
	.string "そう いまは むりなのね…$"
	.if (. - gText_Rom_24525F) > 0xe
	.error "gText_Rom_24525F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24525F) < 0xe
	.space 0xe - (. - gText_Rom_24525F)
	.endif
	.globl gUnknown_824526D
gUnknown_824526D: @ 0x0824526D

	@ data/text/secret_base_trainers.inc:28 SecretBase_Text_Trainer5Defeated
	.globl gText_Rom_24526D
gText_Rom_24526D: @ 0x0824526D
	.string "うーん わたしの まけね…\nわたしが まけたのは ないしょの ひみつね!$"
	.if (. - gText_Rom_24526D) > 0x25
	.error "gText_Rom_24526D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24526D) < 0x25
	.space 0x25 - (. - gText_Rom_24526D)
	.endif

	@ data/text/secret_base_trainers.inc:31 SecretBase_Text_Trainer5PostBattle
	.globl gText_Rom_245292
gText_Rom_245292: @ 0x08245292
	.string "このちかくに くることが あったら\nまた あそびに よってね!$"
	.if (. - gText_Rom_245292) > 0x20
	.error "gText_Rom_245292 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245292) < 0x20
	.space 0x20 - (. - gText_Rom_245292)
	.endif

	@ data/text/secret_base_trainers.inc:34 SecretBase_Text_Trainer5PreChampion
	.globl gText_Rom_2452B2
gText_Rom_2452B2: @ 0x082452B2
	.string "ひみつきちを つくれる ばしょは\nほかにも たくさん あるけど\lここが いちばん きにいったの!\pねっ! すてきでしょ!$"
	.if (. - gText_Rom_2452B2) > 0x3d
	.error "gText_Rom_2452B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2452B2) < 0x3d
	.space 0x3d - (. - gText_Rom_2452B2)
	.endif

	@ data/text/secret_base_trainers.inc:37 SecretBase_Text_Trainer1Intro
	.globl gText_Rom_2452EF
gText_Rom_2452EF: @ 0x082452EF
	.string "この ばしょは にんきが あるから\nいつも うまって いるんだー\pあっ もしかして\nきみも ここを つかいたい?\pうーん ぼくに かてたら\nこのばしょ あげても いいよ!$"
	.if (. - gText_Rom_2452EF) > 0x56
	.error "gText_Rom_2452EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2452EF) < 0x56
	.space 0x56 - (. - gText_Rom_2452EF)
	.endif

	@ data/text/secret_base_trainers.inc:40 SecretBase_Text_Trainer1AcceptBattle
	.globl gText_Rom_245345
gText_Rom_245345: @ 0x08245345
	.string "よしっ! ぼくの きちを まもるぞー!$"
	.if (. - gText_Rom_245345) > 0x14
	.error "gText_Rom_245345 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245345) < 0x14
	.space 0x14 - (. - gText_Rom_245345)
	.endif

	@ data/text/secret_base_trainers.inc:43 SecretBase_Text_Trainer1DeclineBattle
	.globl gText_Rom_245359
gText_Rom_245359: @ 0x08245359
	.string "えっ この ばしょに きょうみが ないの?\nそっかー$"
	.if (. - gText_Rom_245359) > 0x1b
	.error "gText_Rom_245359 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245359) < 0x1b
	.space 0x1b - (. - gText_Rom_245359)
	.endif
	.globl gUnknown_8245374
gUnknown_8245374: @ 0x08245374

	@ data/text/secret_base_trainers.inc:46 SecretBase_Text_Trainer1Defeated
	.globl gText_Rom_245374
gText_Rom_245374: @ 0x08245374
	.string "もう ダメだ!\nこうさーん!$"
	.if (. - gText_Rom_245374) > 0xf
	.error "gText_Rom_245374 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245374) < 0xf
	.space 0xf - (. - gText_Rom_245374)
	.endif

	@ data/text/secret_base_trainers.inc:49 SecretBase_Text_Trainer1PostBattle
	.globl gText_Rom_245383
gText_Rom_245383: @ 0x08245383
	.string "よしっ ぼくが いつか ひっこしたら\nこの ばしょは きみの ものさ!$"
	.if (. - gText_Rom_245383) > 0x24
	.error "gText_Rom_245383 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245383) < 0x24
	.space 0x24 - (. - gText_Rom_245383)
	.endif

	@ data/text/secret_base_trainers.inc:52 SecretBase_Text_Trainer1PreChampion
	.globl gText_Rom_2453A7
gText_Rom_2453A7: @ 0x082453A7
	.string "この ばしょは にんきが あるから\nいつも うまって いるんだよー\pぼくは ずっと まっていて\nやっと つかえる ように なったんだ!$"
	.if (. - gText_Rom_2453A7) > 0x44
	.error "gText_Rom_2453A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2453A7) < 0x44
	.space 0x44 - (. - gText_Rom_2453A7)
	.endif

	@ data/text/secret_base_trainers.inc:55 SecretBase_Text_Trainer6Intro
	.globl gText_Rom_2453EB
gText_Rom_2453EB: @ 0x082453EB
	.string "わたしの ポケモン けんきゅうじょへ\nようこそ!\pここで ポケモン しょうぶに ついて\nこっそり べんきょう してるのよ\pどう わたしの じつりょく みてみる?$"
	.if (. - gText_Rom_2453EB) > 0x51
	.error "gText_Rom_2453EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2453EB) < 0x51
	.space 0x51 - (. - gText_Rom_2453EB)
	.endif

	@ data/text/secret_base_trainers.inc:58 SecretBase_Text_Trainer6AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24543C
gText_Rom_24543C: @ 0x0824543C
	.string "ほんきで いくわよ!$"
	.if (. - gText_Rom_24543C) != 0xb
	.error "gText_Rom_24543C must retain its original byte length"
	.endif
	.globl gText_Rom_245443
	.set gText_Rom_245443, gText_Rom_24543C + 0x7

	@ data/text/secret_base_trainers.inc:61 SecretBase_Text_Trainer6DeclineBattle
	.globl gText_Rom_245447
gText_Rom_245447: @ 0x08245447
	.string "それじゃ また こんどね!$"
	.if (. - gText_Rom_245447) > 0xe
	.error "gText_Rom_245447 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245447) < 0xe
	.space 0xe - (. - gText_Rom_245447)
	.endif
	.globl gUnknown_8245455
gUnknown_8245455: @ 0x08245455

	@ data/text/secret_base_trainers.inc:64 SecretBase_Text_Trainer6Defeated
	.globl gText_Rom_245455
gText_Rom_245455: @ 0x08245455
	.string "うーん わたしも まだまだねー\nもっと  べんきょう しないと!$"
	.if (. - gText_Rom_245455) > 0x21
	.error "gText_Rom_245455 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245455) < 0x21
	.space 0x21 - (. - gText_Rom_245455)
	.endif

	@ data/text/secret_base_trainers.inc:67 SecretBase_Text_Trainer6PostBattle
	.globl gText_Rom_245476
gText_Rom_245476: @ 0x08245476
	.string "しょうぶ してくれて どうも ありがとう!\nまた あしたも きてねー$"
	.if (. - gText_Rom_245476) > 0x23
	.error "gText_Rom_245476 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245476) < 0x23
	.space 0x23 - (. - gText_Rom_245476)
	.endif

	@ data/text/secret_base_trainers.inc:70 SecretBase_Text_Trainer6PreChampion
	.globl gText_Rom_245499
gText_Rom_245499: @ 0x08245499
	.string "わたしの ポケモン けんきゅうじょへ\nようこそ!\pここで ポケモン しょうぶに ついて\nこっそり べんきょう してるのよ$"
	.if (. - gText_Rom_245499) > 0x3d
	.error "gText_Rom_245499 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245499) < 0x3d
	.space 0x3d - (. - gText_Rom_245499)
	.endif

	@ data/text/secret_base_trainers.inc:73 SecretBase_Text_Trainer2Intro
	.globl gText_Rom_2454D6
gText_Rom_2454D6: @ 0x082454D6
	.string "おおきな いえも いいけど\nぼくは こういう ばしょが すきなんだ\pだって いろいろな ひとが\nあそびに きてくれる からねー!\pどう ポケモン しょうぶでも するかい?$"
	.if (. - gText_Rom_2454D6) > 0x56
	.error "gText_Rom_2454D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2454D6) < 0x56
	.space 0x56 - (. - gText_Rom_2454D6)
	.endif

	@ data/text/secret_base_trainers.inc:76 SecretBase_Text_Trainer2AcceptBattle
	.globl gText_Rom_24552C
gText_Rom_24552C: @ 0x0824552C
	.string "そう こなくっちゃ!$"
	.if (. - gText_Rom_24552C) > 0xb
	.error "gText_Rom_24552C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24552C) < 0xb
	.space 0xb - (. - gText_Rom_24552C)
	.endif

	@ data/text/secret_base_trainers.inc:79 SecretBase_Text_Trainer2DeclineBattle
	.globl gText_Rom_245537
gText_Rom_245537: @ 0x08245537
	.string "よういが できたら\nいつでも こえを かけてね!$"
	.if (. - gText_Rom_245537) > 0x19
	.error "gText_Rom_245537 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245537) < 0x19
	.space 0x19 - (. - gText_Rom_245537)
	.endif
	.globl gUnknown_8245550
gUnknown_8245550: @ 0x08245550

	@ data/text/secret_base_trainers.inc:82 SecretBase_Text_Trainer2Defeated
	.globl gText_Rom_245550
gText_Rom_245550: @ 0x08245550
	.string "やられたー!\nだけど ポケモン しょうぶは たのしいー!$"
	.if (. - gText_Rom_245550) > 0x1d
	.error "gText_Rom_245550 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245550) < 0x1d
	.space 0x1d - (. - gText_Rom_245550)
	.endif

	@ data/text/secret_base_trainers.inc:85 SecretBase_Text_Trainer2PostBattle
	.globl gText_Rom_24556D
gText_Rom_24556D: @ 0x0824556D
	.string "さてと グッズでも かいに いこうかな\pぼくの ひみつきちを\nみんなに たのしんで ほしい からね!$"
	.if (. - gText_Rom_24556D) > 0x33
	.error "gText_Rom_24556D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24556D) < 0x33
	.space 0x33 - (. - gText_Rom_24556D)
	.endif

	@ data/text/secret_base_trainers.inc:88 SecretBase_Text_Trainer2PreChampion
	.globl gText_Rom_2455A0
gText_Rom_2455A0: @ 0x082455A0
	.string "おおきな いえも いいけど\nぼくは こういう ばしょが すきなんだ\pだって いろいろな ひとが\nあそびに きてくれる からねー!$"
	.if (. - gText_Rom_2455A0) > 0x41
	.error "gText_Rom_2455A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2455A0) < 0x41
	.space 0x41 - (. - gText_Rom_2455A0)
	.endif

	@ data/text/secret_base_trainers.inc:91 SecretBase_Text_Trainer7Intro
	.globl gText_Rom_2455E1
gText_Rom_2455E1: @ 0x082455E1
	.string "わたし グッズの おかいものが\nだいすき です!\pそれと おなじくらい ポケモンを そだてるの\nだいすき です!\pもし よかったら わたしの ポケモンちゃんと\nしょうぶして くれますか?$"
	.if (. - gText_Rom_2455E1) > 0x5e
	.error "gText_Rom_2455E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2455E1) < 0x5e
	.space 0x5e - (. - gText_Rom_2455E1)
	.endif

	@ data/text/secret_base_trainers.inc:94 SecretBase_Text_Trainer7AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24563F
gText_Rom_24563F: @ 0x0824563F
	.string "それでは おねがいします$"
	.if (. - gText_Rom_24563F) != 0xd
	.error "gText_Rom_24563F must retain its original byte length"
	.endif
	.globl gText_Rom_245648
	.set gText_Rom_245648, gText_Rom_24563F + 0x9

	@ data/text/secret_base_trainers.inc:97 SecretBase_Text_Trainer7DeclineBattle
	.globl gText_Rom_24564C
gText_Rom_24564C: @ 0x0824564C
	.string "そう それは ざんねん です…$"
	.if (. - gText_Rom_24564C) > 0x10
	.error "gText_Rom_24564C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24564C) < 0x10
	.space 0x10 - (. - gText_Rom_24564C)
	.endif
	.globl gUnknown_824565C
gUnknown_824565C: @ 0x0824565C

	@ data/text/secret_base_trainers.inc:100 SecretBase_Text_Trainer7Defeated
	.globl gText_Rom_24565C
gText_Rom_24565C: @ 0x0824565C
	.string "まいりました……$"
	.if (. - gText_Rom_24565C) > 0x9
	.error "gText_Rom_24565C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24565C) < 0x9
	.space 0x9 - (. - gText_Rom_24565C)
	.endif

	@ data/text/secret_base_trainers.inc:103 SecretBase_Text_Trainer7PostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_245665
gText_Rom_245665: @ 0x08245665
	.string "ああ たのしかった!\nつぎは おかいものを たのしもう かしら$"
	.if (. - gText_Rom_245665) != 0x20
	.error "gText_Rom_245665 must retain its original byte length"
	.endif
	.globl gText_Rom_245681
	.set gText_Rom_245681, gText_Rom_245665 + 0x1c

	@ data/text/secret_base_trainers.inc:106 SecretBase_Text_Trainer7PreChampion
	.globl gText_Rom_245685
gText_Rom_245685: @ 0x08245685
	.string "わたし グッズの おかいものが\nだいすき です\pそれと おなじくらい ポケモンを そだてるの\nだいすき です$"
	.if (. - gText_Rom_245685) > 0x37
	.error "gText_Rom_245685 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245685) < 0x37
	.space 0x37 - (. - gText_Rom_245685)
	.endif

	@ data/text/secret_base_trainers.inc:109 SecretBase_Text_Trainer3Intro
	.globl gText_Rom_2456BC
gText_Rom_2456BC: @ 0x082456BC
	.string "みつかり にくい ばしょに\nひみつきちを つくる ひとが いるけど\lこっそりと かくれて いたいのかなぁ……\pうん せっかく みつけて くれたんだから\nポケモン しょうぶ しようか?$"
	.if (. - gText_Rom_2456BC) > 0x5c
	.error "gText_Rom_2456BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2456BC) < 0x5c
	.space 0x5c - (. - gText_Rom_2456BC)
	.endif

	@ data/text/secret_base_trainers.inc:112 SecretBase_Text_Trainer3AcceptBattle
	.globl gText_Rom_245718
gText_Rom_245718: @ 0x08245718
	.string "かんたんには おわらせ ないよ!$"
	.if (. - gText_Rom_245718) > 0x11
	.error "gText_Rom_245718 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245718) < 0x11
	.space 0x11 - (. - gText_Rom_245718)
	.endif

	@ data/text/secret_base_trainers.inc:115 SecretBase_Text_Trainer3DeclineBattle
	.globl gText_Rom_245729
gText_Rom_245729: @ 0x08245729
	.string "もしかして さがすのに つかれちゃった?$"
	.if (. - gText_Rom_245729) > 0x15
	.error "gText_Rom_245729 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245729) < 0x15
	.space 0x15 - (. - gText_Rom_245729)
	.endif
	.globl gUnknown_824573E
gUnknown_824573E: @ 0x0824573E

	@ data/text/secret_base_trainers.inc:118 SecretBase_Text_Trainer3Defeated
	.globl gText_Rom_24573E
gText_Rom_24573E: @ 0x0824573E
	.string "おわっちゃった……$"
	.if (. - gText_Rom_24573E) > 0xa
	.error "gText_Rom_24573E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24573E) < 0xa
	.space 0xa - (. - gText_Rom_24573E)
	.endif

	@ data/text/secret_base_trainers.inc:121 SecretBase_Text_Trainer3PostBattle
	.globl gText_Rom_245748
gText_Rom_245748: @ 0x08245748
	.string "きみの ひみつきちは どこなんだい!\nこんど あそびに いこうかなー$"
	.if (. - gText_Rom_245748) > 0x23
	.error "gText_Rom_245748 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245748) < 0x23
	.space 0x23 - (. - gText_Rom_245748)
	.endif

	@ data/text/secret_base_trainers.inc:124 SecretBase_Text_Trainer3PreChampion
	.globl gText_Rom_24576B
gText_Rom_24576B: @ 0x0824576B
	.string "みつかり にくい ばしょに\nひみつきちを つくる ひとが いるけど\lこっそりと かくれて いたいのかなぁ$"
	.if (. - gText_Rom_24576B) > 0x35
	.error "gText_Rom_24576B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24576B) < 0x35
	.space 0x35 - (. - gText_Rom_24576B)
	.endif

	@ data/text/secret_base_trainers.inc:127 SecretBase_Text_Trainer8Intro
	.globl gText_Rom_2457A0
gText_Rom_2457A0: @ 0x082457A0
	.string "グッズを てにいれる ほうほうは\nいろいろ あるって はなしよ\pどっちが すてきな グッズを\nてにいれるか きょうそうね!\pついでに ポケモン しょうぶも しない?$"
	.if (. - gText_Rom_2457A0) > 0x53
	.error "gText_Rom_2457A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2457A0) < 0x53
	.space 0x53 - (. - gText_Rom_2457A0)
	.endif

	@ data/text/secret_base_trainers.inc:130 SecretBase_Text_Trainer8AcceptBattle
	.globl gText_Rom_2457F3
gText_Rom_2457F3: @ 0x082457F3
	.string "じぶんの ひみつきちで まけられないわ!$"
	.if (. - gText_Rom_2457F3) > 0x15
	.error "gText_Rom_2457F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2457F3) < 0x15
	.space 0x15 - (. - gText_Rom_2457F3)
	.endif

	@ data/text/secret_base_trainers.inc:133 SecretBase_Text_Trainer8DeclineBattle
	.globl gText_Rom_245808
gText_Rom_245808: @ 0x08245808
	.string "いつでも しょうぶ まってるわ!$"
	.if (. - gText_Rom_245808) > 0x11
	.error "gText_Rom_245808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245808) < 0x11
	.space 0x11 - (. - gText_Rom_245808)
	.endif
	.globl gUnknown_8245819
gUnknown_8245819: @ 0x08245819

	@ data/text/secret_base_trainers.inc:136 SecretBase_Text_Trainer8Defeated
	.globl gText_Rom_245819
gText_Rom_245819: @ 0x08245819
	.string "えっ もしかして わたしの まけ?$"
	.if (. - gText_Rom_245819) > 0x12
	.error "gText_Rom_245819 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245819) < 0x12
	.space 0x12 - (. - gText_Rom_245819)
	.endif

	@ data/text/secret_base_trainers.inc:139 SecretBase_Text_Trainer8PostBattle
	.globl gText_Rom_24582B
gText_Rom_24582B: @ 0x0824582B
	.string "グッズあつめ まけないわよ!\nまた あそびに きてね!$"
	.if (. - gText_Rom_24582B) > 0x1c
	.error "gText_Rom_24582B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24582B) < 0x1c
	.space 0x1c - (. - gText_Rom_24582B)
	.endif

	@ data/text/secret_base_trainers.inc:142 SecretBase_Text_Trainer8PreChampion
	.globl gText_Rom_245847
gText_Rom_245847: @ 0x08245847
	.string "グッズを てにいれる ほうほうは\nいろいろ あるって はなしよ\pどっちが すてきな グッズを\nてにいれるか きょうそうね!$"
	.if (. - gText_Rom_245847) > 0x3e
	.error "gText_Rom_245847 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245847) < 0x3e
	.space 0x3e - (. - gText_Rom_245847)
	.endif

	@ data/text/secret_base_trainers.inc:145 SecretBase_Text_Trainer4Intro
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_245885
gText_Rom_245885: @ 0x08245885
	.string "すきな ばしょを さがして\nすきな グッズを おく!\pすきな ポケモンを そだてて\nぼくも いっしょに つよくなる\pそんな ぼくと しょうぶ しよう!$"
	.if (. - gText_Rom_245885) != 0x4c
	.error "gText_Rom_245885 must retain its original byte length"
	.endif
	.globl gText_Rom_2458CC
	.set gText_Rom_2458CC, gText_Rom_245885 + 0x47

	@ data/text/secret_base_trainers.inc:148 SecretBase_Text_Trainer4AcceptBattle
	.globl gText_Rom_2458D1
gText_Rom_2458D1: @ 0x082458D1
	.string "きみの じつりょくを みせてくれ!$"
	.if (. - gText_Rom_2458D1) > 0x12
	.error "gText_Rom_2458D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2458D1) < 0x12
	.space 0x12 - (. - gText_Rom_2458D1)
	.endif

	@ data/text/secret_base_trainers.inc:151 SecretBase_Text_Trainer4DeclineBattle
	.globl gText_Rom_2458E3
gText_Rom_2458E3: @ 0x082458E3
	.string "まぁ そんな ときも あるよね!$"
	.if (. - gText_Rom_2458E3) > 0x11
	.error "gText_Rom_2458E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2458E3) < 0x11
	.space 0x11 - (. - gText_Rom_2458E3)
	.endif
	.globl gUnknown_82458F4
gUnknown_82458F4: @ 0x082458F4

	@ data/text/secret_base_trainers.inc:154 SecretBase_Text_Trainer4Defeated
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2458F4
gText_Rom_2458F4: @ 0x082458F4
	.string "きみの じつりょくは じゅうぶん わかった!$"
	.if (. - gText_Rom_2458F4) != 0x17
	.error "gText_Rom_2458F4 must retain its original byte length"
	.endif
	.globl gText_Rom_245906
	.set gText_Rom_245906, gText_Rom_2458F4 + 0x12

	@ data/text/secret_base_trainers.inc:157 SecretBase_Text_Trainer4PostBattle
	.globl gText_Rom_24590B
gText_Rom_24590B: @ 0x0824590B
	.string "きみも ぼくも もっと つよく なれる!\nおたがいに がんばろうね!$"
	.if (. - gText_Rom_24590B) > 0x23
	.error "gText_Rom_24590B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24590B) < 0x23
	.space 0x23 - (. - gText_Rom_24590B)
	.endif

	@ data/text/secret_base_trainers.inc:160 SecretBase_Text_Trainer4PreChampion
	.globl gText_Rom_24592E
gText_Rom_24592E: @ 0x0824592E
	.string "すきな ばしょを さがして\nすきな ものを おく!\pすきな ポケモンを そだてて\nぼくも いっしょに つよくなる\pまいにち たのしいねー$"
	.if (. - gText_Rom_24592E) > 0x45
	.error "gText_Rom_24592E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24592E) < 0x45
	.space 0x45 - (. - gText_Rom_24592E)
	.endif

	@ data/text/secret_base_trainers.inc:163 SecretBase_Text_Trainer9Intro
	.globl gText_Rom_245973
gText_Rom_245973: @ 0x08245973
	.string "グッズの しゅるいや おきかたを みれば\nそのひとが どんな センスの もちぬしか\lよーく わかるわね!\pわたしの センスは どうかしら?\nうふふっ なにも いえないって かんじね!\pしょうぶの センスも ためして みる?$"
	.if (. - gText_Rom_245973) > 0x70
	.error "gText_Rom_245973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245973) < 0x70
	.space 0x70 - (. - gText_Rom_245973)
	.endif

	@ data/text/secret_base_trainers.inc:166 SecretBase_Text_Trainer9AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2459E3
gText_Rom_2459E3: @ 0x082459E3
	.string "おもいっきり いくわよ!$"
	.if (. - gText_Rom_2459E3) != 0xd
	.error "gText_Rom_2459E3 must retain its original byte length"
	.endif
	.globl gText_Rom_2459EC
	.set gText_Rom_2459EC, gText_Rom_2459E3 + 0x9

	@ data/text/secret_base_trainers.inc:169 SecretBase_Text_Trainer9DeclineBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2459F0
gText_Rom_2459F0: @ 0x082459F0
	.string "いつでも わたしの センスを みせるわよ!$"
	.if (. - gText_Rom_2459F0) != 0x16
	.error "gText_Rom_2459F0 must retain its original byte length"
	.endif
	.globl gText_Rom_245A02
	.set gText_Rom_245A02, gText_Rom_2459F0 + 0x12
	.globl gUnknown_8245A06
gUnknown_8245A06: @ 0x08245A06

	@ data/text/secret_base_trainers.inc:172 SecretBase_Text_Trainer9Defeated
	.globl gText_Rom_245A06
gText_Rom_245A06: @ 0x08245A06
	.string "すごい さいのうね!\nそこしれぬ つよさを かんじたわ……$"
	.if (. - gText_Rom_245A06) > 0x1e
	.error "gText_Rom_245A06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245A06) < 0x1e
	.space 0x1e - (. - gText_Rom_245A06)
	.endif

	@ data/text/secret_base_trainers.inc:175 SecretBase_Text_Trainer9PostBattle
	.globl gText_Rom_245A24
gText_Rom_245A24: @ 0x08245A24
	.string "わたしの センス どうだった?\nもっと センスを みがくわよー$"
	.if (. - gText_Rom_245A24) > 0x20
	.error "gText_Rom_245A24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245A24) < 0x20
	.space 0x20 - (. - gText_Rom_245A24)
	.endif

	@ data/text/secret_base_trainers.inc:178 SecretBase_Text_Trainer9PreChampion
	.globl gText_Rom_245A44
gText_Rom_245A44: @ 0x08245A44
	.string "グッズの しゅるいや おきかたを みれば\nそのひとが どんな センスの もちぬしか\lよーく わかるわね!\pわたしの センスは どうかしら?\nうふふっ なにも いえないって かんじね!$"
	.if (. - gText_Rom_245A44) > 0x5c
	.error "gText_Rom_245A44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245A44) < 0x5c
	.space 0x5c - (. - gText_Rom_245A44)
	.endif
	.globl gUnknown_8245AA0
gUnknown_8245AA0: @ 0x08245AA0
	.incbin "baserom.gba", 0x245aa0, 0x95
	.globl gUnknown_8245B35
gUnknown_8245B35: @ 0x08245B35
	.incbin "baserom.gba", 0x245b35, 0x59
	.globl gUnknown_8245B8E
gUnknown_8245B8E: @ 0x08245B8E
	.incbin "baserom.gba", 0x245b8e, 0x59
	.globl gUnknown_8245BE7
gUnknown_8245BE7: @ 0x08245BE7
	.incbin "baserom.gba", 0x245be7, 0x7f
	.globl gUnknown_8245C66
gUnknown_8245C66: @ 0x08245C66
	.incbin "baserom.gba", 0x245c66, 0x155
	.globl gUnknown_8245DBB
gUnknown_8245DBB: @ 0x08245DBB
	.incbin "baserom.gba", 0x245dbb, 0x13
	.globl gUnknown_8245DCE
gUnknown_8245DCE: @ 0x08245DCE
	.incbin "baserom.gba", 0x245dce, 0xf
	.globl gUnknown_8245DDD
gUnknown_8245DDD: @ 0x08245DDD
	.incbin "baserom.gba", 0x245ddd, 0x59b

	@ field-script:0x246516 FieldScriptText_246378
	.globl gText_Rom_246378
gText_Rom_246378: @ 0x08246378
	.string "えっ　なにを　してるかって？\pポケモンの　わざを　つかって\nここに　ぼくだけの　へやを\lつくろうと　おもってね！\pそうだっ　この　わざマシンを　あげるから\nきみも　つくって　みるかい？$"
	.if (. - gText_Rom_246378) > 0x5d
	.error "gText_Rom_246378 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246378) < 0x5d
	.space 0x5d - (. - gText_Rom_246378)
	.endif

	@ field-script:0x24654A FieldScriptText_2463D5
	.globl gText_Rom_2463D5
gText_Rom_2463D5: @ 0x082463D5
	.string "ツルが　おちそうな　きにむかって\nひみつのちからを　つかってごらん！\lツルが　おちてきて　きのうえに　のぼれるよ！\pそれでね　うえには　ひろいへやが　あるから\nぼくは　そこに　すきなものを　おくんだ！\lじぶんだけの　ひみつのへや…\lそう　ひみつきちさ！\lきみも　つくると　いいよー\pそうそう　ひみつきちを　つくれる　ばしょは\nきのうえ　だけじゃ　ないよ！\pちいさな　くぼみがある　かべなんかにも\nひみつのちからを　つかって　みるといいよ！\pぼくも　ほかの　ばしょを　さがして　みるね\nそれじゃ！$"
	.if (. - gText_Rom_2463D5) > 0xf8
	.error "gText_Rom_2463D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2463D5) < 0xf8
	.space 0xf8 - (. - gText_Rom_2463D5)
	.endif

	@ field-script:0x246529 FieldScriptText_2464CD
	.globl gText_Rom_2464CD
gText_Rom_2464CD: @ 0x082464CD
	.string "そう　いらないんだ…\nほしくなったら　また　こえかけてね！$"
	.if (. - gText_Rom_2464CD) > 0x1e
	.error "gText_Rom_2464CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2464CD) < 0x1e
	.space 0x1e - (. - gText_Rom_2464CD)
	.endif

	@ field-script:0x246595 FieldScriptText_2464EB
	.globl gText_Rom_2464EB
gText_Rom_2464EB: @ 0x082464EB
	.string "あれ？\nそれいじょうは　もてない　みたいだよ\pまた　こんど　とりに　きてね！$"
	.if (. - gText_Rom_2464EB) > 0x27
	.error "gText_Rom_2464EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2464EB) < 0x27
	.space 0x27 - (. - gText_Rom_2464EB)
	.endif
	.incbin "baserom.gba", 0x246512, 0xa3
	.globl gUnknown_82465B5
gUnknown_82465B5: @ 0x082465B5
	.incbin "baserom.gba", 0x2465b5, 0x4
	.globl gUnknown_82465B9
gUnknown_82465B9: @ 0x082465B9
	.incbin "baserom.gba", 0x2465b9, 0x4

	@ field-script:0x21D459 FieldScriptText_2465BD
	.globl gText_Rom_2465BD
gText_Rom_2465BD: @ 0x082465BD
	.string "ひみつきちの　グッズは　すべて\nパソコンに　もどります\pそれでも　よろしいですか？$"
	.if (. - gText_Rom_2465BD) > 0x2a
	.error "gText_Rom_2465BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2465BD) < 0x2a
	.space 0x2a - (. - gText_Rom_2465BD)
	.endif

	@ field-script:0x21D4FD FieldScriptText_2465E7
	.globl gText_Rom_2465E7
gText_Rom_2465E7: @ 0x082465E7
	.string "{0xFD}{0x02}の　ひみつきちを\nとうろく　しますか？$"
	.if (. - gText_Rom_2465E7) > 0x16
	.error "gText_Rom_2465E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2465E7) < 0x16
	.space 0x16 - (. - gText_Rom_2465E7)
	.endif

	@ field-script:0x21D520 FieldScriptText_2465FD
	.globl gText_Rom_2465FD
gText_Rom_2465FD: @ 0x082465FD
	.string "すでに　とうろくされています\nとうろくを　かいじょ　しますか？$"
	.if (. - gText_Rom_2465FD) > 0x20
	.error "gText_Rom_2465FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2465FD) < 0x20
	.space 0x20 - (. - gText_Rom_2465FD)
	.endif

	@ field-script:0x21D543 FieldScriptText_24661D
	.globl gText_Rom_24661D
gText_Rom_24661D: @ 0x0824661D
	.string "とうろく　できる　かずは\n10かしょ　まで　です\pどれか　かいじょ　すれば\nとうろく　できます$"
	.if (. - gText_Rom_24661D) > 0x30
	.error "gText_Rom_24661D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24661D) < 0x30
	.space 0x30 - (. - gText_Rom_24661D)
	.endif

	@ field-script:0x21D510 FieldScriptText_24664D
	.globl gText_Rom_24664D
gText_Rom_24664D: @ 0x0824664D
	.string "とうろく　しました！$"
	.if (. - gText_Rom_24664D) > 0xb
	.error "gText_Rom_24664D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24664D) < 0xb
	.space 0xb - (. - gText_Rom_24664D)
	.endif

	@ field-script:0x21D533 FieldScriptText_246658
	.globl gText_Rom_246658
gText_Rom_246658: @ 0x08246658
	.string "とうろくを　かいじょ　しました！$"
	.if (. - gText_Rom_246658) > 0x11
	.error "gText_Rom_246658 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246658) < 0x11
	.space 0x11 - (. - gText_Rom_246658)
	.endif

	@ field-script:0x21D3AF FieldScriptText_246669
	.globl gText_Rom_246669
gText_Rom_246669: @ 0x08246669
	.string "{0xFD}{0x01}は\nパソコンの　スイッチを　いれた！$"
	.if (. - gText_Rom_246669) > 0x15
	.error "gText_Rom_246669 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246669) < 0x15
	.space 0x15 - (. - gText_Rom_246669)
	.endif

	@ src/pokemon_storage_system.c:8117 pokemon_storage_system_line_8117 (+1 aliases)
	.globl gText_Rom_24667E
gText_Rom_24667E: @ 0x0824667E
	.string "なにを しますか?$"
	.if (. - gText_Rom_24667E) > 0xa
	.error "gText_Rom_24667E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24667E) < 0xa
	.space 0xa - (. - gText_Rom_24667E)
	.endif

	@ field-script:0x21D551 FieldScriptText_246688
	.globl gText_Rom_246688
gText_Rom_246688: @ 0x08246688
	.string "とうろくした　ひみつきちは\nあいてが　ひっこしを　しないかぎり\lなくなる　ことは　ありません\pとうろく　リストから　さくじょすると\nほかの　ひみつきちに\lかわることが　あります\pとうろくは　10かしょ　まで　できます$"
	.if (. - gText_Rom_246688) > 0x6d
	.error "gText_Rom_246688 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246688) < 0x6d
	.space 0x6d - (. - gText_Rom_246688)
	.endif

	@ field-script:0x21D5AD FieldScriptText_2466F5
	.globl gText_Rom_2466F5
gText_Rom_2466F5: @ 0x082466F5
	.string "バトルタワーで　{0xFD}{0x02}にん　かちぬいた\nきねんの　{0xFD}{0x03}の　たて$"
	.if (. - gText_Rom_2466F5) > 0x1f
	.error "gText_Rom_2466F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2466F5) < 0x1f
	.space 0x1f - (. - gText_Rom_2466F5)
	.endif

	@ field-script:0x21D5B6 FieldScriptText_246714
	.globl gText_Rom_246714
gText_Rom_246714: @ 0x08246714
	.string "ほんもの　そっくりの　オモチャのテレビ\nしらない　ひとが　みたら　まちがうかも！？$"
	.if (. - gText_Rom_246714) > 0x2a
	.error "gText_Rom_246714 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246714) < 0x2a
	.space 0x2a - (. - gText_Rom_246714)
	.endif

	@ field-script:0x21D5BF FieldScriptText_24673E
	.globl gText_Rom_24673E
gText_Rom_24673E: @ 0x0824673E
	.string "タネボー　みたいな　オモチャのテレビ\nなんだか　ころがりだしそう！？$"
	.if (. - gText_Rom_24673E) > 0x23
	.error "gText_Rom_24673E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24673E) < 0x23
	.space 0x23 - (. - gText_Rom_24673E)
	.endif

	@ field-script:0x21D5C8 FieldScriptText_246761
	.globl gText_Rom_246761
gText_Rom_246761: @ 0x08246761
	.string "エネコ　みたいな　オモチャのテレビ\nなんだか　あるきだしそう！？$"
	.if (. - gText_Rom_246761) > 0x21
	.error "gText_Rom_246761 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246761) < 0x21
	.space 0x21 - (. - gText_Rom_246761)
	.endif

	@ field-script:0x245CB4 FieldScriptText_246782
	.globl gText_Rom_246782
gText_Rom_246782: @ 0x08246782
	.string "ひみつきちは　ひとつしか　つくれません！\p{0xFD}{0x02}　にある\nひみつきちを　ひっこし　しますか？$"
	.if (. - gText_Rom_246782) > 0x2e
	.error "gText_Rom_246782 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246782) < 0x2e
	.space 0x2e - (. - gText_Rom_246782)
	.endif

	@ field-script:0x245CE2 FieldScriptText_2467B0
	.globl gText_Rom_2467B0
gText_Rom_2467B0: @ 0x082467B0
	.string "ひっこし　かんりょう！\pひみつのちからを　つかいますか？$"
	.if (. - gText_Rom_2467B0) > 0x1d
	.error "gText_Rom_2467B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2467B0) < 0x1d
	.space 0x1d - (. - gText_Rom_2467B0)
	.endif
	.incbin "baserom.gba", 0x2467cd, 0x877
	.globl gUnknown_8247044
gUnknown_8247044: @ 0x08247044
	.incbin "baserom.gba", 0x247044, 0xf
	.globl gUnknown_8247053
gUnknown_8247053: @ 0x08247053
	.incbin "baserom.gba", 0x247053, 0xa
	.globl gUnknown_824705D
gUnknown_824705D: @ 0x0824705D
	.incbin "baserom.gba", 0x24705d, 0xa
	.globl gUnknown_8247067
gUnknown_8247067: @ 0x08247067
	.incbin "baserom.gba", 0x247067, 0x1b
	.globl gUnknown_8247082
gUnknown_8247082: @ 0x08247082
	.incbin "baserom.gba", 0x247082, 0x1b
	.globl gUnknown_824709D
gUnknown_824709D: @ 0x0824709D
	.incbin "baserom.gba", 0x24709d, 0x1b
	.globl gUnknown_82470B8
gUnknown_82470B8: @ 0x082470B8
	.incbin "baserom.gba", 0x2470b8, 0x1c
	.globl gUnknown_82470D4
gUnknown_82470D4: @ 0x082470D4
	.incbin "baserom.gba", 0x2470d4, 0xa
	.globl gUnknown_82470DE
gUnknown_82470DE: @ 0x082470DE
	.incbin "baserom.gba", 0x2470de, 0x1e
	.globl gUnknown_82470FC
gUnknown_82470FC: @ 0x082470FC
	.incbin "baserom.gba", 0x2470fc, 0x15
	.globl gUnknown_8247111
gUnknown_8247111: @ 0x08247111
	.incbin "baserom.gba", 0x247111, 0x15
	.globl gUnknown_8247126
gUnknown_8247126: @ 0x08247126
	.incbin "baserom.gba", 0x247126, 0x15
	.globl gUnknown_824713B
gUnknown_824713B: @ 0x0824713B
	.incbin "baserom.gba", 0x24713b, 0x22
	.globl gUnknown_824715D
gUnknown_824715D: @ 0x0824715D
	.incbin "baserom.gba", 0x24715d, 0xf
	.globl gUnknown_824716C
gUnknown_824716C: @ 0x0824716C
	.incbin "baserom.gba", 0x24716c, 0xf
	.globl gUnknown_824717B
gUnknown_824717B: @ 0x0824717B
	.incbin "baserom.gba", 0x24717b, 0x53
	.globl gUnknown_82471CE
gUnknown_82471CE: @ 0x082471CE
	.incbin "baserom.gba", 0x2471ce, 0x1a
	.globl gUnknown_82471E8
gUnknown_82471E8: @ 0x082471E8
	.incbin "baserom.gba", 0x2471e8, 0xa
	.globl gUnknown_82471F2
gUnknown_82471F2: @ 0x082471F2
	.incbin "baserom.gba", 0x2471f2, 0x677
	.globl gUnknown_8247869
gUnknown_8247869: @ 0x08247869
	.incbin "baserom.gba", 0x247869, 0x317

	@ data/text/cable_club.inc:1 CableClub_Text_WelcomeWhichCableClubService
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247B80
gText_Rom_247B80: @ 0x08247B80
	.string "つうしん ケーブル クラブに\nようこそ!\pどちらを ごりよう ですか?$"
	.if (. - gText_Rom_247B80) != 0x24
	.error "gText_Rom_247B80 must retain its original byte length"
	.endif
	.globl gText_Rom_247B95
	.set gText_Rom_247B95, gText_Rom_247B80 + 0x15

	@ data/text/cable_club.inc:4 CableClub_Text_WhichService
	.globl gText_Rom_247BA4
gText_Rom_247BA4: @ 0x08247BA4
	.string "どちらを ごりよう ですか?$"
	.if (. - gText_Rom_247BA4) > 0xf
	.error "gText_Rom_247BA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247BA4) < 0xf
	.space 0xf - (. - gText_Rom_247BA4)
	.endif

	@ data/text/cable_club.inc:7 CableClub_Text_TradeUsingLinkCable
	.globl gText_Rom_247BB3
gText_Rom_247BB3: @ 0x08247BB3
	.string "ケーブルで つないだ おともだちと\nポケモン こうかんが できます$"
	.if (. - gText_Rom_247BB3) > 0x22
	.error "gText_Rom_247BB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247BB3) < 0x22
	.space 0x22 - (. - gText_Rom_247BB3)
	.endif

	@ data/text/cable_club.inc:10 CableClub_Text_BattleUsingLinkCable
	.globl gText_Rom_247BD5
gText_Rom_247BD5: @ 0x08247BD5
	.string "ケーブルで つないだ おともだちと\nポケモン たいせんが できます$"
	.if (. - gText_Rom_247BD5) > 0x22
	.error "gText_Rom_247BD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247BD5) < 0x22
	.space 0x22 - (. - gText_Rom_247BD5)
	.endif

	@ data/text/cable_club.inc:13 CableClub_Text_RecordCornerUsingLinkCable
	.globl gText_Rom_247BF7
gText_Rom_247BF7: @ 0x08247BF7
	.string "ケーブルで つないだ おともだちと\nレコードコーナーが できます$"
	.if (. - gText_Rom_247BF7) > 0x21
	.error "gText_Rom_247BF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247BF7) < 0x21
	.space 0x21 - (. - gText_Rom_247BF7)
	.endif

	@ data/text/cable_club.inc:17 CableClub_Text_CloseThisMenu
	.globl gText_Rom_247C18
gText_Rom_247C18: @ 0x08247C18
	.string "おわります$"
	.if (. - gText_Rom_247C18) > 0x6
	.error "gText_Rom_247C18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C18) < 0x6
	.space 0x6 - (. - gText_Rom_247C18)
	.endif

	@ data/text/cable_club.inc:20 CableClub_Text_NeedTwoMonsForDoubleBattle
	.globl gText_Rom_247C1E
gText_Rom_247C1E: @ 0x08247C1E
	.string "ダブルバトルでは 2ひき いじょうの\nポケモンが ひつようです$"
	.if (. - gText_Rom_247C1E) > 0x20
	.error "gText_Rom_247C1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C1E) < 0x20
	.space 0x20 - (. - gText_Rom_247C1E)
	.endif

	@ data/text/cable_club.inc:23 CableClub_Text_NeedTwoMonsToTrade
	.globl gText_Rom_247C3E
gText_Rom_247C3E: @ 0x08247C3E
	.string "こうかんでは 2ひき いじょうの\nてもちが ひつようです$"
	.if (. - gText_Rom_247C3E) > 0x1d
	.error "gText_Rom_247C3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C3E) < 0x1d
	.space 0x1d - (. - gText_Rom_247C3E)
	.endif

