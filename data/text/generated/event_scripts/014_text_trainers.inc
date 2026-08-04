	@ data/text/trainers.inc:1334 Route114_Text_SteveRematchIntro (+1 aliases)
	.globl gText_Rom_25CCCD
gText_Rom_25CCCD: @ 0x0825CCCD
	.string "うふふふふふ……\nボクの ポケモンと しょうぶ しようよ$"
	.if (. - gText_Rom_25CCCD) > 0x1d
	.error "gText_Rom_25CCCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CCCD) < 0x1d
	.space 0x1d - (. - gText_Rom_25CCCD)
	.endif

	@ data/text/trainers.inc:1337 Route114_Text_SteveRematchDefeat (+1 aliases)
	.globl gText_Rom_25CCEA
gText_Rom_25CCEA: @ 0x0825CCEA
	.string "ああ ポケモン みることが できて\nしあわせ だ……$"
	.if (. - gText_Rom_25CCEA) > 0x1b
	.error "gText_Rom_25CCEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CCEA) < 0x1b
	.space 0x1b - (. - gText_Rom_25CCEA)
	.endif

	@ data/text/trainers.inc:1340 Route114_Text_StevePostRematch
	.globl gText_Rom_25CD05
gText_Rom_25CD05: @ 0x0825CD05
	.string "うふふふふふ……\pポケモンの たたかっている すがたに\nぞくぞく するんだ ボク$"
	.if (. - gText_Rom_25CD05) > 0x29
	.error "gText_Rom_25CD05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CD05) < 0x29
	.space 0x29 - (. - gText_Rom_25CD05)
	.endif

	@ data/text/trainers.inc:1343 Route114_Text_BernieIntro (+1 aliases)
	.globl gText_Rom_25CD2E
gText_Rom_25CD2E: @ 0x0825CD2E
	.string "キャンプファイヤー するとき\nはなびを するとき\lみずを ようい しておけよ!$"
	.if (. - gText_Rom_25CD2E) > 0x28
	.error "gText_Rom_25CD2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CD2E) < 0x28
	.space 0x28 - (. - gText_Rom_25CD2E)
	.endif

	@ data/text/trainers.inc:1346 Route114_Text_BernieDefeat (+1 aliases)
	.globl gText_Rom_25CD56
gText_Rom_25CD56: @ 0x0825CD56
	.string "しょうか かつどう\nありがとう! ってか$"
	.if (. - gText_Rom_25CD56) > 0x15
	.error "gText_Rom_25CD56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CD56) < 0x15
	.space 0x15 - (. - gText_Rom_25CD56)
	.endif

	@ data/text/trainers.inc:1349 Route114_Text_BerniePostBattle (+1 aliases)
	.globl gText_Rom_25CD6B
gText_Rom_25CD6B: @ 0x0825CD6B
	.string "ほんと ひのようじん だけは おこたるな!\nひを あまく みるんじゃないぜ!$"
	.if (. - gText_Rom_25CD6B) > 0x27
	.error "gText_Rom_25CD6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CD6B) < 0x27
	.space 0x27 - (. - gText_Rom_25CD6B)
	.endif

	@ data/text/trainers.inc:1352 Route114_Text_BernieRegister
	.globl gText_Rom_25CD92
gText_Rom_25CD92: @ 0x0825CD92
	.string "もえあがった きもちの まま\nポケナビに とうろく しあおう!$"
	.if (. - gText_Rom_25CD92) > 0x20
	.error "gText_Rom_25CD92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CD92) < 0x20
	.space 0x20 - (. - gText_Rom_25CD92)
	.endif

	@ data/text/trainers.inc:1355 Route114_Text_BernieRematchIntro (+1 aliases)
	.globl gText_Rom_25CDB2
gText_Rom_25CDB2: @ 0x0825CDB2
	.string "キャンプファイヤー するとき\nはなびを するとき\lみずを ようい するように なったか!?$"
	.if (. - gText_Rom_25CDB2) > 0x2e
	.error "gText_Rom_25CDB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CDB2) < 0x2e
	.space 0x2e - (. - gText_Rom_25CDB2)
	.endif

	@ data/text/trainers.inc:1358 Route114_Text_BernieRematchDefeat (+1 aliases)
	.globl gText_Rom_25CDE0
gText_Rom_25CDE0: @ 0x0825CDE0
	.string "もえあがる まえに\nけされた! ってか$"
	.if (. - gText_Rom_25CDE0) > 0x14
	.error "gText_Rom_25CDE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CDE0) < 0x14
	.space 0x14 - (. - gText_Rom_25CDE0)
	.endif

	@ data/text/trainers.inc:1349 Route114_Text_BerniePostBattle (+1 aliases)
	.globl gText_Rom_25CDF4
gText_Rom_25CDF4: @ 0x0825CDF4
	.string "ほんと ひのようじん だけは おこたるな!\nひを あまく みるんじゃないぜ!$"
	.if (. - gText_Rom_25CDF4) > 0x27
	.error "gText_Rom_25CDF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CDF4) < 0x27
	.space 0x27 - (. - gText_Rom_25CDF4)
	.endif

	@ data/text/trainers.inc:1364 Route114_Text_ClaudeIntro (+1 aliases)
	.globl gText_Rom_25CE1B
gText_Rom_25CE1B: @ 0x0825CE1B
	.string "つりで しょうぶ すると\nきみには かちめが ないだろう\lポケモンで かかってきなさい!$"
	.if (. - gText_Rom_25CE1B) > 0x2d
	.error "gText_Rom_25CE1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CE1B) < 0x2d
	.space 0x2d - (. - gText_Rom_25CE1B)
	.endif

	@ data/text/trainers.inc:1367 Route114_Text_ClaudeDefeat (+1 aliases)
	.globl gText_Rom_25CE48
gText_Rom_25CE48: @ 0x0825CE48
	.string "つりの しょうぶなら かってた……$"
	.if (. - gText_Rom_25CE48) > 0x12
	.error "gText_Rom_25CE48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CE48) < 0x12
	.space 0x12 - (. - gText_Rom_25CE48)
	.endif

	@ data/text/trainers.inc:1370 Route114_Text_ClaudePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25CE5A
gText_Rom_25CE5A: @ 0x0825CE5A
	.string "りゅうせいのたきで\nおおものでも つると しようかな\lあそこの たきには なにか いそうだからね$"
	.if (. - gText_Rom_25CE5A) != 0x31
	.error "gText_Rom_25CE5A must retain its original byte length"
	.endif
	.globl gText_Rom_25CE86
	.set gText_Rom_25CE86, gText_Rom_25CE5A + 0x2c

	@ data/text/trainers.inc:1373 Route114_Text_NolanIntro (+1 aliases)
	.globl gText_Rom_25CE8B
gText_Rom_25CE8B: @ 0x0825CE8B
	.string "つりも すき だが\nしょうぶも すき!\pしょうぶを いどまれたら\nつりの さいちゅうでも ことわらないよ!$"
	.if (. - gText_Rom_25CE8B) > 0x36
	.error "gText_Rom_25CE8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CE8B) < 0x36
	.space 0x36 - (. - gText_Rom_25CE8B)
	.endif

	@ data/text/trainers.inc:1376 Route114_Text_NolanDefeat (+1 aliases)
	.globl gText_Rom_25CEC1
gText_Rom_25CEC1: @ 0x0825CEC1
	.string "しょうぶは すき だが\nつよい わけじゃ ないんだ……$"
	.if (. - gText_Rom_25CEC1) > 0x1c
	.error "gText_Rom_25CEC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CEC1) < 0x1c
	.space 0x1c - (. - gText_Rom_25CEC1)
	.endif

	@ data/text/trainers.inc:1379 Route114_Text_NolanPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25CEDD
gText_Rom_25CEDD: @ 0x0825CEDD
	.string "こんどこそ!\pと おもっちゃうから\nつりも しょうぶも やめられない$"
	.if (. - gText_Rom_25CEDD) != 0x23
	.error "gText_Rom_25CEDD must retain its original byte length"
	.endif
	.globl gText_Rom_25CEFB
	.set gText_Rom_25CEFB, gText_Rom_25CEDD + 0x1e

	@ data/text/trainers.inc:1382 Route114_Text_TyraIntro (+1 aliases)
	.globl gText_Rom_25CF00
gText_Rom_25CF00: @ 0x0825CF00
	.string "カヨ『そうね\nなんとなく そんな きぶん だから\lあなたにも ポケモン おしえたげよっか$"
	.if (. - gText_Rom_25CF00) > 0x2d
	.error "gText_Rom_25CF00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CF00) < 0x2d
	.space 0x2d - (. - gText_Rom_25CF00)
	.endif

	@ data/text/trainers.inc:1385 Route114_Text_TyraDefeat (+1 aliases)
	.globl gText_Rom_25CF2D
gText_Rom_25CF2D: @ 0x0825CF2D
	.string "カヨ『すごい たたかいかた!$"
	.if (. - gText_Rom_25CF2D) > 0xf
	.error "gText_Rom_25CF2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CF2D) < 0xf
	.space 0xf - (. - gText_Rom_25CF2D)
	.endif

	@ data/text/trainers.inc:1388 Route114_Text_TyraPostBattle
	.globl gText_Rom_25CF3C
gText_Rom_25CF3C: @ 0x0825CF3C
	.string "カヨ『コウハイの イヨに あたしが\nポケモンを おしえて あげたの!$"
	.if (. - gText_Rom_25CF3C) > 0x23
	.error "gText_Rom_25CF3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CF3C) < 0x23
	.space 0x23 - (. - gText_Rom_25CF3C)
	.endif

	@ data/text/trainers.inc:1391 Route114_Text_TyraNotEnoughMons (+1 aliases)
	.globl gText_Rom_25CF5F
gText_Rom_25CF5F: @ 0x0825CF5F
	.string "カヨ『うふふ!\nあたしたちと しょうぶ するなら\lポケモン いっぴきじゃ ダメなのよ!$"
	.if (. - gText_Rom_25CF5F) > 0x2c
	.error "gText_Rom_25CF5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CF5F) < 0x2c
	.space 0x2c - (. - gText_Rom_25CF5F)
	.endif

	@ data/text/trainers.inc:1394 Route114_Text_IvyIntro (+1 aliases)
	.globl gText_Rom_25CF8B
gText_Rom_25CF8B: @ 0x0825CF8B
	.string "イヨ『あなた\nだれに ポケモン おそわったの?$"
	.if (. - gText_Rom_25CF8B) > 0x18
	.error "gText_Rom_25CF8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CF8B) < 0x18
	.space 0x18 - (. - gText_Rom_25CF8B)
	.endif

	@ data/text/trainers.inc:1397 Route114_Text_IvyDefeat (+1 aliases)
	.globl gText_Rom_25CFA3
gText_Rom_25CFA3: @ 0x0825CFA3
	.string "イヨ『すごい たたかいかた!$"
	.if (. - gText_Rom_25CFA3) > 0xf
	.error "gText_Rom_25CFA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CFA3) < 0xf
	.space 0xf - (. - gText_Rom_25CFA3)
	.endif

	@ data/text/trainers.inc:1400 Route114_Text_IvyPostBattle
	.globl gText_Rom_25CFB2
gText_Rom_25CFB2: @ 0x0825CFB2
	.string "イヨ『あたしが\nポケモン はじめた きっかけは\lセンパイが おしえてくれた からなの!$"
	.if (. - gText_Rom_25CFB2) > 0x2c
	.error "gText_Rom_25CFB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CFB2) < 0x2c
	.space 0x2c - (. - gText_Rom_25CFB2)
	.endif

	@ data/text/trainers.inc:1403 Route114_Text_IvyNotEnoughMons (+1 aliases)
	.globl gText_Rom_25CFDE
gText_Rom_25CFDE: @ 0x0825CFDE
	.string "イヨ『ポケモン いっぴき だけなの?\nなんだか さみしい かんじ しちゃうね$"
	.if (. - gText_Rom_25CFDE) > 0x27
	.error "gText_Rom_25CFDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CFDE) < 0x27
	.space 0x27 - (. - gText_Rom_25CFDE)
	.endif

	@ data/text/trainers.inc:1406 Route114_Text_KaiIntro (+1 aliases)
	.globl gText_Rom_25D005
gText_Rom_25D005: @ 0x0825D005
	.string "でっかいの つれたっ でっかいの!$"
	.if (. - gText_Rom_25D005) > 0x12
	.error "gText_Rom_25D005 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D005) < 0x12
	.space 0x12 - (. - gText_Rom_25D005)
	.endif

	@ data/text/trainers.inc:1409 Route114_Text_KaiDefeat (+1 aliases)
	.globl gText_Rom_25D017
gText_Rom_25D017: @ 0x0825D017
	.string "あれー\nおおきさで まけたんかな$"
	.if (. - gText_Rom_25D017) > 0x11
	.error "gText_Rom_25D017 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D017) < 0x11
	.space 0x11 - (. - gText_Rom_25D017)
	.endif

	@ data/text/trainers.inc:1412 Route114_Text_KaiPostBattle
	.globl gText_Rom_25D028
gText_Rom_25D028: @ 0x0825D028
	.string "よっしゃー!\nもっと おおきいの つるもんね!$"
	.if (. - gText_Rom_25D028) > 0x18
	.error "gText_Rom_25D028 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D028) < 0x18
	.space 0x18 - (. - gText_Rom_25D028)
	.endif

	@ data/text/trainers.inc:1415 Route114_Text_CharlotteIntro (+1 aliases)
	.globl gText_Rom_25D040
gText_Rom_25D040: @ 0x0825D040
	.string "あたし!\nかわいい だけじゃ ないんだから!$"
	.if (. - gText_Rom_25D040) > 0x17
	.error "gText_Rom_25D040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D040) < 0x17
	.space 0x17 - (. - gText_Rom_25D040)
	.endif

	@ data/text/trainers.inc:1418 Route114_Text_CharlotteDefeat (+1 aliases)
	.globl gText_Rom_25D057
gText_Rom_25D057: @ 0x0825D057
	.string "かわいく なーいっ!$"
	.if (. - gText_Rom_25D057) > 0xb
	.error "gText_Rom_25D057 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D057) < 0xb
	.space 0xb - (. - gText_Rom_25D057)
	.endif

	@ data/text/trainers.inc:1421 Route114_Text_CharlottePostBattle
	.globl gText_Rom_25D062
gText_Rom_25D062: @ 0x0825D062
	.string "かわいい だけの ポケモンなんて いや!\nかわいくて ひとクセ あるコが すき!$"
	.if (. - gText_Rom_25D062) > 0x29
	.error "gText_Rom_25D062 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D062) < 0x29
	.space 0x29 - (. - gText_Rom_25D062)
	.endif

	@ data/text/trainers.inc:1424 Route114_Text_AngelinaIntro (+1 aliases)
	.globl gText_Rom_25D08B
gText_Rom_25D08B: @ 0x0825D08B
	.string "あなたの ポケモンって\nどの くらい しんか させてる?$"
	.if (. - gText_Rom_25D08B) > 0x1d
	.error "gText_Rom_25D08B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D08B) < 0x1d
	.space 0x1d - (. - gText_Rom_25D08B)
	.endif

	@ data/text/trainers.inc:1427 Route114_Text_AngelinaDefeat (+1 aliases)
	.globl gText_Rom_25D0A8
gText_Rom_25D0A8: @ 0x0825D0A8
	.string "ふーん\nなるほどね$"
	.if (. - gText_Rom_25D0A8) > 0xa
	.error "gText_Rom_25D0A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D0A8) < 0xa
	.space 0xa - (. - gText_Rom_25D0A8)
	.endif

	@ data/text/trainers.inc:1430 Route114_Text_AngelinaPostBattle
	.globl gText_Rom_25D0B2
gText_Rom_25D0B2: @ 0x0825D0B2
	.string "しんか させると\nみためが ものすごく かわって\lビックリする ポケモンが いるよね!$"
	.if (. - gText_Rom_25D0B2) > 0x2c
	.error "gText_Rom_25D0B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D0B2) < 0x2c
	.space 0x2c - (. - gText_Rom_25D0B2)
	.endif

	@ data/text/trainers.inc:1433 Route115_Text_TimothyIntro (+1 aliases)
	.globl gText_Rom_25D0DE
gText_Rom_25D0DE: @ 0x0825D0DE
	.string "ふむ……\nなかなか できそうだな……\lわたしが あいてを してあげよう!$"
	.if (. - gText_Rom_25D0DE) > 0x25
	.error "gText_Rom_25D0DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D0DE) < 0x25
	.space 0x25 - (. - gText_Rom_25D0DE)
	.endif

	@ data/text/trainers.inc:1436 Route115_Text_TimothyDefeat (+1 aliases)
	.globl gText_Rom_25D103
gText_Rom_25D103: @ 0x0825D103
	.string "そうぞう いじょうの つよさだ……!$"
	.if (. - gText_Rom_25D103) > 0x13
	.error "gText_Rom_25D103 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D103) < 0x13
	.space 0x13 - (. - gText_Rom_25D103)
	.endif

	@ data/text/trainers.inc:1439 Route115_Text_TimothyPostBattle
	.globl gText_Rom_25D116
gText_Rom_25D116: @ 0x0825D116
	.string "てんさい など いない\nすべては どりょく!\lわたしは そう しんじている……$"
	.if (. - gText_Rom_25D116) > 0x28
	.error "gText_Rom_25D116 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D116) < 0x28
	.space 0x28 - (. - gText_Rom_25D116)
	.endif

	@ data/text/trainers.inc:1442 Route115_Text_TimothyRegister
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D13E
gText_Rom_25D13E: @ 0x0825D13E
	.string "ふむ……\nこんな まけかたも ひさかたぶりだ\lできれば また あいてを してほしい$"
	.if (. - gText_Rom_25D13E) != 0x2a
	.error "gText_Rom_25D13E must retain its original byte length"
	.endif
	.globl gText_Rom_25D164
	.set gText_Rom_25D164, gText_Rom_25D13E + 0x26

	@ data/text/trainers.inc:1445 Route115_Text_TimothyRematchIntro (+1 aliases)
	.globl gText_Rom_25D168
gText_Rom_25D168: @ 0x0825D168
	.string "ふむ……\nあいかわらずの みのこなし\lわたしの あいてを してもらおう!$"
	.if (. - gText_Rom_25D168) > 0x25
	.error "gText_Rom_25D168 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D168) < 0x25
	.space 0x25 - (. - gText_Rom_25D168)
	.endif

	@ data/text/trainers.inc:1448 Route115_Text_TimothyRematchDefeat (+1 aliases)
	.globl gText_Rom_25D18D
gText_Rom_25D18D: @ 0x0825D18D
	.string "あいかわらずの つよさだ……!$"
	.if (. - gText_Rom_25D18D) > 0x10
	.error "gText_Rom_25D18D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D18D) < 0x10
	.space 0x10 - (. - gText_Rom_25D18D)
	.endif

	@ data/text/trainers.inc:1451 Route115_Text_TimothyPostRematch
	.globl gText_Rom_25D19D
gText_Rom_25D19D: @ 0x0825D19D
	.string "どりょく あるのみ!\pまけたのは まだまだ\nどりょくが たりないからだ!$"
	.if (. - gText_Rom_25D19D) > 0x25
	.error "gText_Rom_25D19D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D19D) < 0x25
	.space 0x25 - (. - gText_Rom_25D19D)
	.endif

	@ data/text/trainers.inc:1454 Route115_Text_KoichiIntro (+1 aliases)
	.globl gText_Rom_25D1C2
gText_Rom_25D1C2: @ 0x0825D1C2
	.string "おれのッ!\pワンリキーがッ!\pたたかいを のぞんでいるッ!$"
	.if (. - gText_Rom_25D1C2) > 0x1e
	.error "gText_Rom_25D1C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D1C2) < 0x1e
	.space 0x1e - (. - gText_Rom_25D1C2)
	.endif

	@ data/text/trainers.inc:1457 Route115_Text_KoichiDefeat (+1 aliases)
	.globl gText_Rom_25D1E0
gText_Rom_25D1E0: @ 0x0825D1E0
	.string "いててててっ!$"
	.if (. - gText_Rom_25D1E0) > 0x8
	.error "gText_Rom_25D1E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D1E0) < 0x8
	.space 0x8 - (. - gText_Rom_25D1E0)
	.endif

	@ data/text/trainers.inc:1460 Route115_Text_KoichiPostBattle
	.globl gText_Rom_25D1E8
gText_Rom_25D1E8: @ 0x0825D1E8
	.string "おれの ワンリキー たちがッ!\pつよさを のぞむかぎり\pおれたちは どこまでも つよくなるぜッ!$"
	.if (. - gText_Rom_25D1E8) > 0x31
	.error "gText_Rom_25D1E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D1E8) < 0x31
	.space 0x31 - (. - gText_Rom_25D1E8)
	.endif

	@ data/text/trainers.inc:1463 Route115_Text_NobIntro (+1 aliases)
	.globl gText_Rom_25D219
gText_Rom_25D219: @ 0x0825D219
	.string "オレの とくいわざは\nずつきで レンガを くだく ことだ!$"
	.if (. - gText_Rom_25D219) > 0x1e
	.error "gText_Rom_25D219 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D219) < 0x1e
	.space 0x1e - (. - gText_Rom_25D219)
	.endif

	@ data/text/trainers.inc:1466 Route115_Text_NobDefeat (+1 aliases)
	.globl gText_Rom_25D237
gText_Rom_25D237: @ 0x0825D237
	.string "うがーっ!\nあたまが くだけたーっ!$"
	.if (. - gText_Rom_25D237) > 0x13
	.error "gText_Rom_25D237 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D237) < 0x13
	.space 0x13 - (. - gText_Rom_25D237)
	.endif

	@ data/text/trainers.inc:1469 Route115_Text_NobPostBattle
	.globl gText_Rom_25D24A
gText_Rom_25D24A: @ 0x0825D24A
	.string "ポケモンに カラテを おしえてるんだが\nオレより つよく なりそうで\lちょっと たのしみ なんだ!$"
	.if (. - gText_Rom_25D24A) > 0x32
	.error "gText_Rom_25D24A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D24A) < 0x32
	.space 0x32 - (. - gText_Rom_25D24A)
	.endif

	@ data/text/trainers.inc:1472 Route115_Text_NobRegister
	.globl gText_Rom_25D27C
gText_Rom_25D27C: @ 0x0825D27C
	.string "きみは すげえな!\nきたえなおして もういちど しょうぶだ!$"
	.if (. - gText_Rom_25D27C) > 0x1f
	.error "gText_Rom_25D27C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D27C) < 0x1f
	.space 0x1f - (. - gText_Rom_25D27C)
	.endif

	@ data/text/trainers.inc:1475 Route115_Text_NobRematchIntro (+1 aliases)
	.globl gText_Rom_25D29B
gText_Rom_25D29B: @ 0x0825D29B
	.string "きみに まけてから がんばって\nポケモンと おのれを きたえなおしたぞ!\lさあ もういちど しょうぶ!$"
	.if (. - gText_Rom_25D29B) > 0x34
	.error "gText_Rom_25D29B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D29B) < 0x34
	.space 0x34 - (. - gText_Rom_25D29B)
	.endif

	@ data/text/trainers.inc:1478 Route115_Text_NobRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D2CF
gText_Rom_25D2CF: @ 0x0825D2CF
	.string "うがーっ!\nまた まけたーっ!$"
	.if (. - gText_Rom_25D2CF) != 0x10
	.error "gText_Rom_25D2CF must retain its original byte length"
	.endif
	.globl gText_Rom_25D2D8
	.set gText_Rom_25D2D8, gText_Rom_25D2CF + 0x9

	@ data/text/trainers.inc:1481 Route115_Text_NobPostRematch
	.globl gText_Rom_25D2DF
gText_Rom_25D2DF: @ 0x0825D2DF
	.string "おれの ポケモンは まだまだ つよくなる!\nがんばって きたえるぞ!$"
	.if (. - gText_Rom_25D2DF) > 0x23
	.error "gText_Rom_25D2DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D2DF) < 0x23
	.space 0x23 - (. - gText_Rom_25D2DF)
	.endif

	@ data/text/trainers.inc:1484 Route115_Text_CyndyIntro (+1 aliases)
	.globl gText_Rom_25D302
gText_Rom_25D302: @ 0x0825D302
	.string "この すなはまは わたしの\nヒミツの しゅぎょう ばしょ!\lかってに はいって こないでよ!$"
	.if (. - gText_Rom_25D302) > 0x2f
	.error "gText_Rom_25D302 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D302) < 0x2f
	.space 0x2f - (. - gText_Rom_25D302)
	.endif

	@ data/text/trainers.inc:1487 Route115_Text_CyndyDefeat (+1 aliases)
	.globl gText_Rom_25D331
gText_Rom_25D331: @ 0x0825D331
	.string "しゅぎょうが たりないわ……!$"
	.if (. - gText_Rom_25D331) > 0x10
	.error "gText_Rom_25D331 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D331) < 0x10
	.space 0x10 - (. - gText_Rom_25D331)
	.endif

	@ data/text/trainers.inc:1490 Route115_Text_CyndyPostBattle
	.globl gText_Rom_25D341
gText_Rom_25D341: @ 0x0825D341
	.string "すなが クッションに なるから\nからだを いためないの\lさいこうの しゅぎょう ばしょね!$"
	.if (. - gText_Rom_25D341) > 0x2e
	.error "gText_Rom_25D341 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D341) < 0x2e
	.space 0x2e - (. - gText_Rom_25D341)
	.endif

	@ data/text/trainers.inc:1493 Route115_Text_CyndyRegister
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D36F
gText_Rom_25D36F: @ 0x0825D36F
	.string "いいわ あなたが ここに はいるの\nみとめてあげる!\lそのかわり また あいてを たのむわよ!$"
	.if (. - gText_Rom_25D36F) != 0x30
	.error "gText_Rom_25D36F must retain its original byte length"
	.endif
	.globl gText_Rom_25D39B
	.set gText_Rom_25D39B, gText_Rom_25D36F + 0x2c

	@ data/text/trainers.inc:1496 Route115_Text_CyndyRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D39F
gText_Rom_25D39F: @ 0x0825D39F
	.string "さあ ポケモンしょうぶ いくわよ!$"
	.if (. - gText_Rom_25D39F) != 0x12
	.error "gText_Rom_25D39F must retain its original byte length"
	.endif
	.globl gText_Rom_25D3AD
	.set gText_Rom_25D3AD, gText_Rom_25D39F + 0xe

	@ data/text/trainers.inc:1499 Route115_Text_CyndyRematchDefeat (+1 aliases)
	.globl gText_Rom_25D3B1
gText_Rom_25D3B1: @ 0x0825D3B1
	.string "わたしは たたかえるけど\nポケモンが……$"
	.if (. - gText_Rom_25D3B1) > 0x15
	.error "gText_Rom_25D3B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D3B1) < 0x15
	.space 0x15 - (. - gText_Rom_25D3B1)
	.endif

	@ data/text/trainers.inc:1502 Route115_Text_CyndyPostRematch
	.globl gText_Rom_25D3C6
gText_Rom_25D3C6: @ 0x0825D3C6
	.string "まけても ちょっと たのしいのは\nほんとうに ポケモンが すき だからかな?$"
	.if (. - gText_Rom_25D3C6) > 0x27
	.error "gText_Rom_25D3C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D3C6) < 0x27
	.space 0x27 - (. - gText_Rom_25D3C6)
	.endif

	@ data/text/trainers.inc:1505 Route115_Text_HectorIntro (+1 aliases)
	.globl gText_Rom_25D3ED
gText_Rom_25D3ED: @ 0x0825D3ED
	.string "ぼく めずらしい ポケモン もってるんだ!\nよかったら みせて あげようか$"
	.if (. - gText_Rom_25D3ED) > 0x26
	.error "gText_Rom_25D3ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D3ED) < 0x26
	.space 0x26 - (. - gText_Rom_25D3ED)
	.endif

	@ data/text/trainers.inc:1508 Route115_Text_HectorDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D413
gText_Rom_25D413: @ 0x0825D413
	.string "きみ……\nぼくの ポケモン ほしいでしょ?$"
	.if (. - gText_Rom_25D413) != 0x16
	.error "gText_Rom_25D413 must retain its original byte length"
	.endif
	.globl gText_Rom_25D424
	.set gText_Rom_25D424, gText_Rom_25D413 + 0x11

	@ data/text/trainers.inc:1511 Route115_Text_HectorPostBattle
	.globl gText_Rom_25D429
gText_Rom_25D429: @ 0x0825D429
	.string "こんなに めずらしい ポケモン もってるんだ\nそれだけで ぼくは まんぞく なのさ!$"
	.if (. - gText_Rom_25D429) > 0x2b
	.error "gText_Rom_25D429 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D429) < 0x2b
	.space 0x2b - (. - gText_Rom_25D429)
	.endif

	@ data/text/trainers.inc:1514 Route115_Text_KyraIntro (+1 aliases)
	.globl gText_Rom_25D454
gText_Rom_25D454: @ 0x0825D454
	.string "はしりながら しょうぶを するわよッ!\nあなたも ついて きなさーい!$"
	.if (. - gText_Rom_25D454) > 0x24
	.error "gText_Rom_25D454 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D454) < 0x24
	.space 0x24 - (. - gText_Rom_25D454)
	.endif

	@ data/text/trainers.inc:1517 Route115_Text_KyraDefeat (+1 aliases)
	.globl gText_Rom_25D478
gText_Rom_25D478: @ 0x0825D478
	.string "はぁ はぁ……$"
	.if (. - gText_Rom_25D478) > 0x8
	.error "gText_Rom_25D478 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D478) < 0x8
	.space 0x8 - (. - gText_Rom_25D478)
	.endif

	@ data/text/trainers.inc:1520 Route115_Text_KyraPostBattle
	.globl gText_Rom_25D480
gText_Rom_25D480: @ 0x0825D480
	.string "はしりながら たたかおうと したのが\nまちがい だったわよ!\lひとっぱしり して アタマ ひやすかな$"
	.if (. - gText_Rom_25D480) > 0x33
	.error "gText_Rom_25D480 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D480) < 0x33
	.space 0x33 - (. - gText_Rom_25D480)
	.endif

	@ data/text/trainers.inc:1523 Route115_Text_JaidenIntro (+1 aliases)
	.globl gText_Rom_25D4B3
gText_Rom_25D4B3: @ 0x0825D4B3
	.string "くらえーっ\nにんぽう すごポケモンの じゅつ!$"
	.if (. - gText_Rom_25D4B3) > 0x18
	.error "gText_Rom_25D4B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D4B3) < 0x18
	.space 0x18 - (. - gText_Rom_25D4B3)
	.endif

	@ data/text/trainers.inc:1526 Route115_Text_JaidenDefeat (+1 aliases)
	.globl gText_Rom_25D4CB
gText_Rom_25D4CB: @ 0x0825D4CB
	.string "わーん しっぱいだ!$"
	.if (. - gText_Rom_25D4CB) > 0xb
	.error "gText_Rom_25D4CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D4CB) < 0xb
	.space 0xb - (. - gText_Rom_25D4CB)
	.endif

	@ data/text/trainers.inc:1529 Route115_Text_JaidenPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D4D6
gText_Rom_25D4D6: @ 0x0825D4D6
	.string "でも ぼくの ポケモン\nすごポケモン だった でしょ?$"
	.if (. - gText_Rom_25D4D6) != 0x1c
	.error "gText_Rom_25D4D6 must retain its original byte length"
	.endif
	.globl gText_Rom_25D4ED
	.set gText_Rom_25D4ED, gText_Rom_25D4D6 + 0x17

	@ data/text/trainers.inc:1532 Route115_Text_HeleneIntro (+1 aliases)
	.globl gText_Rom_25D4F2
gText_Rom_25D4F2: @ 0x0825D4F2
	.string "ふふっ あたしの ポケモンたちは\nくろおび クラスの つよさよ!$"
	.if (. - gText_Rom_25D4F2) > 0x21
	.error "gText_Rom_25D4F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D4F2) < 0x21
	.space 0x21 - (. - gText_Rom_25D4F2)
	.endif

	@ data/text/trainers.inc:1535 Route115_Text_HeleneDefeat (+1 aliases)
	.globl gText_Rom_25D513
gText_Rom_25D513: @ 0x0825D513
	.string "くやしすぎるわ!$"
	.if (. - gText_Rom_25D513) > 0x9
	.error "gText_Rom_25D513 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D513) < 0x9
	.space 0x9 - (. - gText_Rom_25D513)
	.endif

	@ data/text/trainers.inc:1538 Route115_Text_HelenePostBattle
	.globl gText_Rom_25D51C
gText_Rom_25D51C: @ 0x0825D51C
	.string "あたしより つよい ひとなんて\nめったに あわないのに……\pわかった!\nあなた ジムリーダー でしょ!$"
	.if (. - gText_Rom_25D51C) > 0x34
	.error "gText_Rom_25D51C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D51C) < 0x34
	.space 0x34 - (. - gText_Rom_25D51C)
	.endif

	@ data/text/trainers.inc:1541 Route115_Text_AlixIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D550
gText_Rom_25D550: @ 0x0825D550
	.string "めが あったからには にがさないわよ!$"
	.if (. - gText_Rom_25D550) != 0x14
	.error "gText_Rom_25D550 must retain its original byte length"
	.endif
	.globl gText_Rom_25D560
	.set gText_Rom_25D560, gText_Rom_25D550 + 0x10

	@ data/text/trainers.inc:1544 Route115_Text_AlixDefeat (+1 aliases)
	.globl gText_Rom_25D564
gText_Rom_25D564: @ 0x0825D564
	.string "くっ…… なかなか!$"
	.if (. - gText_Rom_25D564) > 0xb
	.error "gText_Rom_25D564 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D564) < 0xb
	.space 0xb - (. - gText_Rom_25D564)
	.endif

	@ data/text/trainers.inc:1547 Route115_Text_AlixPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D56F
gText_Rom_25D56F: @ 0x0825D56F
	.string "あーあ!\nテレポートで おうちに かえろうかしら$"
	.if (. - gText_Rom_25D56F) != 0x19
	.error "gText_Rom_25D56F must retain its original byte length"
	.endif
	.globl gText_Rom_25D584
	.set gText_Rom_25D584, gText_Rom_25D56F + 0x15

	@ data/text/trainers.inc:1550 Route115_Text_MarleneIntro (+1 aliases)
	.globl gText_Rom_25D588
gText_Rom_25D588: @ 0x0825D588
	.string "めいそうの じゃまを したわね……\nおしおき させて もらうわ!$"
	.if (. - gText_Rom_25D588) > 0x21
	.error "gText_Rom_25D588 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D588) < 0x21
	.space 0x21 - (. - gText_Rom_25D588)
	.endif

	@ data/text/trainers.inc:1553 Route115_Text_MarleneDefeat (+1 aliases)
	.globl gText_Rom_25D5A9
gText_Rom_25D5A9: @ 0x0825D5A9
	.string "こころが みだれて しまう!$"
	.if (. - gText_Rom_25D5A9) > 0xf
	.error "gText_Rom_25D5A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D5A9) < 0xf
	.space 0xf - (. - gText_Rom_25D5A9)
	.endif

	@ data/text/trainers.inc:1556 Route115_Text_MarlenePostBattle
	.globl gText_Rom_25D5B8
gText_Rom_25D5B8: @ 0x0825D5B8
	.string "ここで ポケモンたちと\nめいそうを していたの!\lでも あまり おちつかない ところね$"
	.if (. - gText_Rom_25D5B8) > 0x2c
	.error "gText_Rom_25D5B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D5B8) < 0x2c
	.space 0x2c - (. - gText_Rom_25D5B8)
	.endif

	@ data/text/trainers.inc:1559 Route116_Text_ClarkIntro (+1 aliases)
	.globl gText_Rom_25D5E4
gText_Rom_25D5E4: @ 0x0825D5E4
	.string "トンネルが つうじて いないなら\nやまを こえて いけば いいのだ!$"
	.if (. - gText_Rom_25D5E4) > 0x23
	.error "gText_Rom_25D5E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D5E4) < 0x23
	.space 0x23 - (. - gText_Rom_25D5E4)
	.endif

	@ data/text/trainers.inc:1562 Route116_Text_ClarkDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D607
gText_Rom_25D607: @ 0x0825D607
	.string "ぜえ…… ぜえ……\nまけて つかれて しまった$"
	.if (. - gText_Rom_25D607) != 0x18
	.error "gText_Rom_25D607 must retain its original byte length"
	.endif
	.globl gText_Rom_25D61A
	.set gText_Rom_25D61A, gText_Rom_25D607 + 0x13

	@ data/text/trainers.inc:1565 Route116_Text_ClarkPostBattle
	.globl gText_Rom_25D61F
gText_Rom_25D61F: @ 0x0825D61F
	.string "トンネルなど なくても かまわん\nやまおとこは やまが みち なのだ!$"
	.if (. - gText_Rom_25D61F) > 0x24
	.error "gText_Rom_25D61F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D61F) < 0x24
	.space 0x24 - (. - gText_Rom_25D61F)
	.endif

	@ data/text/trainers.inc:1568 Route116_Text_JoeyIntro (+1 aliases)
	.globl gText_Rom_25D643
gText_Rom_25D643: @ 0x0825D643
	.string "おれの ポケモン つえーぞ!\nちょっと みてみろよ!$"
	.if (. - gText_Rom_25D643) > 0x1b
	.error "gText_Rom_25D643 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D643) < 0x1b
	.space 0x1b - (. - gText_Rom_25D643)
	.endif

	@ data/text/trainers.inc:1571 Route116_Text_JoeyDefeat (+1 aliases)
	.globl gText_Rom_25D65E
gText_Rom_25D65E: @ 0x0825D65E
	.string "あいたたたたっ! キズが できた!\nバンソーコー はらなきゃ!$"
	.if (. - gText_Rom_25D65E) > 0x20
	.error "gText_Rom_25D65E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D65E) < 0x20
	.space 0x20 - (. - gText_Rom_25D65E)
	.endif

	@ data/text/trainers.inc:1574 Route116_Text_JoeyPostBattle
	.globl gText_Rom_25D67E
gText_Rom_25D67E: @ 0x0825D67E
	.string "バンソーコーは おとこの くんしょう!\nまた ひとつ ふえたぜ!$"
	.if (. - gText_Rom_25D67E) > 0x21
	.error "gText_Rom_25D67E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D67E) < 0x21
	.space 0x21 - (. - gText_Rom_25D67E)
	.endif

	@ data/text/trainers.inc:1577 Route116_Text_JoseIntro (+1 aliases)
	.globl gText_Rom_25D69F
gText_Rom_25D69F: @ 0x0825D69F
	.string "ぼくの むしポケモンは つよいよ!\nしょうぶ しようよ!$"
	.if (. - gText_Rom_25D69F) > 0x1d
	.error "gText_Rom_25D69F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D69F) < 0x1d
	.space 0x1d - (. - gText_Rom_25D69F)
	.endif

	@ data/text/trainers.inc:1580 Route116_Text_JoseDefeat (+1 aliases)
	.globl gText_Rom_25D6BC
gText_Rom_25D6BC: @ 0x0825D6BC
	.string "まけた……!\nかてると おもったのに……!$"
	.if (. - gText_Rom_25D6BC) > 0x16
	.error "gText_Rom_25D6BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D6BC) < 0x16
	.space 0x16 - (. - gText_Rom_25D6BC)
	.endif

	@ data/text/trainers.inc:1583 Route116_Text_JosePostBattle
	.globl gText_Rom_25D6D2
gText_Rom_25D6D2: @ 0x0825D6D2
	.string "むしポケモンは しんかが はやいから\nつよく なるのも はやい!$"
	.if (. - gText_Rom_25D6D2) > 0x21
	.error "gText_Rom_25D6D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D6D2) < 0x21
	.space 0x21 - (. - gText_Rom_25D6D2)
	.endif

	@ data/text/trainers.inc:1586 Route116_Text_JaniceIntro (+1 aliases)
	.globl gText_Rom_25D6F3
gText_Rom_25D6F3: @ 0x0825D6F3
	.string "わたしの かわいい ポケモンの つよさ\nじっくりと おしえて あげるわ!$"
	.if (. - gText_Rom_25D6F3) > 0x25
	.error "gText_Rom_25D6F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D6F3) < 0x25
	.space 0x25 - (. - gText_Rom_25D6F3)
	.endif

	@ data/text/trainers.inc:1589 Route116_Text_JaniceDefeat (+1 aliases)
	.globl gText_Rom_25D718
gText_Rom_25D718: @ 0x0825D718
	.string "キミの ほうが いちまい うわてね……$"
	.if (. - gText_Rom_25D718) > 0x14
	.error "gText_Rom_25D718 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D718) < 0x14
	.space 0x14 - (. - gText_Rom_25D718)
	.endif

	@ data/text/trainers.inc:1592 Route116_Text_JanicePostBattle
	.globl gText_Rom_25D72C
gText_Rom_25D72C: @ 0x0825D72C
	.string "かわいさと つよさを かねそなえた ポケモン\nそれが わたしの りそうなの!$"
	.if (. - gText_Rom_25D72C) > 0x27
	.error "gText_Rom_25D72C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D72C) < 0x27
	.space 0x27 - (. - gText_Rom_25D72C)
	.endif

	@ data/text/trainers.inc:1595 Route116_Text_JerryIntro (+1 aliases)
	.globl gText_Rom_25D753
gText_Rom_25D753: @ 0x0825D753
	.string "トレーナーズ スクールで\nいろいろ べんきょう したからね\lじっせんで たしかめるよ!$"
	.if (. - gText_Rom_25D753) > 0x2c
	.error "gText_Rom_25D753 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D753) < 0x2c
	.space 0x2c - (. - gText_Rom_25D753)
	.endif

	@ data/text/trainers.inc:1598 Route116_Text_JerryDefeat (+1 aliases)
	.globl gText_Rom_25D77F
gText_Rom_25D77F: @ 0x0825D77F
	.string "べんきょう さぼってたから\nまけちゃったよ$"
	.if (. - gText_Rom_25D77F) > 0x16
	.error "gText_Rom_25D77F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D77F) < 0x16
	.space 0x16 - (. - gText_Rom_25D77F)
	.endif

	@ data/text/trainers.inc:1601 Route116_Text_JerryPostBattle (+1 aliases)
	.globl gText_Rom_25D795
gText_Rom_25D795: @ 0x0825D795
	.string "トレーナーズ スクールで\nもういちど べんきょう しなおさなきゃ\lツツジさんに おこられちゃうよ$"
	.if (. - gText_Rom_25D795) > 0x31
	.error "gText_Rom_25D795 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D795) < 0x31
	.space 0x31 - (. - gText_Rom_25D795)
	.endif

	@ data/text/trainers.inc:1604 Route116_Text_JerryRegister1 (+1 aliases)
	.globl gText_Rom_25D7C6
gText_Rom_25D7C6: @ 0x0825D7C6
	.string "ポケナビには トレーナーが\nとうろく できるん だって\lトレーナーズ スクールで ならったんだ!\pよく わからないから やってみてよ!$"
	.if (. - gText_Rom_25D7C6) > 0x44
	.error "gText_Rom_25D7C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D7C6) < 0x44
	.space 0x44 - (. - gText_Rom_25D7C6)
	.endif

	@ data/text/trainers.inc:1604 Route116_Text_JerryRegister1 (+1 aliases)
	.globl gText_Rom_25D80A
gText_Rom_25D80A: @ 0x0825D80A
	.string "ポケナビには トレーナーが\nとうろく できるん だって\lトレーナーズ スクールで ならったんだ!\pよく わからないから やってみてよ!$"
	.if (. - gText_Rom_25D80A) > 0x44
	.error "gText_Rom_25D80A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D80A) < 0x44
	.space 0x44 - (. - gText_Rom_25D80A)
	.endif

	@ data/text/trainers.inc:1610 Route116_Text_JerryRematchIntro (+1 aliases)
	.globl gText_Rom_25D84E
gText_Rom_25D84E: @ 0x0825D84E
	.string "あれから トレーナーズ スクールで\nまじめに べんきょう したからね\lこのまえ みたいに まけたりしないよ!$"
	.if (. - gText_Rom_25D84E) > 0x37
	.error "gText_Rom_25D84E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D84E) < 0x37
	.space 0x37 - (. - gText_Rom_25D84E)
	.endif

	@ data/text/trainers.inc:1613 Route116_Text_JerryRematchDefeat (+1 aliases)
	.globl gText_Rom_25D885
gText_Rom_25D885: @ 0x0825D885
	.string "あれー?\nきちんと べんきょう したのに$"
	.if (. - gText_Rom_25D885) > 0x15
	.error "gText_Rom_25D885 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D885) < 0x15
	.space 0x15 - (. - gText_Rom_25D885)
	.endif

	@ data/text/trainers.inc:1601 Route116_Text_JerryPostBattle (+1 aliases)
	.globl gText_Rom_25D89A
gText_Rom_25D89A: @ 0x0825D89A
	.string "トレーナーズ スクールで\nもういちど べんきょう しなおさなきゃ\lツツジさんに おこられちゃうよ$"
	.if (. - gText_Rom_25D89A) > 0x31
	.error "gText_Rom_25D89A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D89A) < 0x31
	.space 0x31 - (. - gText_Rom_25D89A)
	.endif

	@ data/text/trainers.inc:1619 Route116_Text_KarenIntro (+1 aliases)
	.globl gText_Rom_25D8CB
gText_Rom_25D8CB: @ 0x0825D8CB
	.string "スクールでも べんきょう\nかえりみち でも べんきょうよ!$"
	.if (. - gText_Rom_25D8CB) > 0x1e
	.error "gText_Rom_25D8CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D8CB) < 0x1e
	.space 0x1e - (. - gText_Rom_25D8CB)
	.endif

	@ data/text/trainers.inc:1622 Route116_Text_KarenDefeat (+1 aliases)
	.globl gText_Rom_25D8E9
gText_Rom_25D8E9: @ 0x0825D8E9
	.string "ショック\nまけちゃったよ$"
	.if (. - gText_Rom_25D8E9) > 0xd
	.error "gText_Rom_25D8E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D8E9) < 0xd
	.space 0xd - (. - gText_Rom_25D8E9)
	.endif

	@ data/text/trainers.inc:1625 Route116_Text_KarenPostBattle
	.globl gText_Rom_25D8F6
gText_Rom_25D8F6: @ 0x0825D8F6
	.string "ああん! これじゃ ツツジさまのように\nエレガントな トレーナーに なれないわ!$"
	.if (. - gText_Rom_25D8F6) > 0x29
	.error "gText_Rom_25D8F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D8F6) < 0x29
	.space 0x29 - (. - gText_Rom_25D8F6)
	.endif

	@ data/text/trainers.inc:1628 Route116_Text_KarenRegister1 (+1 aliases)
	.globl gText_Rom_25D91F
gText_Rom_25D91F: @ 0x0825D91F
	.string "あーっ それ ポケナビね!\nあたしも もってるから とうろくして!$"
	.if (. - gText_Rom_25D91F) > 0x22
	.error "gText_Rom_25D91F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D91F) < 0x22
	.space 0x22 - (. - gText_Rom_25D91F)
	.endif

	@ data/text/trainers.inc:1628 Route116_Text_KarenRegister1 (+1 aliases)
	.globl gText_Rom_25D941
gText_Rom_25D941: @ 0x0825D941
	.string "あーっ それ ポケナビね!\nあたしも もってるから とうろくして!$"
	.if (. - gText_Rom_25D941) > 0x22
	.error "gText_Rom_25D941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D941) < 0x22
	.space 0x22 - (. - gText_Rom_25D941)
	.endif

	@ data/text/trainers.inc:1634 Route116_Text_KarenRematchIntro (+1 aliases)
	.globl gText_Rom_25D963
gText_Rom_25D963: @ 0x0825D963
	.string "あれから ものすっごく べんきょう したの!\nその せいか みてもらうからね!$"
	.if (. - gText_Rom_25D963) > 0x28
	.error "gText_Rom_25D963 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D963) < 0x28
	.space 0x28 - (. - gText_Rom_25D963)
	.endif

	@ data/text/trainers.inc:1637 Route116_Text_KarenRematchDefeat (+1 aliases)
	.globl gText_Rom_25D98B
gText_Rom_25D98B: @ 0x0825D98B
	.string "ショック\nまた まけちゃったよ$"
	.if (. - gText_Rom_25D98B) > 0x10
	.error "gText_Rom_25D98B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D98B) < 0x10
	.space 0x10 - (. - gText_Rom_25D98B)
	.endif

	@ data/text/trainers.inc:1640 Route116_Text_KarenPostRematch
	.globl gText_Rom_25D99B
gText_Rom_25D99B: @ 0x0825D99B
	.string "ツツジさまに かったことが あるの?\nそれじゃ いまの あたしには かてないわ$"
	.if (. - gText_Rom_25D99B) > 0x28
	.error "gText_Rom_25D99B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D99B) < 0x28
	.space 0x28 - (. - gText_Rom_25D99B)
	.endif

	@ data/text/trainers.inc:1643 Route116_Text_SarahIntro (+1 aliases)
	.globl gText_Rom_25D9C3
gText_Rom_25D9C3: @ 0x0825D9C3
	.string "わたくし いままで\nひとに なにかで まけた ことって\lありませんの!$"
	.if (. - gText_Rom_25D9C3) > 0x24
	.error "gText_Rom_25D9C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D9C3) < 0x24
	.space 0x24 - (. - gText_Rom_25D9C3)
	.endif

	@ data/text/trainers.inc:1646 Route116_Text_SarahDefeat (+1 aliases)
	.globl gText_Rom_25D9E7
gText_Rom_25D9E7: @ 0x0825D9E7
	.string "まあ\nこんなの はじめてですわ!$"
	.if (. - gText_Rom_25D9E7) > 0x11
	.error "gText_Rom_25D9E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D9E7) < 0x11
	.space 0x11 - (. - gText_Rom_25D9E7)
	.endif

	@ data/text/trainers.inc:1649 Route116_Text_SarahPostBattle
	.globl gText_Rom_25D9F8
gText_Rom_25D9F8: @ 0x0825D9F8
	.string "なにふじゆう ない くらし ですけど\nポケモンの ことだけは\lおもいどおりに なりません のね$"
	.if (. - gText_Rom_25D9F8) > 0x30
	.error "gText_Rom_25D9F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D9F8) < 0x30
	.space 0x30 - (. - gText_Rom_25D9F8)
	.endif

	@ data/text/trainers.inc:1652 Route116_Text_DawsonIntro (+1 aliases)
	.globl gText_Rom_25DA28
gText_Rom_25DA28: @ 0x0825DA28
	.string "ぼくの ポケモンの\nうつくしい けなみに みとれて\lキミは なにも できない!$"
	.if (. - gText_Rom_25DA28) > 0x28
	.error "gText_Rom_25DA28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DA28) < 0x28
	.space 0x28 - (. - gText_Rom_25DA28)
	.endif

	@ data/text/trainers.inc:1655 Route116_Text_DawsonDefeat (+1 aliases)
	.globl gText_Rom_25DA50
gText_Rom_25DA50: @ 0x0825DA50
	.string "そりゃないぜ ベイビー$"
	.if (. - gText_Rom_25DA50) > 0xc
	.error "gText_Rom_25DA50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DA50) < 0xc
	.space 0xc - (. - gText_Rom_25DA50)
	.endif

	@ data/text/trainers.inc:1658 Route116_Text_DawsonPostBattle
	.globl gText_Rom_25DA5C
gText_Rom_25DA5C: @ 0x0825DA5C
	.string "ああっ\nポケモンの けなみと\lぼくの ヘアーが みだれた!\lびよういん よやく しなきゃ$"
	.if (. - gText_Rom_25DA5C) > 0x2d
	.error "gText_Rom_25DA5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DA5C) < 0x2d
	.space 0x2d - (. - gText_Rom_25DA5C)
	.endif

	@ data/text/trainers.inc:1661 Route116_Text_DevanIntro (+1 aliases)
	.globl gText_Rom_25DA89
gText_Rom_25DA89: @ 0x0825DA89
	.string "ガツンと いってみようかあ!$"
	.if (. - gText_Rom_25DA89) > 0xf
	.error "gText_Rom_25DA89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DA89) < 0xf
	.space 0xf - (. - gText_Rom_25DA89)
	.endif

	@ data/text/trainers.inc:1664 Route116_Text_DevanDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25DA98
gText_Rom_25DA98: @ 0x0825DA98
	.string "あああ\nしょうぶに ならんな こりゃ$"
	.if (. - gText_Rom_25DA98) != 0x13
	.error "gText_Rom_25DA98 must retain its original byte length"
	.endif
	.globl gText_Rom_25DAA7
	.set gText_Rom_25DAA7, gText_Rom_25DA98 + 0xf

	@ data/text/trainers.inc:1667 Route116_Text_DevanPostBattle
	.globl gText_Rom_25DAAB
gText_Rom_25DAAB: @ 0x0825DAAB
	.string "たまには ほかの タイプの\nポケモンも つかって みるかなあ?$"
	.if (. - gText_Rom_25DAAB) > 0x20
	.error "gText_Rom_25DAAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DAAB) < 0x20
	.space 0x20 - (. - gText_Rom_25DAAB)
	.endif

	@ data/text/trainers.inc:1670 Route116_Text_JohnsonIntro (+1 aliases)
	.globl gText_Rom_25DACB
gText_Rom_25DACB: @ 0x0825DACB
	.string "この さきって いきどまりなんだ\nつまんない から しょうぶ してね$"
	.if (. - gText_Rom_25DACB) > 0x23
	.error "gText_Rom_25DACB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DACB) < 0x23
	.space 0x23 - (. - gText_Rom_25DACB)
	.endif

	@ data/text/trainers.inc:1673 Route116_Text_JohnsonDefeat (+1 aliases)
	.globl gText_Rom_25DAEE
gText_Rom_25DAEE: @ 0x0825DAEE
	.string "まけた けど おもしろかったよ!$"
	.if (. - gText_Rom_25DAEE) > 0x11
	.error "gText_Rom_25DAEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DAEE) < 0x11
	.space 0x11 - (. - gText_Rom_25DAEE)
	.endif

	@ data/text/trainers.inc:1676 Route116_Text_JohnsonPostBattle
	.globl gText_Rom_25DAFF
gText_Rom_25DAFF: @ 0x0825DAFF
	.string "まけちゃった から\nぼくの たんパン かしてあげても いーよ!$"
	.if (. - gText_Rom_25DAFF) > 0x20
	.error "gText_Rom_25DAFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DAFF) < 0x20
	.space 0x20 - (. - gText_Rom_25DAFF)
	.endif

	@ data/text/trainers.inc:1679 Route117_Text_IsaacIntro (+1 aliases)
	.globl gText_Rom_25DB1F
gText_Rom_25DB1F: @ 0x0825DB1F
	.string "オレが そだてている ポケモンと\nしょうぶ してくれないか?$"
	.if (. - gText_Rom_25DB1F) > 0x1f
	.error "gText_Rom_25DB1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DB1F) < 0x1f
	.space 0x1f - (. - gText_Rom_25DB1F)
	.endif

	@ data/text/trainers.inc:1682 Route117_Text_IsaacDefeat (+1 aliases)
	.globl gText_Rom_25DB3E
gText_Rom_25DB3E: @ 0x0825DB3E
	.string "みごとに そだててるね……$"
	.if (. - gText_Rom_25DB3E) > 0xe
	.error "gText_Rom_25DB3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DB3E) < 0xe
	.space 0xe - (. - gText_Rom_25DB3E)
	.endif

	@ data/text/trainers.inc:1685 Route117_Text_IsaacPostBattle
	.globl gText_Rom_25DB4C
gText_Rom_25DB4C: @ 0x0825DB4C
	.string "つよさ だけが ポケモンじゃないよ!\nポケモンの こせいを みがきあげるのも\lたのしみかたの ひとつ だね!$"
	.if (. - gText_Rom_25DB4C) > 0x37
	.error "gText_Rom_25DB4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DB4C) < 0x37
	.space 0x37 - (. - gText_Rom_25DB4C)
	.endif

	@ data/text/trainers.inc:1688 Route117_Text_IsaacRegister
	.globl gText_Rom_25DB83
gText_Rom_25DB83: @ 0x0825DB83
	.string "よーし ますます がんばって そだてるぞ!\nきみ そしたら みにきて くれるだろ?$"
	.if (. - gText_Rom_25DB83) > 0x2a
	.error "gText_Rom_25DB83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DB83) < 0x2a
	.space 0x2a - (. - gText_Rom_25DB83)
	.endif

	@ data/text/trainers.inc:1691 Route117_Text_IsaacRematchIntro (+1 aliases)
	.globl gText_Rom_25DBAD
gText_Rom_25DBAD: @ 0x0825DBAD
	.string "オレが そだてている ポケモン\nあいかわらず いい かんじ だよ!$"
	.if (. - gText_Rom_25DBAD) > 0x22
	.error "gText_Rom_25DBAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DBAD) < 0x22
	.space 0x22 - (. - gText_Rom_25DBAD)
	.endif

	@ data/text/trainers.inc:1694 Route117_Text_IsaacRematchDefeat (+1 aliases)
	.globl gText_Rom_25DBCF
gText_Rom_25DBCF: @ 0x0825DBCF
	.string "いい そだてかた してるね……\nきみには そだてやの さいのう あるかも$"
	.if (. - gText_Rom_25DBCF) > 0x25
	.error "gText_Rom_25DBCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DBCF) < 0x25
	.space 0x25 - (. - gText_Rom_25DBCF)
	.endif

	@ data/text/trainers.inc:1697 Route117_Text_IsaacPostRematch
	.globl gText_Rom_25DBF4
gText_Rom_25DBF4: @ 0x0825DBF4
	.string "いい ぐあいに そだってるね!\nミナモシティの ポケモンコンテストに\lでることを おすすめ するよ!$"
	.if (. - gText_Rom_25DBF4) > 0x33
	.error "gText_Rom_25DBF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DBF4) < 0x33
	.space 0x33 - (. - gText_Rom_25DBF4)
	.endif

	@ data/text/trainers.inc:1700 Route117_Text_LydiaIntro (+1 aliases)
	.globl gText_Rom_25DC27
gText_Rom_25DC27: @ 0x0825DC27
	.string "ポケモンを ちゃんと そだててるか\nわたしが たしかめて あげますね$"
	.if (. - gText_Rom_25DC27) > 0x23
	.error "gText_Rom_25DC27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DC27) < 0x23
	.space 0x23 - (. - gText_Rom_25DC27)
	.endif

	@ data/text/trainers.inc:1703 Route117_Text_LydiaDefeat (+1 aliases)
	.globl gText_Rom_25DC4A
gText_Rom_25DC4A: @ 0x0825DC4A
	.string "ちゃんと そだってますね$"
	.if (. - gText_Rom_25DC4A) > 0xd
	.error "gText_Rom_25DC4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DC4A) < 0xd
	.space 0xd - (. - gText_Rom_25DC4A)
	.endif

	@ data/text/trainers.inc:1706 Route117_Text_LydiaPostBattle
	.globl gText_Rom_25DC57
gText_Rom_25DC57: @ 0x0825DC57
	.string "ポケモンの こせいにも きをくばって\nそだてて みて くださいね$"
	.if (. - gText_Rom_25DC57) > 0x21
	.error "gText_Rom_25DC57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DC57) < 0x21
	.space 0x21 - (. - gText_Rom_25DC57)
	.endif

	@ data/text/trainers.inc:1709 Route117_Text_LydiaRegister
	.globl gText_Rom_25DC78
gText_Rom_25DC78: @ 0x0825DC78
	.string "よい トレーナーさんに あえて よかった!\nこれからも よろしく おねがいしますね$"
	.if (. - gText_Rom_25DC78) > 0x2a
	.error "gText_Rom_25DC78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DC78) < 0x2a
	.space 0x2a - (. - gText_Rom_25DC78)
	.endif

	@ data/text/trainers.inc:1712 Route117_Text_LydiaRematchIntro (+1 aliases)
	.globl gText_Rom_25DCA2
gText_Rom_25DCA2: @ 0x0825DCA2
	.string "ポケモンを ちゃんと そだててるか\nまた わたしが たしかめて あげますね$"
	.if (. - gText_Rom_25DCA2) > 0x26
	.error "gText_Rom_25DCA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DCA2) < 0x26
	.space 0x26 - (. - gText_Rom_25DCA2)
	.endif

	@ data/text/trainers.inc:1715 Route117_Text_LydiaRematchDefeat (+1 aliases)
	.globl gText_Rom_25DCC8
gText_Rom_25DCC8: @ 0x0825DCC8
	.string "みごとに そだってますね$"
	.if (. - gText_Rom_25DCC8) > 0xd
	.error "gText_Rom_25DCC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DCC8) < 0xd
	.space 0xd - (. - gText_Rom_25DCC8)
	.endif

	@ data/text/trainers.inc:1718 Route117_Text_LydiaPostRematch
	.globl gText_Rom_25DCD5
gText_Rom_25DCD5: @ 0x0825DCD5
	.string "ポケモンの せいかくに よって\nすきな ポロックが あるみたいなの$"
	.if (. - gText_Rom_25DCD5) > 0x22
	.error "gText_Rom_25DCD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DCD5) < 0x22
	.space 0x22 - (. - gText_Rom_25DCD5)
	.endif

	@ data/text/trainers.inc:1721 Route117_Text_DylanIntro (+1 aliases)
	.globl gText_Rom_25DCF7
gText_Rom_25DCF7: @ 0x0825DCF7
	.string "トライアスロンの まっさいちゅう だけど\nさくっと しょうぶ しようじゃ ないか!$"
	.if (. - gText_Rom_25DCF7) > 0x2a
	.error "gText_Rom_25DCF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DCF7) < 0x2a
	.space 0x2a - (. - gText_Rom_25DCF7)
	.endif

	@ data/text/trainers.inc:1724 Route117_Text_DylanDefeat (+1 aliases)
	.globl gText_Rom_25DD21
gText_Rom_25DD21: @ 0x0825DD21
	.string "たいりょく なくなった!$"
	.if (. - gText_Rom_25DD21) > 0xd
	.error "gText_Rom_25DD21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DD21) < 0xd
	.space 0xd - (. - gText_Rom_25DD21)
	.endif

	@ data/text/trainers.inc:1727 Route117_Text_DylanPostBattle
	.globl gText_Rom_25DD2E
gText_Rom_25DD2E: @ 0x0825DD2E
	.string "まいったな……\pいまの しょうぶの あいだに\nビリに なっちゃったかも……?$"
	.if (. - gText_Rom_25DD2E) > 0x27
	.error "gText_Rom_25DD2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DD2E) < 0x27
	.space 0x27 - (. - gText_Rom_25DD2E)
	.endif

	@ data/text/trainers.inc:1730 Route117_Text_DylanRegister
	.globl gText_Rom_25DD55
gText_Rom_25DD55: @ 0x0825DD55
	.string "ポケモンも つよく なくちゃ ダメか?\nきみさ たまに ぼくを きたえてよ!$"
	.if (. - gText_Rom_25DD55) > 0x27
	.error "gText_Rom_25DD55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DD55) < 0x27
	.space 0x27 - (. - gText_Rom_25DD55)
	.endif

	@ data/text/trainers.inc:1733 Route117_Text_DylanRematchIntro (+1 aliases)
	.globl gText_Rom_25DD7C
gText_Rom_25DD7C: @ 0x0825DD7C
	.string "トライアスロンの まっさいちゅう だけど\nぼくには よゆうが あるからね\lさくっと しょうぶ しようじゃ ないか!$"
	.if (. - gText_Rom_25DD7C) > 0x3a
	.error "gText_Rom_25DD7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DD7C) < 0x3a
	.space 0x3a - (. - gText_Rom_25DD7C)
	.endif

	@ data/text/trainers.inc:1736 Route117_Text_DylanRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25DDB6
gText_Rom_25DDB6: @ 0x0825DDB6
	.string "また たいりょく なくなった!$"
	.if (. - gText_Rom_25DDB6) != 0x10
	.error "gText_Rom_25DDB6 must retain its original byte length"
	.endif
	.globl gText_Rom_25DDB9
	.set gText_Rom_25DDB9, gText_Rom_25DDB6 + 0x3

	@ data/text/trainers.inc:1739 Route117_Text_DylanPostRematch
	.globl gText_Rom_25DDC6
gText_Rom_25DDC6: @ 0x0825DDC6
	.string "およぎと じてんしゃでは トップだったけど\nポケモンは いまいち じしんが ないよ$"
	.if (. - gText_Rom_25DDC6) > 0x2a
	.error "gText_Rom_25DDC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DDC6) < 0x2a
	.space 0x2a - (. - gText_Rom_25DDC6)
	.endif

	@ data/text/trainers.inc:1742 Route117_Text_MariaIntro (+1 aliases)
	.globl gText_Rom_25DDF0
gText_Rom_25DDF0: @ 0x0825DDF0
	.string "トライアスロンの れんしゅう\nポケモンと いっしょに してるからさ\lスピードに じしん あるよ!$"
	.if (. - gText_Rom_25DDF0) > 0x31
	.error "gText_Rom_25DDF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DDF0) < 0x31
	.space 0x31 - (. - gText_Rom_25DDF0)
	.endif

	@ data/text/trainers.inc:1745 Route117_Text_MariaDefeat (+2 aliases)
	.globl gText_Rom_25DE21
gText_Rom_25DE21: @ 0x0825DE21
	.string "れんしゅうが たりなかったかな?$"
	.if (. - gText_Rom_25DE21) > 0x11
	.error "gText_Rom_25DE21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DE21) < 0x11
	.space 0x11 - (. - gText_Rom_25DE21)
	.endif

	@ data/text/trainers.inc:1748 Route117_Text_MariaPostBattle
	.globl gText_Rom_25DE32
gText_Rom_25DE32: @ 0x0825DE32
	.string "れんしゅうは つづけてこそ\nいみが あるのよね\pよーし! また れんしゅうよ\nあしたから!$"
	.if (. - gText_Rom_25DE32) > 0x2e
	.error "gText_Rom_25DE32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DE32) < 0x2e
	.space 0x2e - (. - gText_Rom_25DE32)
	.endif

	@ data/text/trainers.inc:1751 Route117_Text_MariaRegister
	.globl gText_Rom_25DE60
gText_Rom_25DE60: @ 0x0825DE60
	.string "あなたは れんしゅう してる?\nよかったら わたしが あいてになるわ!$"
	.if (. - gText_Rom_25DE60) > 0x24
	.error "gText_Rom_25DE60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DE60) < 0x24
	.space 0x24 - (. - gText_Rom_25DE60)
	.endif

	@ data/text/trainers.inc:1754 Route117_Text_MariaRematchIntro (+1 aliases)
	.globl gText_Rom_25DE84
gText_Rom_25DE84: @ 0x0825DE84
	.string "どう れんしゅう つづけてる?\nあたしは もちろん つづけてるわ\lその しょうこ みせちゃうから!$"
	.if (. - gText_Rom_25DE84) > 0x32
	.error "gText_Rom_25DE84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DE84) < 0x32
	.space 0x32 - (. - gText_Rom_25DE84)
	.endif

	@ data/text/trainers.inc:1745 Route117_Text_MariaDefeat (+2 aliases)
	.globl gText_Rom_25DEB6
gText_Rom_25DEB6: @ 0x0825DEB6
	.string "れんしゅうが たりなかったかな?$"
	.if (. - gText_Rom_25DEB6) > 0x11
	.error "gText_Rom_25DEB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DEB6) < 0x11
	.space 0x11 - (. - gText_Rom_25DEB6)
	.endif

	@ data/text/trainers.inc:1760 Route117_Text_MariaPostRematch
	.globl gText_Rom_25DEC7
gText_Rom_25DEC7: @ 0x0825DEC7
	.string "あしたから また れんしゅう するから\nよかったら また しょうぶ してね!$"
	.if (. - gText_Rom_25DEC7) > 0x27
	.error "gText_Rom_25DEC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DEC7) < 0x27
	.space 0x27 - (. - gText_Rom_25DEC7)
	.endif

	@ data/text/trainers.inc:1763 Route117_Text_DerekIntro (+1 aliases)
	.globl gText_Rom_25DEEE
gText_Rom_25DEEE: @ 0x0825DEEE
	.string "むかしは むしとりしょうねん!\nいまは こんちゅうマニア!\pでも ポケモンを あいする きもちは\nずっと かわらないぜ!$"
	.if (. - gText_Rom_25DEEE) > 0x3d
	.error "gText_Rom_25DEEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DEEE) < 0x3d
	.space 0x3d - (. - gText_Rom_25DEEE)
	.endif

	@ data/text/trainers.inc:1766 Route117_Text_DerekDefeat (+1 aliases)
	.globl gText_Rom_25DF2B
gText_Rom_25DF2B: @ 0x0825DF2B
	.string "ポケモンの よわさも かわらない……$"
	.if (. - gText_Rom_25DF2B) > 0x13
	.error "gText_Rom_25DF2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DF2B) < 0x13
	.space 0x13 - (. - gText_Rom_25DF2B)
	.endif

	@ data/text/trainers.inc:1769 Route117_Text_DerekPostBattle
	.globl gText_Rom_25DF3E
gText_Rom_25DF3E: @ 0x0825DF3E
	.string "すきな ことばかり していたら\nいつのまにか マニアって よばれてるよ!\pまあ むしポケモンに くわしいからね\nマニアと よばれて とうぜん なのさっ!$"
	.if (. - gText_Rom_25DF3E) > 0x4d
	.error "gText_Rom_25DF3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DF3E) < 0x4d
	.space 0x4d - (. - gText_Rom_25DF3E)
	.endif

	@ data/text/trainers.inc:1772 Route117_Text_AnnaIntro (+1 aliases)
	.globl gText_Rom_25DF8B
gText_Rom_25DF8B: @ 0x0825DF8B
	.string "ミホ『かわいい コウハイの まえ だもん\nいいところ みせちゃうんだから!$"
	.if (. - gText_Rom_25DF8B) > 0x26
	.error "gText_Rom_25DF8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DF8B) < 0x26
	.space 0x26 - (. - gText_Rom_25DF8B)
	.endif

	@ data/text/trainers.inc:1775 Route117_Text_AnnaDefeat (+1 aliases)
	.globl gText_Rom_25DFB1
gText_Rom_25DFB1: @ 0x0825DFB1
	.string "ミホ『もう!\nコウハイの まえ だから かたせてよ!$"
	.if (. - gText_Rom_25DFB1) > 0x1b
	.error "gText_Rom_25DFB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DFB1) < 0x1b
	.space 0x1b - (. - gText_Rom_25DFB1)
	.endif

	@ data/text/trainers.inc:1778 Route117_Text_AnnaPostBattle
	.globl gText_Rom_25DFCC
gText_Rom_25DFCC: @ 0x0825DFCC
	.string "ミホ『あなたの ポケモン\nなかなかの コンビネーション してる!\pそうね あたしたちの\nつぎ ぐらいに すごいんじゃない?$"
	.if (. - gText_Rom_25DFCC) > 0x3e
	.error "gText_Rom_25DFCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DFCC) < 0x3e
	.space 0x3e - (. - gText_Rom_25DFCC)
	.endif

	@ data/text/trainers.inc:1781 Route117_Text_AnnaAndMegRegister
	.globl gText_Rom_25E00A
gText_Rom_25E00A: @ 0x0825E00A
	.string "ミホ『まけっぱなしでは\nひきさがれない わたしたち!\lまた きて くれるわよね?$"
	.if (. - gText_Rom_25E00A) > 0x29
	.error "gText_Rom_25E00A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E00A) < 0x29
	.space 0x29 - (. - gText_Rom_25E00A)
	.endif

	@ data/text/trainers.inc:1784 Route117_Text_AnnaNotEnoughMons (+2 aliases)
	.globl gText_Rom_25E033
gText_Rom_25E033: @ 0x0825E033
	.string "ミホ『あたしたちと しょうぶ したいなら\nポケモンを 2ひきは もってきてね!$"
	.if (. - gText_Rom_25E033) > 0x28
	.error "gText_Rom_25E033 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E033) < 0x28
	.space 0x28 - (. - gText_Rom_25E033)
	.endif

	@ data/text/trainers.inc:1787 Route117_Text_MegIntro (+1 aliases)
	.globl gText_Rom_25E05B
gText_Rom_25E05B: @ 0x0825E05B
	.string "リコ『すてきな センパイとの タッグで\nあなたを まかしちゃうから!$"
	.if (. - gText_Rom_25E05B) > 0x23
	.error "gText_Rom_25E05B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E05B) < 0x23
	.space 0x23 - (. - gText_Rom_25E05B)
	.endif

	@ data/text/trainers.inc:1790 Route117_Text_MegDefeat (+1 aliases)
	.globl gText_Rom_25E07E
gText_Rom_25E07E: @ 0x0825E07E
	.string "リコ『やーん\nセンパイ ごめんなさい!$"
	.if (. - gText_Rom_25E07E) > 0x14
	.error "gText_Rom_25E07E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E07E) < 0x14
	.space 0x14 - (. - gText_Rom_25E07E)
	.endif

	@ data/text/trainers.inc:1793 Route117_Text_MegPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25E092
gText_Rom_25E092: @ 0x0825E092
	.string "リコ『あたしが センパイの\nあしを ひっぱっちゃったの……\pそうでなきゃ あんた かってないわよ!$"
	.if (. - gText_Rom_25E092) != 0x32
	.error "gText_Rom_25E092 must retain its original byte length"
	.endif
	.globl gText_Rom_25E0C0
	.set gText_Rom_25E0C0, gText_Rom_25E092 + 0x2e

	@ data/text/trainers.inc:1796 Route117_Text_MegNotEnoughMons (+2 aliases)
	.globl gText_Rom_25E0C4
gText_Rom_25E0C4: @ 0x0825E0C4
	.string "リコ『ポケモン 1ぴき しか いないの?\nじゃあ しょうぶは できないわね\pあたしたち 2たい2の\nしょうぶを たのしみたいの!$"
	.if (. - gText_Rom_25E0C4) > 0x41
	.error "gText_Rom_25E0C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E0C4) < 0x41
	.space 0x41 - (. - gText_Rom_25E0C4)
	.endif

	@ data/text/trainers.inc:1799 Route117_Text_AnnaRematchIntro (+1 aliases)
	.globl gText_Rom_25E105
gText_Rom_25E105: @ 0x0825E105
	.string "ミホ『コウハイの まえで\nなんども まけてられないのよね$"
	.if (. - gText_Rom_25E105) > 0x1d
	.error "gText_Rom_25E105 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E105) < 0x1d
	.space 0x1d - (. - gText_Rom_25E105)
	.endif

	@ data/text/trainers.inc:1802 Route117_Text_AnnaRematchDefeat (+1 aliases)
	.globl gText_Rom_25E122
gText_Rom_25E122: @ 0x0825E122
	.string "ミホ『ちょうしが でなかったのよ$"
	.if (. - gText_Rom_25E122) > 0x11
	.error "gText_Rom_25E122 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E122) < 0x11
	.space 0x11 - (. - gText_Rom_25E122)
	.endif

	@ data/text/trainers.inc:1805 Route117_Text_AnnaPostRematch
	.globl gText_Rom_25E133
gText_Rom_25E133: @ 0x0825E133
	.string "ミホ『あなたの ポケモン\nなかなかの コンビネーションしてる!\pそうね あたしたちの\nつぎ ぐらいに すごいんじゃない?$"
	.if (. - gText_Rom_25E133) > 0x3d
	.error "gText_Rom_25E133 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E133) < 0x3d
	.space 0x3d - (. - gText_Rom_25E133)
	.endif

	@ data/text/trainers.inc:1784 Route117_Text_AnnaNotEnoughMons (+2 aliases)
	.globl gText_Rom_25E170
gText_Rom_25E170: @ 0x0825E170
	.string "ミホ『あたしたちと しょうぶ したいなら\nポケモンを 2ひきは もってきてね!$"
	.if (. - gText_Rom_25E170) > 0x28
	.error "gText_Rom_25E170 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E170) < 0x28
	.space 0x28 - (. - gText_Rom_25E170)
	.endif

	@ data/text/trainers.inc:1811 Route117_Text_MegRematchIntro (+1 aliases)
	.globl gText_Rom_25E198
gText_Rom_25E198: @ 0x0825E198
	.string "リコ『センパイとの タッグで\nこんどこそ あなたを まかしちゃうから!$"
	.if (. - gText_Rom_25E198) > 0x24
	.error "gText_Rom_25E198 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E198) < 0x24
	.space 0x24 - (. - gText_Rom_25E198)
	.endif

	@ data/text/trainers.inc:1814 Route117_Text_MegRematchDefeat (+1 aliases)
	.globl gText_Rom_25E1BC
gText_Rom_25E1BC: @ 0x0825E1BC
	.string "リコ『つよすぎるわ$"
	.if (. - gText_Rom_25E1BC) > 0xa
	.error "gText_Rom_25E1BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E1BC) < 0xa
	.space 0xa - (. - gText_Rom_25E1BC)
	.endif

	@ data/text/trainers.inc:1817 Route117_Text_MegPostRematch
	.globl gText_Rom_25E1C6
gText_Rom_25E1C6: @ 0x0825E1C6
	.string "リコ『センパイと いっしょに たたかったのに\nまけるだなんて…… おちこんじゃう!$"
	.if (. - gText_Rom_25E1C6) > 0x2a
	.error "gText_Rom_25E1C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E1C6) < 0x2a
	.space 0x2a - (. - gText_Rom_25E1C6)
	.endif

	@ data/text/trainers.inc:1796 Route117_Text_MegNotEnoughMons (+2 aliases)
	.globl gText_Rom_25E1F0
gText_Rom_25E1F0: @ 0x0825E1F0
	.string "リコ『ポケモン 1ぴき しか いないの?\nじゃあ しょうぶは できないわね\pあたしたち 2たい2の\nしょうぶを たのしみたいの!$"
	.if (. - gText_Rom_25E1F0) > 0x41
	.error "gText_Rom_25E1F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E1F0) < 0x41
	.space 0x41 - (. - gText_Rom_25E1F0)
	.endif

	@ data/text/trainers.inc:1823 Route117_Text_MelinaIntro (+1 aliases)
	.globl gText_Rom_25E231
gText_Rom_25E231: @ 0x0825E231
	.string "すてきな おはなを みながら\nしょうぶする なんて すてきよね!$"
	.if (. - gText_Rom_25E231) > 0x21
	.error "gText_Rom_25E231 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E231) < 0x21
	.space 0x21 - (. - gText_Rom_25E231)
	.endif

	@ data/text/trainers.inc:1826 Route117_Text_MelinaDefeat (+1 aliases)
	.globl gText_Rom_25E252
gText_Rom_25E252: @ 0x0825E252
	.string "へーえ いいカンジね あんた!$"
	.if (. - gText_Rom_25E252) > 0x10
	.error "gText_Rom_25E252 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E252) < 0x10
	.space 0x10 - (. - gText_Rom_25E252)
	.endif

	@ data/text/trainers.inc:1829 Route117_Text_MelinaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25E262
gText_Rom_25E262: @ 0x0825E262
	.string "おはなを みながら はしると\nきもちいいわよ!$"
	.if (. - gText_Rom_25E262) != 0x18
	.error "gText_Rom_25E262 must retain its original byte length"
	.endif
	.globl gText_Rom_25E276
	.set gText_Rom_25E276, gText_Rom_25E262 + 0x14

	@ data/text/trainers.inc:1832 Route117_Text_BrandiIntro (+1 aliases)
	.globl gText_Rom_25E27A
gText_Rom_25E27A: @ 0x0825E27A
	.string "エスパーポケモンに\nひめられた ちからを おみせするわ!$"
	.if (. - gText_Rom_25E27A) > 0x1d
	.error "gText_Rom_25E27A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E27A) < 0x1d
	.space 0x1d - (. - gText_Rom_25E27A)
	.endif

	@ data/text/trainers.inc:1835 Route117_Text_BrandiDefeat (+1 aliases)
	.globl gText_Rom_25E297
gText_Rom_25E297: @ 0x0825E297
	.string "おどろいたわ$"
	.if (. - gText_Rom_25E297) > 0x7
	.error "gText_Rom_25E297 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E297) < 0x7
	.space 0x7 - (. - gText_Rom_25E297)
	.endif

	@ data/text/trainers.inc:1838 Route117_Text_BrandiPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25E29E
gText_Rom_25E29E: @ 0x0825E29E
	.string "エスパーポケモンは おくが ふかいの\nあなたも つかまえて ごらんなさい$"
	.if (. - gText_Rom_25E29E) != 0x25
	.error "gText_Rom_25E29E must retain its original byte length"
	.endif
	.globl gText_Rom_25E2BF
	.set gText_Rom_25E2BF, gText_Rom_25E29E + 0x21

	@ data/text/trainers.inc:1841 Route117_Text_AishaIntro (+1 aliases)
	.globl gText_Rom_25E2C3
gText_Rom_25E2C3: @ 0x0825E2C3
	.string "かつこと だけを かんがえて たたかうわ!$"
	.if (. - gText_Rom_25E2C3) > 0x16
	.error "gText_Rom_25E2C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E2C3) < 0x16
	.space 0x16 - (. - gText_Rom_25E2C3)
	.endif

	@ data/text/trainers.inc:1844 Route117_Text_AishaDefeat (+1 aliases)
	.globl gText_Rom_25E2D9
gText_Rom_25E2D9: @ 0x0825E2D9
	.string "まけても くやしがったり しない!\nそんなひまが あったら とっくんよ$"
	.if (. - gText_Rom_25E2D9) > 0x24
	.error "gText_Rom_25E2D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E2D9) < 0x24
	.space 0x24 - (. - gText_Rom_25E2D9)
	.endif

	@ data/text/trainers.inc:1847 Route117_Text_AishaPostBattle
	.globl gText_Rom_25E2FD
gText_Rom_25E2FD: @ 0x0825E2FD
	.string "まけるかな?と しんぱい すると\nよけいに まけちゃうと おもうのよね$"
	.if (. - gText_Rom_25E2FD) > 0x24
	.error "gText_Rom_25E2FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E2FD) < 0x24
	.space 0x24 - (. - gText_Rom_25E2FD)
	.endif

	@ data/text/trainers.inc:1850 Route118_Text_RoseIntro (+1 aliases)
	.globl gText_Rom_25E321
gText_Rom_25E321: @ 0x0825E321
	.string "はなの かおりは ふしぎな ちから\nからだも こころも きれいに なるわ$"
	.if (. - gText_Rom_25E321) > 0x25
	.error "gText_Rom_25E321 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E321) < 0x25
	.space 0x25 - (. - gText_Rom_25E321)
	.endif

	@ data/text/trainers.inc:1853 Route118_Text_RoseDefeat (+1 aliases)
	.globl gText_Rom_25E346
gText_Rom_25E346: @ 0x0825E346
	.string "あらら\nまけちゃったわね$"
	.if (. - gText_Rom_25E346) > 0xd
	.error "gText_Rom_25E346 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E346) < 0xd
	.space 0xd - (. - gText_Rom_25E346)
	.endif

	@ data/text/trainers.inc:1856 Route118_Text_RosePostBattle
	.globl gText_Rom_25E353
gText_Rom_25E353: @ 0x0825E353
	.string "はなも ポケモンも\nいい かおりの ものが だいすき!\lクサイにおいは…… かんべんね$"
	.if (. - gText_Rom_25E353) > 0x2c
	.error "gText_Rom_25E353 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E353) < 0x2c
	.space 0x2c - (. - gText_Rom_25E353)
	.endif

	@ data/text/trainers.inc:1859 Route118_Text_RoseRegister
	.globl gText_Rom_25E37F
gText_Rom_25E37F: @ 0x0825E37F
	.string "あら その においは ポケナビね\nぜひとも とうろく しあいましょう!$"
	.if (. - gText_Rom_25E37F) > 0x24
	.error "gText_Rom_25E37F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E37F) < 0x24
	.space 0x24 - (. - gText_Rom_25E37F)
	.endif

	@ data/text/trainers.inc:1862 Route118_Text_RoseRematchIntro (+1 aliases)
	.globl gText_Rom_25E3A3
gText_Rom_25E3A3: @ 0x0825E3A3
	.string "いい かおりに さそわれて\nいらしたのかしら?$"
	.if (. - gText_Rom_25E3A3) > 0x18
	.error "gText_Rom_25E3A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E3A3) < 0x18
	.space 0x18 - (. - gText_Rom_25E3A3)
	.endif

	@ data/text/trainers.inc:1865 Route118_Text_RoseRematchDefeat (+1 aliases)
	.globl gText_Rom_25E3BB
gText_Rom_25E3BB: @ 0x0825E3BB
	.string "においの こうか……\nあんまり きかなかったわね$"
	.if (. - gText_Rom_25E3BB) > 0x19
	.error "gText_Rom_25E3BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E3BB) < 0x19
	.space 0x19 - (. - gText_Rom_25E3BB)
	.endif

	@ data/text/trainers.inc:1868 Route118_Text_RosePostRematch
	.globl gText_Rom_25E3D4
gText_Rom_25E3D4: @ 0x0825E3D4
	.string "あまいかおりを うまく つかうと\nポケモンが さそわれて やってくるわね$"
	.if (. - gText_Rom_25E3D4) > 0x25
	.error "gText_Rom_25E3D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E3D4) < 0x25
	.space 0x25 - (. - gText_Rom_25E3D4)
	.endif

	@ data/text/trainers.inc:1871 Route118_Text_PerryIntro (+1 aliases)
	.globl gText_Rom_25E3F9
gText_Rom_25E3F9: @ 0x0825E3F9
	.string "かれいに おおぞらを まう\nとりポケモンが さいこう だぜ!$"
	.if (. - gText_Rom_25E3F9) > 0x1f
	.error "gText_Rom_25E3F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E3F9) < 0x1f
	.space 0x1f - (. - gText_Rom_25E3F9)
	.endif

	@ data/text/trainers.inc:1874 Route118_Text_PerryDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25E418
gText_Rom_25E418: @ 0x0825E418
	.string "うう…… まけた……$"
	.if (. - gText_Rom_25E418) != 0xb
	.error "gText_Rom_25E418 must retain its original byte length"
	.endif
	.globl gText_Rom_25E41D
	.set gText_Rom_25E41D, gText_Rom_25E418 + 0x5

	@ data/text/trainers.inc:1877 Route118_Text_PerryPostBattle
	.globl gText_Rom_25E423
gText_Rom_25E423: @ 0x0825E423
	.string "きみも いい ポケモンを もってるね!\nぼくも まけずに そだてよっと!$"
	.if (. - gText_Rom_25E423) > 0x25
	.error "gText_Rom_25E423 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E423) < 0x25
	.space 0x25 - (. - gText_Rom_25E423)
	.endif

	@ data/text/trainers.inc:1880 Route118_Text_ChesterIntro (+1 aliases)
	.globl gText_Rom_25E448
gText_Rom_25E448: @ 0x0825E448
	.string "はばたけ!\nおいらの とりポケモン!$"
	.if (. - gText_Rom_25E448) > 0x13
	.error "gText_Rom_25E448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E448) < 0x13
	.space 0x13 - (. - gText_Rom_25E448)
	.endif

	@ data/text/trainers.inc:1883 Route118_Text_ChesterDefeat (+1 aliases)
	.globl gText_Rom_25E45B
gText_Rom_25E45B: @ 0x0825E45B
	.string "はばたいたけど……$"
	.if (. - gText_Rom_25E45B) > 0xa
	.error "gText_Rom_25E45B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E45B) < 0xa
	.space 0xa - (. - gText_Rom_25E45B)
	.endif

	@ data/text/trainers.inc:1886 Route118_Text_ChesterPostBattle
	.globl gText_Rom_25E465
gText_Rom_25E465: @ 0x0825E465
	.string "もっと つよくなると\nじゆうに とべるように なるのにな!$"
	.if (. - gText_Rom_25E465) > 0x1e
	.error "gText_Rom_25E465 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E465) < 0x1e
	.space 0x1e - (. - gText_Rom_25E465)
	.endif

	@ data/text/trainers.inc:1889 Route118_Text_BarnyIntro (+1 aliases)
	.globl gText_Rom_25E483
gText_Rom_25E483: @ 0x0825E483
	.string "あたしゃ つりびとだが トレーナーでもある\nつった ポケモン ちゃんと そだててるよ!$"
	.if (. - gText_Rom_25E483) > 0x2c
	.error "gText_Rom_25E483 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E483) < 0x2c
	.space 0x2c - (. - gText_Rom_25E483)
	.endif

	@ data/text/trainers.inc:1892 Route118_Text_BarnyDefeat (+1 aliases)
	.globl gText_Rom_25E4AF
gText_Rom_25E4AF: @ 0x0825E4AF
	.string "そだてたはず なんだが……?$"
	.if (. - gText_Rom_25E4AF) > 0xf
	.error "gText_Rom_25E4AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E4AF) < 0xf
	.space 0xf - (. - gText_Rom_25E4AF)
	.endif

	@ data/text/trainers.inc:1895 Route118_Text_BarnyPostBattle
	.globl gText_Rom_25E4BE
gText_Rom_25E4BE: @ 0x0825E4BE
	.string "つりを しながら\nポケモン そだてても かてなかった……\lどっちも はんぱ だったのか!?$"
	.if (. - gText_Rom_25E4BE) > 0x2e
	.error "gText_Rom_25E4BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E4BE) < 0x2e
	.space 0x2e - (. - gText_Rom_25E4BE)
	.endif

	@ data/text/trainers.inc:1898 Route118_Text_WadeIntro (+1 aliases)
	.globl gText_Rom_25E4EC
gText_Rom_25E4EC: @ 0x0825E4EC
	.string "つりびとに だいじ なのは どうぐ!\nトレーナーに だいじ なのは\lもちろん ポケモンと ハートだな!$"
	.if (. - gText_Rom_25E4EC) > 0x34
	.error "gText_Rom_25E4EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E4EC) < 0x34
	.space 0x34 - (. - gText_Rom_25E4EC)
	.endif

	@ data/text/trainers.inc:1901 Route118_Text_WadeDefeat (+1 aliases)
	.globl gText_Rom_25E520
gText_Rom_25E520: @ 0x0825E520
	.string "ハートの しょうぶで まけたのか?$"
	.if (. - gText_Rom_25E520) > 0x12
	.error "gText_Rom_25E520 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E520) < 0x12
	.space 0x12 - (. - gText_Rom_25E520)
	.endif

	@ data/text/trainers.inc:1904 Route118_Text_WadePostBattle
	.globl gText_Rom_25E532
gText_Rom_25E532: @ 0x0825E532
	.string "つり というのも\nひとと ポケモンとの\lしんけん しょうぶ だな!$"
	.if (. - gText_Rom_25E532) > 0x22
	.error "gText_Rom_25E532 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E532) < 0x22
	.space 0x22 - (. - gText_Rom_25E532)
	.endif

	@ data/text/trainers.inc:1907 Route118_Text_DaltonIntro (+1 aliases)
	.globl gText_Rom_25E554
gText_Rom_25E554: @ 0x0825E554
	.string "ぼくの メロディ\nあなたの こころに とどけるよ$"
	.if (. - gText_Rom_25E554) > 0x19
	.error "gText_Rom_25E554 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E554) < 0x19
	.space 0x19 - (. - gText_Rom_25E554)
	.endif

	@ data/text/trainers.inc:1910 Route118_Text_DaltonDefeat (+2 aliases)
	.globl gText_Rom_25E56D
gText_Rom_25E56D: @ 0x0825E56D
	.string "ルー ルルルー$"
	.if (. - gText_Rom_25E56D) > 0x8
	.error "gText_Rom_25E56D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E56D) < 0x8
	.space 0x8 - (. - gText_Rom_25E56D)
	.endif

	@ data/text/trainers.inc:1913 Route118_Text_DaltonPostBattle
	.globl gText_Rom_25E575
gText_Rom_25E575: @ 0x0825E575
	.string "エレキギターって\nただ うるさい だけじゃ ないんだ……\pこうして こころに しみる\nメロディも かなでられるのさ……$"
	.if (. - gText_Rom_25E575) > 0x3c
	.error "gText_Rom_25E575 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E575) < 0x3c
	.space 0x3c - (. - gText_Rom_25E575)
	.endif

	@ data/text/trainers.inc:1916 Route118_Text_DaltonRegister
	.globl gText_Rom_25E5B1
gText_Rom_25E5B1: @ 0x0825E5B1
	.string "もっと いい メロディが できたら\nききにおいでよ!$"
	.if (. - gText_Rom_25E5B1) > 0x1b
	.error "gText_Rom_25E5B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E5B1) < 0x1b
	.space 0x1b - (. - gText_Rom_25E5B1)
	.endif

	@ data/text/trainers.inc:1919 Route118_Text_DaltonRematchIntro (+1 aliases)
	.globl gText_Rom_25E5CC
gText_Rom_25E5CC: @ 0x0825E5CC
	.string "ぼくと ポケモンの メロディ\nあなたの こころに とどけるよ$"
	.if (. - gText_Rom_25E5CC) > 0x1f
	.error "gText_Rom_25E5CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E5CC) < 0x1f
	.space 0x1f - (. - gText_Rom_25E5CC)
	.endif

	@ data/text/trainers.inc:1910 Route118_Text_DaltonDefeat (+2 aliases)
	.globl gText_Rom_25E5EB
gText_Rom_25E5EB: @ 0x0825E5EB
	.string "ルー ルルルー$"
	.if (. - gText_Rom_25E5EB) > 0x8
	.error "gText_Rom_25E5EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E5EB) < 0x8
	.space 0x8 - (. - gText_Rom_25E5EB)
	.endif

	@ data/text/trainers.inc:1925 Route118_Text_DaltonPostRematch
	.globl gText_Rom_25E5F3
gText_Rom_25E5F3: @ 0x0825E5F3
	.string "ひいてるときの ぼくの きもちが\nエレキギターを とおして\lあなたに とどく はずなのさ……$"
	.if (. - gText_Rom_25E5F3) > 0x2f
	.error "gText_Rom_25E5F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E5F3) < 0x2f
	.space 0x2f - (. - gText_Rom_25E5F3)
	.endif

	@ data/text/trainers.inc:1928 Route118_Text_DeandreIntro (+1 aliases)
	.globl gText_Rom_25E622
gText_Rom_25E622: @ 0x0825E622
	.string "いけいけー!\nボクの ポケモン 1ごう 2ごう 3ごう!$"
	.if (. - gText_Rom_25E622) > 0x1d
	.error "gText_Rom_25E622 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E622) < 0x1d
	.space 0x1d - (. - gText_Rom_25E622)
	.endif

	@ data/text/trainers.inc:1931 Route118_Text_DeandreDefeat (+1 aliases)
	.globl gText_Rom_25E63F
gText_Rom_25E63F: @ 0x0825E63F
	.string "ああ だいじょうぶか!?\nボクの ポケモン 1ごう 2ごう 3ごう!$"
	.if (. - gText_Rom_25E63F) > 0x23
	.error "gText_Rom_25E63F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E63F) < 0x23
	.space 0x23 - (. - gText_Rom_25E63F)
	.endif

	@ data/text/trainers.inc:1934 Route118_Text_DeandrePostBattle
	.globl gText_Rom_25E662
gText_Rom_25E662: @ 0x0825E662
	.string "ボクの ポケモン せんたい\nカッコいい だろー!\lまね しても いーぜー!$"
	.if (. - gText_Rom_25E662) > 0x26
	.error "gText_Rom_25E662 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E662) < 0x26
	.space 0x26 - (. - gText_Rom_25E662)
	.endif

	@ data/text/trainers.inc:1937 Route119_Text_BrentIntro (+1 aliases)
	.globl gText_Rom_25E688
gText_Rom_25E688: @ 0x0825E688
	.string "ボクらは モノマネサークル!\nキミの うごきを マネするよ!$"
	.if (. - gText_Rom_25E688) > 0x1f
	.error "gText_Rom_25E688 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E688) < 0x1f
	.space 0x1f - (. - gText_Rom_25E688)
	.endif

	@ data/text/trainers.inc:1940 Route119_Text_BrentDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25E6A7
gText_Rom_25E6A7: @ 0x0825E6A7
	.string "うわあ まけたーっ!$"
	.if (. - gText_Rom_25E6A7) != 0xb
	.error "gText_Rom_25E6A7 must retain its original byte length"
	.endif
	.globl gText_Rom_25E6AB
	.set gText_Rom_25E6AB, gText_Rom_25E6A7 + 0x4

	@ data/text/trainers.inc:1943 Route119_Text_BrentPostBattle
	.globl gText_Rom_25E6B2
gText_Rom_25E6B2: @ 0x0825E6B2
	.string "マネを して なにが たのしいか……\pふふふ……\nキミには わからない だろうよ$"
	.if (. - gText_Rom_25E6B2) > 0x29
	.error "gText_Rom_25E6B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E6B2) < 0x29
	.space 0x29 - (. - gText_Rom_25E6B2)
	.endif

	@ data/text/trainers.inc:1946 Route119_Text_DonaldIntro (+1 aliases)
	.globl gText_Rom_25E6DB
gText_Rom_25E6DB: @ 0x0825E6DB
	.string "ようやく であえたね!\nぼくの むしポケモンが あいて するよ!$"
	.if (. - gText_Rom_25E6DB) > 0x21
	.error "gText_Rom_25E6DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E6DB) < 0x21
	.space 0x21 - (. - gText_Rom_25E6DB)
	.endif

	@ data/text/trainers.inc:1949 Route119_Text_DonaldDefeat (+1 aliases)
	.globl gText_Rom_25E6FC
gText_Rom_25E6FC: @ 0x0825E6FC
	.string "であわなければ よかった……$"
	.if (. - gText_Rom_25E6FC) > 0xf
	.error "gText_Rom_25E6FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E6FC) < 0xf
	.space 0xf - (. - gText_Rom_25E6FC)
	.endif

	@ data/text/trainers.inc:1952 Route119_Text_DonaldPostBattle
	.globl gText_Rom_25E70B
gText_Rom_25E70B: @ 0x0825E70B
	.string "もっと キミの マネを したい!\nほら はやく うごいてよ!$"
	.if (. - gText_Rom_25E70B) > 0x1f
	.error "gText_Rom_25E70B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E70B) < 0x1f
	.space 0x1f - (. - gText_Rom_25E70B)
	.endif

	@ data/text/trainers.inc:1955 Route119_Text_TaylorIntro (+1 aliases)
	.globl gText_Rom_25E72A
gText_Rom_25E72A: @ 0x0825E72A
	.string "きみが まえに すすんだら\nぼくらも すすむ\pきみが みぎへ まがれば\nぼくらも まがる……$"
	.if (. - gText_Rom_25E72A) > 0x2f
	.error "gText_Rom_25E72A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E72A) < 0x2f
	.space 0x2f - (. - gText_Rom_25E72A)
	.endif

	@ data/text/trainers.inc:1958 Route119_Text_TaylorDefeat (+1 aliases)
	.globl gText_Rom_25E759
gText_Rom_25E759: @ 0x0825E759
	.string "キミが かっても\nぼくは まける……$"
	.if (. - gText_Rom_25E759) > 0x13
	.error "gText_Rom_25E759 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E759) < 0x13
	.space 0x13 - (. - gText_Rom_25E759)
	.endif

	@ data/text/trainers.inc:1961 Route119_Text_TaylorPostBattle
	.globl gText_Rom_25E76C
gText_Rom_25E76C: @ 0x0825E76C
	.string "うーん しょうぶの しょうはい だけは\nマネ できないよなあ……\lなんか くやしい……$"
	.if (. - gText_Rom_25E76C) > 0x2c
	.error "gText_Rom_25E76C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E76C) < 0x2c
	.space 0x2c - (. - gText_Rom_25E76C)
	.endif

	@ data/text/trainers.inc:1964 Route119_Text_DougIntro (+1 aliases)
	.globl gText_Rom_25E798
gText_Rom_25E798: @ 0x0825E798
	.string "やっと ボクを つかまえられたね!\nそれとも にげようと していたのかな?$"
	.if (. - gText_Rom_25E798) > 0x26
	.error "gText_Rom_25E798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E798) < 0x26
	.space 0x26 - (. - gText_Rom_25E798)
	.endif

	@ data/text/trainers.inc:1967 Route119_Text_DougDefeat (+1 aliases)
	.globl gText_Rom_25E7BE
gText_Rom_25E7BE: @ 0x0825E7BE
	.string "すばらしい たたかい だったな!$"
	.if (. - gText_Rom_25E7BE) > 0x11
	.error "gText_Rom_25E7BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E7BE) < 0x11
	.space 0x11 - (. - gText_Rom_25E7BE)
	.endif

	@ data/text/trainers.inc:1970 Route119_Text_DougPostBattle
	.globl gText_Rom_25E7CF
gText_Rom_25E7CF: @ 0x0825E7CF
	.string "ボクらは モノマネサークル!\nたのしんで もらえたかな?$"
	.if (. - gText_Rom_25E7CF) > 0x1d
	.error "gText_Rom_25E7CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E7CF) < 0x1d
	.space 0x1d - (. - gText_Rom_25E7CF)
	.endif

	@ data/text/trainers.inc:1973 Route119_Text_GregIntro (+1 aliases)
	.globl gText_Rom_25E7EC
gText_Rom_25E7EC: @ 0x0825E7EC
	.string "ボクが だれなのか わからないだろう?\p……まあ ボクも キミのこと しらないから\nこうして たたかうんだけどね!$"
	.if (. - gText_Rom_25E7EC) > 0x3a
	.error "gText_Rom_25E7EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E7EC) < 0x3a
	.space 0x3a - (. - gText_Rom_25E7EC)
	.endif

	@ data/text/trainers.inc:1976 Route119_Text_GregDefeat (+1 aliases)
	.globl gText_Rom_25E826
gText_Rom_25E826: @ 0x0825E826
	.string "けっこう つよい じゃんか!$"
	.if (. - gText_Rom_25E826) > 0xf
	.error "gText_Rom_25E826 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E826) < 0xf
	.space 0xf - (. - gText_Rom_25E826)
	.endif

	@ data/text/trainers.inc:1979 Route119_Text_GregPostBattle
	.globl gText_Rom_25E835
gText_Rom_25E835: @ 0x0825E835
	.string "キミが どこかに いくまで\nボクらは マネを つづけるよ!$"
	.if (. - gText_Rom_25E835) > 0x1e
	.error "gText_Rom_25E835 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E835) < 0x1e
	.space 0x1e - (. - gText_Rom_25E835)
	.endif

	@ data/text/trainers.inc:1982 Route119_Text_KentIntro (+1 aliases)
	.globl gText_Rom_25E853
gText_Rom_25E853: @ 0x0825E853
	.string "モノマネ だいすきな ひとが\nあつまって つくった モノマネサークル!\pであった そのとき\nしょうぶが はじまる!$"
	.if (. - gText_Rom_25E853) > 0x3a
	.error "gText_Rom_25E853 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E853) < 0x3a
	.space 0x3a - (. - gText_Rom_25E853)
	.endif

	@ data/text/trainers.inc:410 Route106_Text_DouglasDefeated (+2 aliases)
	.globl gText_Rom_25E88D
gText_Rom_25E88D: @ 0x0825E88D
	.string "まいりましたーっ!$"
	.if (. - gText_Rom_25E88D) > 0xa
	.error "gText_Rom_25E88D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E88D) < 0xa
	.space 0xa - (. - gText_Rom_25E88D)
	.endif

	@ data/text/trainers.inc:1988 Route119_Text_KentPostBattle
	.globl gText_Rom_25E897
gText_Rom_25E897: @ 0x0825E897
	.string "キミも モノマネサークルに はいらない?$"
	.if (. - gText_Rom_25E897) > 0x15
	.error "gText_Rom_25E897 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E897) < 0x15
	.space 0x15 - (. - gText_Rom_25E897)
	.endif

	@ data/text/trainers.inc:1991 Route119_Text_JacksonIntro (+1 aliases)
	.globl gText_Rom_25E8AC
gText_Rom_25E8AC: @ 0x0825E8AC
	.string "サバイバルに ひつような\nちしきと ぎじゅつを もつ もの!\lそれが ポケモンレンジャーさ!$"
	.if (. - gText_Rom_25E8AC) > 0x2f
	.error "gText_Rom_25E8AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E8AC) < 0x2f
	.space 0x2f - (. - gText_Rom_25E8AC)
	.endif

	@ data/text/trainers.inc:1994 Route119_Text_JacksonDefeat (+1 aliases)
	.globl gText_Rom_25E8DB
gText_Rom_25E8DB: @ 0x0825E8DB
	.string "ポケモンの ちしきは たらなかった……$"
	.if (. - gText_Rom_25E8DB) > 0x14
	.error "gText_Rom_25E8DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E8DB) < 0x14
	.space 0x14 - (. - gText_Rom_25E8DB)
	.endif

	@ data/text/trainers.inc:1997 Route119_Text_JacksonPostBattle
	.globl gText_Rom_25E8EF
gText_Rom_25E8EF: @ 0x0825E8EF
	.string "ぶんめい から はなれて\nにんげんの やせいを めざめさせる!\lそれが オレたちの テーマさ!$"
	.if (. - gText_Rom_25E8EF) > 0x30
	.error "gText_Rom_25E8EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E8EF) < 0x30
	.space 0x30 - (. - gText_Rom_25E8EF)
	.endif

	@ data/text/trainers.inc:2000 Route119_Text_JacksonRegister
	.globl gText_Rom_25E91F
gText_Rom_25E91F: @ 0x0825E91F
	.string "ちしきぶそくと わらわずに\nこんど また あいてを してやってくれよな$"
	.if (. - gText_Rom_25E91F) > 0x24
	.error "gText_Rom_25E91F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E91F) < 0x24
	.space 0x24 - (. - gText_Rom_25E91F)
	.endif

	@ data/text/trainers.inc:2003 Route119_Text_JacksonRematchIntro (+1 aliases)
	.globl gText_Rom_25E943
gText_Rom_25E943: @ 0x0825E943
	.string "ポケモンと いることで\nやせいを とりもどすのさ!$"
	.if (. - gText_Rom_25E943) > 0x1a
	.error "gText_Rom_25E943 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E943) < 0x1a
	.space 0x1a - (. - gText_Rom_25E943)
	.endif

	@ data/text/trainers.inc:2006 Route119_Text_JacksonRematchDefeat (+1 aliases)
	.globl gText_Rom_25E95D
gText_Rom_25E95D: @ 0x0825E95D
	.string "あいかわらず つよいな!$"
	.if (. - gText_Rom_25E95D) > 0xd
	.error "gText_Rom_25E95D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E95D) < 0xd
	.space 0xd - (. - gText_Rom_25E95D)
	.endif

	@ data/text/trainers.inc:2009 Route119_Text_JacksonPostRematch
	.globl gText_Rom_25E96A
gText_Rom_25E96A: @ 0x0825E96A
	.string "とにかく ポケモンを しんじろ!\nじぶんを しんじろ!\lそうすれば みちは ひらける!$"
	.if (. - gText_Rom_25E96A) > 0x2c
	.error "gText_Rom_25E96A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E96A) < 0x2c
	.space 0x2c - (. - gText_Rom_25E96A)
	.endif

	@ data/text/trainers.inc:2012 Route119_Text_CatherineIntro (+1 aliases)
	.globl gText_Rom_25E996
gText_Rom_25E996: @ 0x0825E996
	.string "あら あなた……\nぼうけんを している わりには\lずいぶん みがるな かっこうね!$"
	.if (. - gText_Rom_25E996) > 0x2a
	.error "gText_Rom_25E996 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E996) < 0x2a
	.space 0x2a - (. - gText_Rom_25E996)
	.endif

	@ data/text/trainers.inc:2015 Route119_Text_CatherineDefeat (+1 aliases)
	.globl gText_Rom_25E9C0
gText_Rom_25E9C0: @ 0x0825E9C0
	.string "じゅんび ぶそくは じこの もと……$"
	.if (. - gText_Rom_25E9C0) > 0x13
	.error "gText_Rom_25E9C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E9C0) < 0x13
	.space 0x13 - (. - gText_Rom_25E9C0)
	.endif

	@ data/text/trainers.inc:2018 Route119_Text_CatherinePostBattle
	.globl gText_Rom_25E9D3
gText_Rom_25E9D3: @ 0x0825E9D3
	.string "ずいぶん みがるな かっこう だけど\nひつような どうぐは もってるし\lきりょく たいりょく じゅうぶんね!$"
	.if (. - gText_Rom_25E9D3) > 0x37
	.error "gText_Rom_25E9D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E9D3) < 0x37
	.space 0x37 - (. - gText_Rom_25E9D3)
	.endif

	@ data/text/trainers.inc:2021 Route119_Text_CatherineRegister
	.globl gText_Rom_25EA0A
gText_Rom_25EA0A: @ 0x0825EA0A
	.string "トレーナーの ひつじゅひん ポケナビは\nちゃんと もってる?\pあっ もってるわね! とうろくしましょ$"
	.if (. - gText_Rom_25EA0A) > 0x33
	.error "gText_Rom_25EA0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EA0A) < 0x33
	.space 0x33 - (. - gText_Rom_25EA0A)
	.endif

	@ data/text/trainers.inc:2024 Route119_Text_CatherineRematchIntro (+1 aliases)
	.globl gText_Rom_25EA3D
gText_Rom_25EA3D: @ 0x0825EA3D
	.string "ポケモンと いっしょの ぼうけんは\nうまく いってるかしら?$"
	.if (. - gText_Rom_25EA3D) > 0x1f
	.error "gText_Rom_25EA3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EA3D) < 0x1f
	.space 0x1f - (. - gText_Rom_25EA3D)
	.endif

	@ data/text/trainers.inc:2027 Route119_Text_CatherineRematchDefeat (+1 aliases)
	.globl gText_Rom_25EA5C
gText_Rom_25EA5C: @ 0x0825EA5C
	.string "まだ なにかが\nたりなかったわね……$"
	.if (. - gText_Rom_25EA5C) > 0x13
	.error "gText_Rom_25EA5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EA5C) < 0x13
	.space 0x13 - (. - gText_Rom_25EA5C)
	.endif

	@ data/text/trainers.inc:2030 Route119_Text_CatherinePostRematch
	.globl gText_Rom_25EA6F
gText_Rom_25EA6F: @ 0x0825EA6F
	.string "トレーナーの あなたが\nポケモンを たよって いるように\lポケモンも あなたを たよっているのよ!$"
	.if (. - gText_Rom_25EA6F) > 0x32
	.error "gText_Rom_25EA6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EA6F) < 0x32
	.space 0x32 - (. - gText_Rom_25EA6F)
	.endif

	@ data/text/trainers.inc:2033 Route119_Text_HughIntro (+1 aliases)
	.globl gText_Rom_25EAA1
gText_Rom_25EAA1: @ 0x0825EAA1
	.string "おおぞらは おとこの ロマン!\pじゆうに そらを とぶ きもちよさは\nなにごとにも かえがたい!$"
	.if (. - gText_Rom_25EAA1) > 0x31
	.error "gText_Rom_25EAA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EAA1) < 0x31
	.space 0x31 - (. - gText_Rom_25EAA1)
	.endif

	@ data/text/trainers.inc:2036 Route119_Text_HughDefeat (+1 aliases)
	.globl gText_Rom_25EAD2
gText_Rom_25EAD2: @ 0x0825EAD2
	.string "まけたーっ!$"
	.if (. - gText_Rom_25EAD2) > 0x7
	.error "gText_Rom_25EAD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EAD2) < 0x7
	.space 0x7 - (. - gText_Rom_25EAD2)
	.endif

	@ data/text/trainers.inc:2039 Route119_Text_HughPostBattle
	.globl gText_Rom_25EAD9
gText_Rom_25EAD9: @ 0x0825EAD9
	.string "そらを とびまわる ユメは\nとりポケモンの おかげで かなえられたよ!$"
	.if (. - gText_Rom_25EAD9) > 0x24
	.error "gText_Rom_25EAD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EAD9) < 0x24
	.space 0x24 - (. - gText_Rom_25EAD9)
	.endif

	@ data/text/trainers.inc:2042 Route119_Text_PhilIntro (+1 aliases)
	.globl gText_Rom_25EAFD
gText_Rom_25EAFD: @ 0x0825EAFD
	.string "ぼくの とりポケモンの じつりょくを\nみせて あげるよ!$"
	.if (. - gText_Rom_25EAFD) > 0x1d
	.error "gText_Rom_25EAFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EAFD) < 0x1d
	.space 0x1d - (. - gText_Rom_25EAFD)
	.endif

	@ data/text/trainers.inc:2045 Route119_Text_PhilDefeat (+1 aliases)
	.globl gText_Rom_25EB1A
gText_Rom_25EB1A: @ 0x0825EB1A
	.string "じつりょく ぶそく だった……$"
	.if (. - gText_Rom_25EB1A) > 0x10
	.error "gText_Rom_25EB1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EB1A) < 0x10
	.space 0x10 - (. - gText_Rom_25EB1A)
	.endif

	@ data/text/trainers.inc:2048 Route119_Text_PhilPostBattle
	.globl gText_Rom_25EB2A
gText_Rom_25EB2A: @ 0x0825EB2A
	.string "ぼくは ちいさい ころから\nとりポケモンに あこがれて いたんだ!$"
	.if (. - gText_Rom_25EB2A) > 0x22
	.error "gText_Rom_25EB2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EB2A) < 0x22
	.space 0x22 - (. - gText_Rom_25EB2A)
	.endif

	@ data/text/trainers.inc:2051 Route119_Text_YasuIntro (+1 aliases)
	.globl gText_Rom_25EB4C
gText_Rom_25EB4C: @ 0x0825EB4C
	.string "かげに ひそみ やみに いきる\nそれが オレの さだめ……!\lいざ ポケモンしょうぶ!$"
	.if (. - gText_Rom_25EB4C) > 0x2c
	.error "gText_Rom_25EB4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EB4C) < 0x2c
	.space 0x2c - (. - gText_Rom_25EB4C)
	.endif

	@ data/text/trainers.inc:2054 Route119_Text_YasuDefeat (+1 aliases)
	.globl gText_Rom_25EB78
gText_Rom_25EB78: @ 0x0825EB78
	.string "まいった……!$"
	.if (. - gText_Rom_25EB78) > 0x8
	.error "gText_Rom_25EB78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EB78) < 0x8
	.space 0x8 - (. - gText_Rom_25EB78)
	.endif

	@ data/text/trainers.inc:2057 Route119_Text_YasuPostBattle
	.globl gText_Rom_25EB80
gText_Rom_25EB80: @ 0x0825EB80
	.string "しょうぶに やぶれた ものは\nいさぎよく かげに もどる……\lそれも さだめ……$"
	.if (. - gText_Rom_25EB80) > 0x29
	.error "gText_Rom_25EB80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EB80) < 0x29
	.space 0x29 - (. - gText_Rom_25EB80)
	.endif

	@ data/text/trainers.inc:2060 Route119_Text_TakashiIntro (+1 aliases)
	.globl gText_Rom_25EBA9
gText_Rom_25EBA9: @ 0x0825EBA9
	.string "ゆだん してると\nいたい めに あうぜ!$"
	.if (. - gText_Rom_25EBA9) > 0x15
	.error "gText_Rom_25EBA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EBA9) < 0x15
	.space 0x15 - (. - gText_Rom_25EBA9)
	.endif

	@ data/text/trainers.inc:2063 Route119_Text_TakashiDefeat (+1 aliases)
	.globl gText_Rom_25EBBE
gText_Rom_25EBBE: @ 0x0825EBBE
	.string "つよいな きみーっ!$"
	.if (. - gText_Rom_25EBBE) > 0xb
	.error "gText_Rom_25EBBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EBBE) < 0xb
	.space 0xb - (. - gText_Rom_25EBBE)
	.endif

	@ data/text/trainers.inc:2066 Route119_Text_TakashiPostBattle
	.globl gText_Rom_25EBC9
gText_Rom_25EBC9: @ 0x0825EBC9
	.string "きしゅう さくせんは シッパイだった……$"
	.if (. - gText_Rom_25EBC9) > 0x15
	.error "gText_Rom_25EBC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EBC9) < 0x15
	.space 0x15 - (. - gText_Rom_25EBC9)
	.endif

	@ data/text/trainers.inc:2069 Route119_Text_HideoIntro (+1 aliases)
	.globl gText_Rom_25EBDE
gText_Rom_25EBDE: @ 0x0825EBDE
	.string "きを かくすなら もりのなか!$"
	.if (. - gText_Rom_25EBDE) > 0x10
	.error "gText_Rom_25EBDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EBDE) < 0x10
	.space 0x10 - (. - gText_Rom_25EBDE)
	.endif

	@ data/text/trainers.inc:2072 Route119_Text_HideoDefeat (+1 aliases)
	.globl gText_Rom_25EBEE
gText_Rom_25EBEE: @ 0x0825EBEE
	.string "つわもので ござるな$"
	.if (. - gText_Rom_25EBEE) > 0xb
	.error "gText_Rom_25EBEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EBEE) < 0xb
	.space 0xb - (. - gText_Rom_25EBEE)
	.endif

	@ data/text/trainers.inc:2075 Route119_Text_HideoPostBattle
	.globl gText_Rom_25EBF9
gText_Rom_25EBF9: @ 0x0825EBF9
	.string "きを かくすなら もりのなか!\nポケモンを かくすなら ポケモンのなか!\pとくに いみは ないでござる$"
	.if (. - gText_Rom_25EBF9) > 0x34
	.error "gText_Rom_25EBF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EBF9) < 0x34
	.space 0x34 - (. - gText_Rom_25EBF9)
	.endif

	@ data/text/trainers.inc:2078 Route119_Text_ChrisIntro (+1 aliases)
	.globl gText_Rom_25EC2D
gText_Rom_25EC2D: @ 0x0825EC2D
	.string "わたしに はなしかけた……\nつまり しょうぶを いどむ つもりだな!\pよーし! なみのり しながら\nつりあげた ポケモンで たたかうぞ!$"
	.if (. - gText_Rom_25EC2D) > 0x45
	.error "gText_Rom_25EC2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EC2D) < 0x45
	.space 0x45 - (. - gText_Rom_25EC2D)
	.endif

	@ data/text/trainers.inc:2081 Route119_Text_ChrisDefeat (+1 aliases)
	.globl gText_Rom_25EC72
gText_Rom_25EC72: @ 0x0825EC72
	.string "かつための ポイントが\nちっとも わからん!$"
	.if (. - gText_Rom_25EC72) > 0x17
	.error "gText_Rom_25EC72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EC72) < 0x17
	.space 0x17 - (. - gText_Rom_25EC72)
	.endif

	@ data/text/trainers.inc:2084 Route119_Text_ChrisPostBattle
	.globl gText_Rom_25EC89
gText_Rom_25EC89: @ 0x0825EC89
	.string "なみのりを つかう!\pポケモンの せなかに のって\nつりを たのしむ!\pなんて ゆうがな ひととき だろう!$"
	.if (. - gText_Rom_25EC89) > 0x37
	.error "gText_Rom_25EC89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EC89) < 0x37
	.space 0x37 - (. - gText_Rom_25EC89)
	.endif

	@ data/text/trainers.inc:2087 Route119_Text_FabianIntro (+1 aliases)
	.globl gText_Rom_25ECC0
gText_Rom_25ECC0: @ 0x0825ECC0
	.string "デケデケデケデケ\nかつぜーヘ おれたちーヒ かつぜーヘ$"
	.if (. - gText_Rom_25ECC0) > 0x1c
	.error "gText_Rom_25ECC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ECC0) < 0x1c
	.space 0x1c - (. - gText_Rom_25ECC0)
	.endif

	@ data/text/trainers.inc:2090 Route119_Text_FabianDefeat (+1 aliases)
	.globl gText_Rom_25ECDC
gText_Rom_25ECDC: @ 0x0825ECDC
	.string "まけたぜーヘ あっさりーヒ まけたぜーヘ$"
	.if (. - gText_Rom_25ECDC) > 0x15
	.error "gText_Rom_25ECDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ECDC) < 0x15
	.space 0x15 - (. - gText_Rom_25ECDC)
	.endif

	@ data/text/trainers.inc:2093 Route119_Text_FabianPostBattle
	.globl gText_Rom_25ECF1
gText_Rom_25ECF1: @ 0x0825ECF1
	.string "デケデケデケデケ\nにどとーホ おれにーヒ かまうなよーホ$"
	.if (. - gText_Rom_25ECF1) > 0x1d
	.error "gText_Rom_25ECF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ECF1) < 0x1d
	.space 0x1d - (. - gText_Rom_25ECF1)
	.endif

	@ data/text/trainers.inc:2096 Route119_Text_DaytonIntro (+1 aliases)
	.globl gText_Rom_25ED0E
gText_Rom_25ED0E: @ 0x0825ED0E
	.string "ホッホッホー!\nこども トレーナーは だいすきだぞ!\lおじちゃんと たたかおうっ!$"
	.if (. - gText_Rom_25ED0E) > 0x2a
	.error "gText_Rom_25ED0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED0E) < 0x2a
	.space 0x2a - (. - gText_Rom_25ED0E)
	.endif

	@ data/text/trainers.inc:2099 Route119_Text_DaytonDefeat (+1 aliases)
	.globl gText_Rom_25ED38
gText_Rom_25ED38: @ 0x0825ED38
	.string "やるなー ホッホッホ!$"
	.if (. - gText_Rom_25ED38) > 0xc
	.error "gText_Rom_25ED38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED38) < 0xc
	.space 0xc - (. - gText_Rom_25ED38)
	.endif

	@ data/text/trainers.inc:2102 Route119_Text_DaytonPostBattle
	.globl gText_Rom_25ED44
gText_Rom_25ED44: @ 0x0825ED44
	.string "ホッホッホー!\nこども トレーナーの げんきを\lみならって おじちゃん がんばるぞ!$"
	.if (. - gText_Rom_25ED44) > 0x2b
	.error "gText_Rom_25ED44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED44) < 0x2b
	.space 0x2b - (. - gText_Rom_25ED44)
	.endif

	@ data/text/trainers.inc:2105 Route119_Text_RachelIntro (+1 aliases)
	.globl gText_Rom_25ED6F
gText_Rom_25ED6F: @ 0x0825ED6F
	.string "いつでも どこでも\nパラソルを てばなさないの!$"
	.if (. - gText_Rom_25ED6F) > 0x19
	.error "gText_Rom_25ED6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED6F) < 0x19
	.space 0x19 - (. - gText_Rom_25ED6F)
	.endif

	@ data/text/trainers.inc:2108 Route119_Text_RachelDefeat (+1 aliases)
	.globl gText_Rom_25ED88
gText_Rom_25ED88: @ 0x0825ED88
	.string "いやん そんなあ$"
	.if (. - gText_Rom_25ED88) > 0x9
	.error "gText_Rom_25ED88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED88) < 0x9
	.space 0x9 - (. - gText_Rom_25ED88)
	.endif

	@ data/text/trainers.inc:2111 Route119_Text_RachelPostBattle
	.globl gText_Rom_25ED91
gText_Rom_25ED91: @ 0x0825ED91
	.string "パラソルが おもく ないかって?\nキミの バッグの ほうが\lいっぱい はいってるじゃない$"
	.if (. - gText_Rom_25ED91) > 0x2d
	.error "gText_Rom_25ED91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED91) < 0x2d
	.space 0x2d - (. - gText_Rom_25ED91)
	.endif

	@ data/text/trainers.inc:2114 Route120_Text_ColinIntro (+1 aliases)
	.globl gText_Rom_25EDBE
gText_Rom_25EDBE: @ 0x0825EDBE
	.string "そらを とんでいる ポケモンに\nダメージを あたえる ワザを もってる?$"
	.if (. - gText_Rom_25EDBE) > 0x25
	.error "gText_Rom_25EDBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EDBE) < 0x25
	.space 0x25 - (. - gText_Rom_25EDBE)
	.endif

	@ data/text/trainers.inc:2117 Route120_Text_ColinDefeat (+1 aliases)
	.globl gText_Rom_25EDE3
gText_Rom_25EDE3: @ 0x0825EDE3
	.string "キミの ほうが\nいちまい うわて だった!$"
	.if (. - gText_Rom_25EDE3) > 0x16
	.error "gText_Rom_25EDE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EDE3) < 0x16
	.space 0x16 - (. - gText_Rom_25EDE3)
	.endif

	@ data/text/trainers.inc:2120 Route120_Text_ColinPostBattle
	.globl gText_Rom_25EDF9
gText_Rom_25EDF9: @ 0x0825EDF9
	.string "そらをとぶ って ワザは べんりだな!\pそらを とんでいる あいだは\nほとんどの ワザが あたらないだろ?$"
	.if (. - gText_Rom_25EDF9) > 0x36
	.error "gText_Rom_25EDF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EDF9) < 0x36
	.space 0x36 - (. - gText_Rom_25EDF9)
	.endif

	@ data/text/trainers.inc:2123 Route120_Text_RobertIntro (+1 aliases)
	.globl gText_Rom_25EE2F
gText_Rom_25EE2F: @ 0x0825EE2F
	.string "ボクの ポケモンは つよいぜ!\nキミの ポケモンは どうかな?$"
	.if (. - gText_Rom_25EE2F) > 0x20
	.error "gText_Rom_25EE2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EE2F) < 0x20
	.space 0x20 - (. - gText_Rom_25EE2F)
	.endif

	@ data/text/trainers.inc:2126 Route120_Text_RobertDefeat (+1 aliases)
	.globl gText_Rom_25EE4F
gText_Rom_25EE4F: @ 0x0825EE4F
	.string "キミの ポケモンの ほうが\nつよかった……!$"
	.if (. - gText_Rom_25EE4F) > 0x17
	.error "gText_Rom_25EE4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EE4F) < 0x17
	.space 0x17 - (. - gText_Rom_25EE4F)
	.endif

	@ data/text/trainers.inc:2129 Route120_Text_RobertPostBattle (+1 aliases)
	.globl gText_Rom_25EE66
gText_Rom_25EE66: @ 0x0825EE66
	.string "どんどん つよくなる ポケモンは\nほんと たよりに なるよなー!$"
	.if (. - gText_Rom_25EE66) > 0x21
	.error "gText_Rom_25EE66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EE66) < 0x21
	.space 0x21 - (. - gText_Rom_25EE66)
	.endif

	@ data/text/trainers.inc:2132 Route120_Text_RobertRegister
	.globl gText_Rom_25EE87
gText_Rom_25EE87: @ 0x0825EE87
	.string "キミって きたい できそうだなー!\nポケナビに とうろく しておきたい!$"
	.if (. - gText_Rom_25EE87) > 0x25
	.error "gText_Rom_25EE87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EE87) < 0x25
	.space 0x25 - (. - gText_Rom_25EE87)
	.endif

	@ data/text/trainers.inc:2129 Route120_Text_RobertPostBattle (+2 aliases)
	.globl gText_Rom_25EEAC
gText_Rom_25EEAC: @ 0x0825EEAC
	.string "どんどん つよくなる ポケモンは\nほんと たよりに なるよなー!$"
	.if (. - gText_Rom_25EEAC) > 0x21
	.error "gText_Rom_25EEAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EEAC) < 0x21
	.space 0x21 - (. - gText_Rom_25EEAC)
	.endif

	@ data/text/trainers.inc:2138 Route120_Text_RobertRematchDefeat (+1 aliases)
	.globl gText_Rom_25EECD
gText_Rom_25EECD: @ 0x0825EECD
	.string "キミの ポケモン\nほんとうに つよいんだな……$"
	.if (. - gText_Rom_25EECD) > 0x18
	.error "gText_Rom_25EECD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EECD) < 0x18
	.space 0x18 - (. - gText_Rom_25EECD)
	.endif

	@ data/text/trainers.inc:2141 Route120_Text_RobertPostRematch
	.globl gText_Rom_25EEE5
gText_Rom_25EEE5: @ 0x0825EEE5
	.string "ポケモンが つよくなるのと いっしょに\nおれも つよくならないとなー!$"
	.if (. - gText_Rom_25EEE5) > 0x24
	.error "gText_Rom_25EEE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EEE5) < 0x24
	.space 0x24 - (. - gText_Rom_25EEE5)
	.endif

	@ data/text/trainers.inc:2144 Route120_Text_LorenzoIntro (+1 aliases)
	.globl gText_Rom_25EF09
gText_Rom_25EF09: @ 0x0825EF09
	.string "きみの ポケモン\nそうなん しないか みてあげよう!$"
	.if (. - gText_Rom_25EF09) > 0x1b
	.error "gText_Rom_25EF09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EF09) < 0x1b
	.space 0x1b - (. - gText_Rom_25EF09)
	.endif

	@ data/text/trainers.inc:2147 Route120_Text_LorenzoDefeat (+1 aliases)
	.globl gText_Rom_25EF24
gText_Rom_25EF24: @ 0x0825EF24
	.string "そんなに つよい ポケモンと いっしょなら\nそうなんの おそれは ないな!$"
	.if (. - gText_Rom_25EF24) > 0x26
	.error "gText_Rom_25EF24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EF24) < 0x26
	.space 0x26 - (. - gText_Rom_25EF24)
	.endif

	@ data/text/trainers.inc:2150 Route120_Text_LorenzoPostBattle
	.globl gText_Rom_25EF4A
gText_Rom_25EF4A: @ 0x0825EF4A
	.string "ポケモンと いっしょに どこまでもいく\nトレーナーの よろこびと いえるだろう!$"
	.if (. - gText_Rom_25EF4A) > 0x29
	.error "gText_Rom_25EF4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EF4A) < 0x29
	.space 0x29 - (. - gText_Rom_25EF4A)
	.endif

	@ data/text/trainers.inc:2153 Route120_Text_JennaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25EF73
gText_Rom_25EF73: @ 0x0825EF73
	.string "あなたの たいりょく どう?\nたいりょく ぶそくだと\lいざと いうとき こまるわよ!$"
	.if (. - gText_Rom_25EF73) != 0x2b
	.error "gText_Rom_25EF73 must retain its original byte length"
	.endif
	.globl gText_Rom_25EF9A
	.set gText_Rom_25EF9A, gText_Rom_25EF73 + 0x27

	@ data/text/trainers.inc:2156 Route120_Text_JennaDefeat (+1 aliases)
	.globl gText_Rom_25EF9E
gText_Rom_25EF9E: @ 0x0825EF9E
	.string "たいりょく だけは あったのに……$"
	.if (. - gText_Rom_25EF9E) > 0x12
	.error "gText_Rom_25EF9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EF9E) < 0x12
	.space 0x12 - (. - gText_Rom_25EF9E)
	.endif

	@ data/text/trainers.inc:2159 Route120_Text_JennaPostBattle
	.globl gText_Rom_25EFB0
gText_Rom_25EFB0: @ 0x0825EFB0
	.string "たいりょく づくりが わたしの にっか\nまいにち ポケモンと ランニングよ!$"
	.if (. - gText_Rom_25EFB0) > 0x27
	.error "gText_Rom_25EFB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EFB0) < 0x27
	.space 0x27 - (. - gText_Rom_25EFB0)
	.endif

	@ data/text/trainers.inc:2162 Route120_Text_JeffreyIntro (+1 aliases)
	.globl gText_Rom_25EFD7
gText_Rom_25EFD7: @ 0x0825EFD7
	.string "…… …… ……\n…… …… ……\lしょうぶ する……?$"
	.if (. - gText_Rom_25EFD7) > 0x1d
	.error "gText_Rom_25EFD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EFD7) < 0x1d
	.space 0x1d - (. - gText_Rom_25EFD7)
	.endif

	@ data/text/trainers.inc:2165 Route120_Text_JeffreyDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25EFF4
gText_Rom_25EFF4: @ 0x0825EFF4
	.string "…… …… ……\nまけた……$"
	.if (. - gText_Rom_25EFF4) != 0xf
	.error "gText_Rom_25EFF4 must retain its original byte length"
	.endif
	.globl gText_Rom_25EFFD
	.set gText_Rom_25EFFD, gText_Rom_25EFF4 + 0x9

	@ data/text/trainers.inc:2168 Route120_Text_JeffreyPostBattle
	.globl gText_Rom_25F003
gText_Rom_25F003: @ 0x0825F003
	.string "…… …… ……\n…… …… ……\lがんばろう……$"
	.if (. - gText_Rom_25F003) > 0x1a
	.error "gText_Rom_25F003 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F003) < 0x1a
	.space 0x1a - (. - gText_Rom_25F003)
	.endif

	@ data/text/trainers.inc:2171 Route120_Text_JeffreyRegister
	.globl gText_Rom_25F01D
gText_Rom_25F01D: @ 0x0825F01D
	.string "…… …… ……\n…… …… ……\lポケナビ もってる……?$"
	.if (. - gText_Rom_25F01D) > 0x1f
	.error "gText_Rom_25F01D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F01D) < 0x1f
	.space 0x1f - (. - gText_Rom_25F01D)
	.endif

	@ data/text/trainers.inc:2174 Route120_Text_JeffreyRematchIntro (+1 aliases)
	.globl gText_Rom_25F03C
gText_Rom_25F03C: @ 0x0825F03C
	.string "…… …… ……\n…… …… ……\lまた しょうぶ する……?$"
	.if (. - gText_Rom_25F03C) > 0x20
	.error "gText_Rom_25F03C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F03C) < 0x20
	.space 0x20 - (. - gText_Rom_25F03C)
	.endif

	@ data/text/trainers.inc:2177 Route120_Text_JeffreyRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25F05C
gText_Rom_25F05C: @ 0x0825F05C
	.string "…… …… ……\nまた まけた……$"
	.if (. - gText_Rom_25F05C) != 0x12
	.error "gText_Rom_25F05C must retain its original byte length"
	.endif
	.globl gText_Rom_25F068
	.set gText_Rom_25F068, gText_Rom_25F05C + 0xc

	@ data/text/trainers.inc:2180 Route120_Text_JeffreyPostRematch
	.globl gText_Rom_25F06E
gText_Rom_25F06E: @ 0x0825F06E
	.string "…… …… ……\n…… …… ……\lまた がんばろう……\lだいじな むしポケモンの ために……$"
	.if (. - gText_Rom_25F06E) > 0x30
	.error "gText_Rom_25F06E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F06E) < 0x30
	.space 0x30 - (. - gText_Rom_25F06E)
	.endif

	@ data/text/trainers.inc:2183 Route120_Text_JenniferIntro (+1 aliases)
	.globl gText_Rom_25F09E
gText_Rom_25F09E: @ 0x0825F09E
	.string "ポケモンには いろんな とくせいが ある\nそれを かんがえてこそ\lいちりゅうの トレーナーに なれるのよ!$"
	.if (. - gText_Rom_25F09E) > 0x36
	.error "gText_Rom_25F09E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F09E) < 0x36
	.space 0x36 - (. - gText_Rom_25F09E)
	.endif

	@ data/text/trainers.inc:2186 Route120_Text_JenniferDefeat (+1 aliases)
	.globl gText_Rom_25F0D4
gText_Rom_25F0D4: @ 0x0825F0D4
	.string "なかなか かんがえてるのね$"
	.if (. - gText_Rom_25F0D4) > 0xe
	.error "gText_Rom_25F0D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F0D4) < 0xe
	.space 0xe - (. - gText_Rom_25F0D4)
	.endif

	@ data/text/trainers.inc:2189 Route120_Text_JenniferPostBattle
	.globl gText_Rom_25F0E2
gText_Rom_25F0E2: @ 0x0825F0E2
	.string "そう ポケモンの とくせいに よって\nたたかいかたも いろいろ かわってくるわ!$"
	.if (. - gText_Rom_25F0E2) > 0x29
	.error "gText_Rom_25F0E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F0E2) < 0x29
	.space 0x29 - (. - gText_Rom_25F0E2)
	.endif

	@ data/text/trainers.inc:2192 Route120_Text_ChipIntro (+1 aliases)
	.globl gText_Rom_25F10B
gText_Rom_25F10B: @ 0x0825F10B
	.string "なんだね きみは?\pもしかして ひょっとすると\nあるかもしれない といわれる\lこだいの いせきを さがしに きたのかね!?$"
	.if (. - gText_Rom_25F10B) > 0x3e
	.error "gText_Rom_25F10B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F10B) < 0x3e
	.space 0x3e - (. - gText_Rom_25F10B)
	.endif

	@ data/text/trainers.inc:2195 Route120_Text_ChipDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25F149
gText_Rom_25F149: @ 0x0825F149
	.string "まいったね こりゃ$"
	.if (. - gText_Rom_25F149) != 0xa
	.error "gText_Rom_25F149 must retain its original byte length"
	.endif
	.globl gText_Rom_25F14F
	.set gText_Rom_25F14F, gText_Rom_25F149 + 0x6

	@ data/text/trainers.inc:2198 Route120_Text_ChipPostBattle
	.globl gText_Rom_25F153
gText_Rom_25F153: @ 0x0825F153
	.string "あの おおきな いわ\nわたしは いせき だと おもいたいが\lそれにしては いりぐちが ないね……$"
	.if (. - gText_Rom_25F153) > 0x31
	.error "gText_Rom_25F153 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F153) < 0x31
	.space 0x31 - (. - gText_Rom_25F153)
	.endif

	@ data/text/trainers.inc:2201 Route120_Text_ClarissaIntro (+1 aliases)
	.globl gText_Rom_25F184
gText_Rom_25F184: @ 0x0825F184
	.string "あたしが パラソルを もってる りゆう?\pうふふ あたしに かてたら\nおしえて あげても いいかな?$"
	.if (. - gText_Rom_25F184) > 0x33
	.error "gText_Rom_25F184 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F184) < 0x33
	.space 0x33 - (. - gText_Rom_25F184)
	.endif

	@ data/text/trainers.inc:2204 Route120_Text_ClarissaDefeat (+1 aliases)
	.globl gText_Rom_25F1B7
gText_Rom_25F1B7: @ 0x0825F1B7
	.string "パラソルで ポケモンの こうげきは\nしのげないのね……$"
	.if (. - gText_Rom_25F1B7) > 0x1c
	.error "gText_Rom_25F1B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F1B7) < 0x1c
	.space 0x1c - (. - gText_Rom_25F1B7)
	.endif

	@ data/text/trainers.inc:2207 Route120_Text_ClarissaPostBattle
	.globl gText_Rom_25F1D3
gText_Rom_25F1D3: @ 0x0825F1D3
	.string "あたしの ポケモンたちも\nあつい ひざしは にがてだと おもうの\lだから こうして パラソルを もってるのよ$"
	.if (. - gText_Rom_25F1D3) > 0x37
	.error "gText_Rom_25F1D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F1D3) < 0x37
	.space 0x37 - (. - gText_Rom_25F1D3)
	.endif

	@ data/text/trainers.inc:2210 Route120_Text_AngelicaIntro (+1 aliases)
	.globl gText_Rom_25F20A
gText_Rom_25F20A: @ 0x0825F20A
	.string "あたしと ポケモンと パラソル\nどれか ひとつ かけていても\lうつくしさが そこなわれるんだわ$"
	.if (. - gText_Rom_25F20A) > 0x30
	.error "gText_Rom_25F20A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F20A) < 0x30
	.space 0x30 - (. - gText_Rom_25F20A)
	.endif

	@ data/text/trainers.inc:2213 Route120_Text_AngelicaDefeat (+1 aliases)
	.globl gText_Rom_25F23A
gText_Rom_25F23A: @ 0x0825F23A
	.string "うつくしさが\nだいなしに なっちゃったわ$"
	.if (. - gText_Rom_25F23A) > 0x15
	.error "gText_Rom_25F23A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F23A) < 0x15
	.space 0x15 - (. - gText_Rom_25F23A)
	.endif

	@ data/text/trainers.inc:2216 Route120_Text_AngelicaPostBattle
	.globl gText_Rom_25F24F
gText_Rom_25F24F: @ 0x0825F24F
	.string "あなたに パラソルは にあわないわ!\pだって こんなの もっていたら\nすっごく ジャマに なりそう なんだもの$"
	.if (. - gText_Rom_25F24F) > 0x38
	.error "gText_Rom_25F24F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F24F) < 0x38
	.space 0x38 - (. - gText_Rom_25F24F)
	.endif

	@ data/text/trainers.inc:2219 Route120_Text_KeigoIntro (+1 aliases)
	.globl gText_Rom_25F287
gText_Rom_25F287: @ 0x0825F287
	.string "ポケモンの うごきを とりいれて\nあたらしい にんぽうを あみだすんだ!$"
	.if (. - gText_Rom_25F287) > 0x25
	.error "gText_Rom_25F287 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F287) < 0x25
	.space 0x25 - (. - gText_Rom_25F287)
	.endif

	@ data/text/trainers.inc:2222 Route120_Text_KeigoDefeat (+1 aliases)
	.globl gText_Rom_25F2AC
gText_Rom_25F2AC: @ 0x0825F2AC
	.string "あたらしい にんぽう\nかんせいまで まだまだ かかりそうだ$"
	.if (. - gText_Rom_25F2AC) > 0x1e
	.error "gText_Rom_25F2AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F2AC) < 0x1e
	.space 0x1e - (. - gText_Rom_25F2AC)
	.endif

	@ data/text/trainers.inc:2225 Route120_Text_KeigoPostBattle
	.globl gText_Rom_25F2CA
gText_Rom_25F2CA: @ 0x0825F2CA
	.string "ニンジャの せんせいを さがして\nでしいり しようかな?$"
	.if (. - gText_Rom_25F2CA) > 0x1d
	.error "gText_Rom_25F2CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F2CA) < 0x1d
	.space 0x1d - (. - gText_Rom_25F2CA)
	.endif

	@ data/text/trainers.inc:2228 Route120_Text_RileyIntro (+1 aliases)
	.globl gText_Rom_25F2E7
gText_Rom_25F2E7: @ 0x0825F2E7
	.string "ぼくたち ニンジャごっこの かくれぬの!\nどこに いるのか わからなかっただろ!$"
	.if (. - gText_Rom_25F2E7) > 0x29
	.error "gText_Rom_25F2E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F2E7) < 0x29
	.space 0x29 - (. - gText_Rom_25F2E7)
	.endif

	@ data/text/trainers.inc:2231 Route120_Text_RileyDefeat (+1 aliases)
	.globl gText_Rom_25F310
gText_Rom_25F310: @ 0x0825F310
	.string "まけた!\nかくれぬので かくれるか?$"
	.if (. - gText_Rom_25F310) > 0x13
	.error "gText_Rom_25F310 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F310) < 0x13
	.space 0x13 - (. - gText_Rom_25F310)
	.endif

	@ data/text/trainers.inc:2234 Route120_Text_RileyPostBattle
	.globl gText_Rom_25F323
gText_Rom_25F323: @ 0x0825F323
	.string "ぼくたち ニンジャごっこの かくれぬの!\nこれって てづくり なんだぜ!$"
	.if (. - gText_Rom_25F323) > 0x25
	.error "gText_Rom_25F323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F323) < 0x25
	.space 0x25 - (. - gText_Rom_25F323)
	.endif

	@ data/text/trainers.inc:2237 Route120_Text_CallieIntro (+1 aliases)
	.globl gText_Rom_25F348
gText_Rom_25F348: @ 0x0825F348
	.string "よそみ してると ケガするよ!$"
	.if (. - gText_Rom_25F348) > 0x10
	.error "gText_Rom_25F348 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F348) < 0x10
	.space 0x10 - (. - gText_Rom_25F348)
	.endif

	@ data/text/trainers.inc:2240 Route120_Text_CallieDefeat (+1 aliases)
	.globl gText_Rom_25F358
gText_Rom_25F358: @ 0x0825F358
	.string "いたいめに あったのは あたしのほうか$"
	.if (. - gText_Rom_25F358) > 0x14
	.error "gText_Rom_25F358 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F358) < 0x14
	.space 0x14 - (. - gText_Rom_25F358)
	.endif

	@ data/text/trainers.inc:2243 Route120_Text_CalliePostBattle
	.globl gText_Rom_25F36C
gText_Rom_25F36C: @ 0x0825F36C
	.string "やっぱり しんか させようかな?\nこのままでも かわいい けど$"
	.if (. - gText_Rom_25F36C) > 0x20
	.error "gText_Rom_25F36C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F36C) < 0x20
	.space 0x20 - (. - gText_Rom_25F36C)
	.endif

	@ data/text/trainers.inc:2246 Route120_Text_LeonelIntro (+1 aliases)
	.globl gText_Rom_25F38C
gText_Rom_25F38C: @ 0x0825F38C
	.string "きみの てもち ポケモン\nいろんな タイプが そろって いるか?$"
	.if (. - gText_Rom_25F38C) > 0x21
	.error "gText_Rom_25F38C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F38C) < 0x21
	.space 0x21 - (. - gText_Rom_25F38C)
	.endif

	@ data/text/trainers.inc:2249 Route120_Text_LeonelDefeat (+1 aliases)
	.globl gText_Rom_25F3AD
gText_Rom_25F3AD: @ 0x0825F3AD
	.string "きみの こだわり みせてもらったよ!$"
	.if (. - gText_Rom_25F3AD) > 0x13
	.error "gText_Rom_25F3AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F3AD) < 0x13
	.space 0x13 - (. - gText_Rom_25F3AD)
	.endif

	@ data/text/trainers.inc:2252 Route120_Text_LeonelPostBattle
	.globl gText_Rom_25F3C0
gText_Rom_25F3C0: @ 0x0825F3C0
	.string "すきな ポケモン だけで\nつよいって いうのが さいこうだね$"
	.if (. - gText_Rom_25F3C0) > 0x1f
	.error "gText_Rom_25F3C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F3C0) < 0x1f
	.space 0x1f - (. - gText_Rom_25F3C0)
	.endif

	@ data/text/trainers.inc:2255 Route121_Text_VanessaIntro (+1 aliases)
	.globl gText_Rom_25F3DF
gText_Rom_25F3DF: @ 0x0825F3DF
	.string "あたしの とっても プリティな\nポケモンを かわいがってよ!$"
	.if (. - gText_Rom_25F3DF) > 0x1f
	.error "gText_Rom_25F3DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F3DF) < 0x1f
	.space 0x1f - (. - gText_Rom_25F3DF)
	.endif

	@ data/text/trainers.inc:2258 Route121_Text_VanessaDefeat (+1 aliases)
	.globl gText_Rom_25F3FE
gText_Rom_25F3FE: @ 0x0825F3FE
	.string "かわいがるの いみが ちがうわ!$"
	.if (. - gText_Rom_25F3FE) > 0x11
	.error "gText_Rom_25F3FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F3FE) < 0x11
	.space 0x11 - (. - gText_Rom_25F3FE)
	.endif

	@ data/text/trainers.inc:2261 Route121_Text_VanessaPostBattle
	.globl gText_Rom_25F40F
gText_Rom_25F40F: @ 0x0825F40F
	.string "ミナモの コンテストに いくのよ\nあたしの ポケモンなら\lマスター ランクでも らくしょうよ!$"
	.if (. - gText_Rom_25F40F) > 0x30
	.error "gText_Rom_25F40F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F40F) < 0x30
	.space 0x30 - (. - gText_Rom_25F40F)
	.endif

	@ data/text/trainers.inc:2264 Route121_Text_WalterIntro (+2 aliases)
	.globl gText_Rom_25F43F
gText_Rom_25F43F: @ 0x0825F43F
	.string "せかい かっこくを\nポケモンと いっしょに まわってきた\pすこしは うでに じしんが ありますよ!$"
	.if (. - gText_Rom_25F43F) > 0x32
	.error "gText_Rom_25F43F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F43F) < 0x32
	.space 0x32 - (. - gText_Rom_25F43F)
	.endif

	@ data/text/trainers.inc:2267 Route121_Text_WalterDefeat (+1 aliases)
	.globl gText_Rom_25F471
gText_Rom_25F471: @ 0x0825F471
	.string "おみごと ですな$"
	.if (. - gText_Rom_25F471) > 0x9
	.error "gText_Rom_25F471 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F471) < 0x9
	.space 0x9 - (. - gText_Rom_25F471)
	.endif

	@ data/text/trainers.inc:2270 Route121_Text_WalterPostBattle
	.globl gText_Rom_25F47A
gText_Rom_25F47A: @ 0x0825F47A
	.string "また ポケモンと いっしょに\nせかいを まわってみたい ものです$"
	.if (. - gText_Rom_25F47A) > 0x21
	.error "gText_Rom_25F47A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F47A) < 0x21
	.space 0x21 - (. - gText_Rom_25F47A)
	.endif

	@ data/text/trainers.inc:2273 Route121_Text_WalterRegister
	.globl gText_Rom_25F49B
gText_Rom_25F49B: @ 0x0825F49B
	.string "あなたの うでまえは たいしたものだ\nぜひ きねんに とうろくを……$"
	.if (. - gText_Rom_25F49B) > 0x23
	.error "gText_Rom_25F49B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F49B) < 0x23
	.space 0x23 - (. - gText_Rom_25F49B)
	.endif

	@ data/text/trainers.inc:2264 Route121_Text_WalterIntro (+2 aliases)
	.globl gText_Rom_25F4BE
gText_Rom_25F4BE: @ 0x0825F4BE
	.string "せかい かっこくを\nポケモンと いっしょに まわってきた\pすこしは うでに じしんが ありますよ!$"
	.if (. - gText_Rom_25F4BE) > 0x32
	.error "gText_Rom_25F4BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F4BE) < 0x32
	.space 0x32 - (. - gText_Rom_25F4BE)
	.endif

	@ data/text/trainers.inc:2279 Route121_Text_WalterRematchDefeat (+1 aliases)
	.globl gText_Rom_25F4F0
gText_Rom_25F4F0: @ 0x0825F4F0
	.string "おみごと ですな!$"
	.if (. - gText_Rom_25F4F0) > 0xa
	.error "gText_Rom_25F4F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F4F0) < 0xa
	.space 0xa - (. - gText_Rom_25F4F0)
	.endif

	@ data/text/trainers.inc:2282 Route121_Text_WalterPostRematch
	.globl gText_Rom_25F4FA
gText_Rom_25F4FA: @ 0x0825F4FA
	.string "あなたと その ポケモンなら\nがいこくでも つよいと いわれるでしょう!$"
	.if (. - gText_Rom_25F4FA) > 0x25
	.error "gText_Rom_25F4FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F4FA) < 0x25
	.space 0x25 - (. - gText_Rom_25F4FA)
	.endif

	@ data/text/trainers.inc:2285 Route121_Text_TammyIntro (+1 aliases)
	.globl gText_Rom_25F51F
gText_Rom_25F51F: @ 0x0825F51F
	.string "よの なかには ふしぎな ちからが\nいっぱい あるの……$"
	.if (. - gText_Rom_25F51F) > 0x1d
	.error "gText_Rom_25F51F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F51F) < 0x1d
	.space 0x1d - (. - gText_Rom_25F51F)
	.endif

	@ data/text/trainers.inc:2288 Route121_Text_TammyDefeat (+1 aliases)
	.globl gText_Rom_25F53C
gText_Rom_25F53C: @ 0x0825F53C
	.string "あたし まけたのね……$"
	.if (. - gText_Rom_25F53C) > 0xc
	.error "gText_Rom_25F53C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F53C) < 0xc
	.space 0xc - (. - gText_Rom_25F53C)
	.endif

	@ data/text/trainers.inc:2291 Route121_Text_TammyPostBattle
	.globl gText_Rom_25F548
gText_Rom_25F548: @ 0x0825F548
	.string "おくりびやま……\nあそこに ふしぎな ちからが あるの……$"
	.if (. - gText_Rom_25F548) > 0x1e
	.error "gText_Rom_25F548 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F548) < 0x1e
	.space 0x1e - (. - gText_Rom_25F548)
	.endif

	@ data/text/trainers.inc:2294 Route121_Text_KateIntro (+1 aliases)
	.globl gText_Rom_25F566
gText_Rom_25F566: @ 0x0825F566
	.string "マナ『ふたり そろえば こわいもの なし!\nあたしたちの つよさ みせつけちゃうから!$"
	.if (. - gText_Rom_25F566) > 0x2c
	.error "gText_Rom_25F566 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F566) < 0x2c
	.space 0x2c - (. - gText_Rom_25F566)
	.endif

	@ data/text/trainers.inc:2297 Route121_Text_KateDefeat (+1 aliases)
	.globl gText_Rom_25F592
gText_Rom_25F592: @ 0x0825F592
	.string "マナ『コウハイの まえで かっこわるいわ……$"
	.if (. - gText_Rom_25F592) > 0x17
	.error "gText_Rom_25F592 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F592) < 0x17
	.space 0x17 - (. - gText_Rom_25F592)
	.endif

	@ data/text/trainers.inc:2300 Route121_Text_KatePostBattle
	.globl gText_Rom_25F5A9
gText_Rom_25F5A9: @ 0x0825F5A9
	.string "マナ『あたしって たよられちゃうと\nつい かっこいい ところ\lみせたく なっちゃうのよね……$"
	.if (. - gText_Rom_25F5A9) > 0x2f
	.error "gText_Rom_25F5A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F5A9) < 0x2f
	.space 0x2f - (. - gText_Rom_25F5A9)
	.endif

	@ data/text/trainers.inc:2303 Route121_Text_KateNotEnoughMons (+1 aliases)
	.globl gText_Rom_25F5D8
gText_Rom_25F5D8: @ 0x0825F5D8
	.string "マナ『ポケモン 1ぴき しか いないのね\nじゃあ しょうぶは できないわ!\pだって よわいもの いじめに なるもの$"
	.if (. - gText_Rom_25F5D8) > 0x3a
	.error "gText_Rom_25F5D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F5D8) < 0x3a
	.space 0x3a - (. - gText_Rom_25F5D8)
	.endif

	@ data/text/trainers.inc:2306 Route121_Text_JoyIntro (+1 aliases)
	.globl gText_Rom_25F612
gText_Rom_25F612: @ 0x0825F612
	.string "ユイ『ふたり そろえば こわいもの なし!\nあたしたちの つよさ みせつけちゃうから!$"
	.if (. - gText_Rom_25F612) > 0x2c
	.error "gText_Rom_25F612 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F612) < 0x2c
	.space 0x2c - (. - gText_Rom_25F612)
	.endif

	@ data/text/trainers.inc:2309 Route121_Text_JoyDefeat (+1 aliases)
	.globl gText_Rom_25F63E
gText_Rom_25F63E: @ 0x0825F63E
	.string "ユイ『センパイ ごめんなさーい$"
	.if (. - gText_Rom_25F63E) > 0x10
	.error "gText_Rom_25F63E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F63E) < 0x10
	.space 0x10 - (. - gText_Rom_25F63E)
	.endif

	@ data/text/trainers.inc:2312 Route121_Text_JoyPostBattle
	.globl gText_Rom_25F64E
gText_Rom_25F64E: @ 0x0825F64E
	.string "ユイ『えへっ!\nまた センパイと いっしょに とっくんね!$"
	.if (. - gText_Rom_25F64E) > 0x1e
	.error "gText_Rom_25F64E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F64E) < 0x1e
	.space 0x1e - (. - gText_Rom_25F64E)
	.endif

	@ data/text/trainers.inc:2315 Route121_Text_JoyNotEnoughMons (+1 aliases)
	.globl gText_Rom_25F66C
gText_Rom_25F66C: @ 0x0825F66C
	.string "ユイ『あたしたちに しょうぶを いどむなら\nポケモン 2ひきは ひつよう だからね!$"
	.if (. - gText_Rom_25F66C) > 0x2b
	.error "gText_Rom_25F66C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F66C) < 0x2b
	.space 0x2b - (. - gText_Rom_25F66C)
	.endif

	@ data/text/trainers.inc:2318 Route121_Text_JessicaIntro (+1 aliases)
	.globl gText_Rom_25F697
gText_Rom_25F697: @ 0x0825F697
	.string "あたくしの だいじな ポケモン\nちょっと みなさいよ!$"
	.if (. - gText_Rom_25F697) > 0x1c
	.error "gText_Rom_25F697 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F697) < 0x1c
	.space 0x1c - (. - gText_Rom_25F697)
	.endif

	@ data/text/trainers.inc:2321 Route121_Text_JessicaDefeat (+1 aliases)
	.globl gText_Rom_25F6B3
gText_Rom_25F6B3: @ 0x0825F6B3
	.string "ぷんぷん!\nなによ ほんき だしちゃって!$"
	.if (. - gText_Rom_25F6B3) > 0x16
	.error "gText_Rom_25F6B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F6B3) < 0x16
	.space 0x16 - (. - gText_Rom_25F6B3)
	.endif

	@ data/text/trainers.inc:2324 Route121_Text_JessicaPostBattle (+1 aliases)
	.globl gText_Rom_25F6C9
gText_Rom_25F6C9: @ 0x0825F6C9
	.string "サファリで あたらしい ポケモン\nつかまえようかな?$"
	.if (. - gText_Rom_25F6C9) > 0x1b
	.error "gText_Rom_25F6C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F6C9) < 0x1b
	.space 0x1b - (. - gText_Rom_25F6C9)
	.endif

	@ data/text/trainers.inc:2327 Route121_Text_JessicaRegister
	.globl gText_Rom_25F6E4
gText_Rom_25F6E4: @ 0x0825F6E4
	.string "きょうは てかげん してあげたのよ\nつぎは こうは いかないからね!$"
	.if (. - gText_Rom_25F6E4) > 0x23
	.error "gText_Rom_25F6E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F6E4) < 0x23
	.space 0x23 - (. - gText_Rom_25F6E4)
	.endif

	@ data/text/trainers.inc:2330 Route121_Text_JessicaRematchIntro (+1 aliases)
	.globl gText_Rom_25F707
gText_Rom_25F707: @ 0x0825F707
	.string "だいじな ポケモン そだったのよ!\nちょっと みていきなさいよ!$"
	.if (. - gText_Rom_25F707) > 0x21
	.error "gText_Rom_25F707 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F707) < 0x21
	.space 0x21 - (. - gText_Rom_25F707)
	.endif

	@ data/text/trainers.inc:2333 Route121_Text_JessicaRematchDefeat (+1 aliases)
	.globl gText_Rom_25F728
gText_Rom_25F728: @ 0x0825F728
	.string "ぷんぷん!\nまた てかげん してくれないのね!$"
	.if (. - gText_Rom_25F728) > 0x18
	.error "gText_Rom_25F728 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F728) < 0x18
	.space 0x18 - (. - gText_Rom_25F728)
	.endif

	@ data/text/trainers.inc:2324 Route121_Text_JessicaPostBattle (+1 aliases)
	.globl gText_Rom_25F740
gText_Rom_25F740: @ 0x0825F740
	.string "サファリで あたらしい ポケモン\nつかまえようかな?$"
	.if (. - gText_Rom_25F740) > 0x1b
	.error "gText_Rom_25F740 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F740) < 0x1b
	.space 0x1b - (. - gText_Rom_25F740)
	.endif

	@ data/text/trainers.inc:2339 Route121_Text_CristinIntro (+1 aliases)
	.globl gText_Rom_25F75B
gText_Rom_25F75B: @ 0x0825F75B
	.string "1にちに 5にんずつ\nたおす ことが にっかよ!\lあなたが その 5にんめ!$"
	.if (. - gText_Rom_25F75B) > 0x27
	.error "gText_Rom_25F75B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F75B) < 0x27
	.space 0x27 - (. - gText_Rom_25F75B)
	.endif

	@ data/text/trainers.inc:2342 Route121_Text_CristinDefeat (+1 aliases)
	.globl gText_Rom_25F782
gText_Rom_25F782: @ 0x0825F782
	.string "いやっ ひどいわ!$"
	.if (. - gText_Rom_25F782) > 0xa
	.error "gText_Rom_25F782 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F782) < 0xa
	.space 0xa - (. - gText_Rom_25F782)
	.endif

	@ data/text/trainers.inc:2345 Route121_Text_CristinPostBattle
	.globl gText_Rom_25F78C
gText_Rom_25F78C: @ 0x0825F78C
	.string "こんなに あっさり まけるなんて……\nつぎは わたしが かつから!$"
	.if (. - gText_Rom_25F78C) > 0x22
	.error "gText_Rom_25F78C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F78C) < 0x22
	.space 0x22 - (. - gText_Rom_25F78C)
	.endif

	@ data/text/trainers.inc:2348 Route121_Text_CristinRegister
	.globl gText_Rom_25F7AE
gText_Rom_25F7AE: @ 0x0825F7AE
	.string "くつじょく てき だわ!\nあなたの こと わすれないんだから……\lポケナビを かしなさい!$"
	.if (. - gText_Rom_25F7AE) > 0x2e
	.error "gText_Rom_25F7AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F7AE) < 0x2e
	.space 0x2e - (. - gText_Rom_25F7AE)
	.endif

	@ data/text/trainers.inc:2351 Route121_Text_CristinRematchIntro (+1 aliases)
	.globl gText_Rom_25F7DC
gText_Rom_25F7DC: @ 0x0825F7DC
	.string "1にちに 10にんずつ\nたおす ことが にっかよ!\lあなたが その 10にんめ!$"
	.if (. - gText_Rom_25F7DC) > 0x29
	.error "gText_Rom_25F7DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F7DC) < 0x29
	.space 0x29 - (. - gText_Rom_25F7DC)
	.endif

	@ data/text/trainers.inc:2354 Route121_Text_CristinRematchDefeat (+1 aliases)
	.globl gText_Rom_25F805
gText_Rom_25F805: @ 0x0825F805
	.string "ちょっ……\nひどい やりなおしてよ!$"
	.if (. - gText_Rom_25F805) > 0x13
	.error "gText_Rom_25F805 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F805) < 0x13
	.space 0x13 - (. - gText_Rom_25F805)
	.endif

	@ data/text/trainers.inc:2357 Route121_Text_CristinPostRematch
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25F818
gText_Rom_25F818: @ 0x0825F818
	.string "こんなに かてない あいてが いるなんて……\nグスっ しんじられない$"
	.if (. - gText_Rom_25F818) != 0x23
	.error "gText_Rom_25F818 must retain its original byte length"
	.endif
	.globl gText_Rom_25F833
	.set gText_Rom_25F833, gText_Rom_25F818 + 0x1b
	.globl gText_Rom_25F836
	.set gText_Rom_25F836, gText_Rom_25F818 + 0x1e

	@ data/text/trainers.inc:2360 Route121_Text_CaleIntro (+1 aliases)
	.globl gText_Rom_25F83B
gText_Rom_25F83B: @ 0x0825F83B
	.string "いま にもつが いっぱい なんですけど!\nこんな じょうたいで たたかえと?$"
	.if (. - gText_Rom_25F83B) > 0x27
	.error "gText_Rom_25F83B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F83B) < 0x27
	.space 0x27 - (. - gText_Rom_25F83B)
	.endif

	@ data/text/trainers.inc:2363 Route121_Text_CaleDefeat (+1 aliases)
	.globl gText_Rom_25F862
gText_Rom_25F862: @ 0x0825F862
	.string "そりゃ まけますよ\nりょうてが ふさがってるんだもん$"
	.if (. - gText_Rom_25F862) > 0x1b
	.error "gText_Rom_25F862 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F862) < 0x1b
	.space 0x1b - (. - gText_Rom_25F862)
	.endif

	@ data/text/trainers.inc:2366 Route121_Text_CalePostBattle
	.globl gText_Rom_25F87D
gText_Rom_25F87D: @ 0x0825F87D
	.string "この さきの ミナモデパートで\nかいもの しすぎたんだ!\lきみの みたいな バッグが ほしいな$"
	.if (. - gText_Rom_25F87D) > 0x30
	.error "gText_Rom_25F87D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F87D) < 0x30
	.space 0x30 - (. - gText_Rom_25F87D)
	.endif

	@ data/text/trainers.inc:2369 Route121_Text_MylesIntro (+1 aliases)
	.globl gText_Rom_25F8AD
gText_Rom_25F8AD: @ 0x0825F8AD
	.string "みんなの そだてた ポケモンが\nみてみたーーい!$"
	.if (. - gText_Rom_25F8AD) > 0x19
	.error "gText_Rom_25F8AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F8AD) < 0x19
	.space 0x19 - (. - gText_Rom_25F8AD)
	.endif

	@ data/text/trainers.inc:2372 Route121_Text_MylesDefeat (+1 aliases)
	.globl gText_Rom_25F8C6
gText_Rom_25F8C6: @ 0x0825F8C6
	.string "すごーーい!$"
	.if (. - gText_Rom_25F8C6) > 0x7
	.error "gText_Rom_25F8C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F8C6) < 0x7
	.space 0x7 - (. - gText_Rom_25F8C6)
	.endif

	@ data/text/trainers.inc:2375 Route121_Text_MylesPostBattle
	.globl gText_Rom_25F8CD
gText_Rom_25F8CD: @ 0x0825F8CD
	.string "いいなーー! きみの ポケモン!\nどうやって そだてているの?$"
	.if (. - gText_Rom_25F8CD) > 0x20
	.error "gText_Rom_25F8CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F8CD) < 0x20
	.space 0x20 - (. - gText_Rom_25F8CD)
	.endif

	@ data/text/trainers.inc:2378 Route121_Text_PatIntro (+1 aliases)
	.globl gText_Rom_25F8ED
gText_Rom_25F8ED: @ 0x0825F8ED
	.string "わたしの そだてた ポケモンたち\nみんなに みてほしいの!$"
	.if (. - gText_Rom_25F8ED) > 0x1e
	.error "gText_Rom_25F8ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F8ED) < 0x1e
	.space 0x1e - (. - gText_Rom_25F8ED)
	.endif

	@ data/text/trainers.inc:2381 Route121_Text_PatDefeat (+1 aliases)
	.globl gText_Rom_25F90B
gText_Rom_25F90B: @ 0x0825F90B
	.string "すごいなァ!$"
	.if (. - gText_Rom_25F90B) > 0x7
	.error "gText_Rom_25F90B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F90B) < 0x7
	.space 0x7 - (. - gText_Rom_25F90B)
	.endif

	@ data/text/trainers.inc:2384 Route121_Text_PatPostBattle
	.globl gText_Rom_25F912
gText_Rom_25F912: @ 0x0825F912
	.string "どんな ポケモンでも おなじように\nかわいがって そだてているの!$"
	.if (. - gText_Rom_25F912) > 0x22
	.error "gText_Rom_25F912 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F912) < 0x22
	.space 0x22 - (. - gText_Rom_25F912)
	.endif

	@ data/text/trainers.inc:2387 Route121_Text_MarcelIntro (+1 aliases)
	.globl gText_Rom_25F934
gText_Rom_25F934: @ 0x0825F934
	.string "わたしの ポケモンは まけしらず!\nこんど かったら つぎは コンテストだ!$"
	.if (. - gText_Rom_25F934) > 0x27
	.error "gText_Rom_25F934 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F934) < 0x27
	.space 0x27 - (. - gText_Rom_25F934)
	.endif

	@ data/text/trainers.inc:2390 Route121_Text_MarcelDefeat (+1 aliases)
	.globl gText_Rom_25F95B
gText_Rom_25F95B: @ 0x0825F95B
	.string "あっと どうしたことだ?$"
	.if (. - gText_Rom_25F95B) > 0xd
	.error "gText_Rom_25F95B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F95B) < 0xd
	.space 0xd - (. - gText_Rom_25F95B)
	.endif

	@ data/text/trainers.inc:2393 Route121_Text_MarcelPostBattle
	.globl gText_Rom_25F968
gText_Rom_25F968: @ 0x0825F968
	.string "コンテストの まえに\nもうすこし きたえないと ダメかな$"
	.if (. - gText_Rom_25F968) > 0x1d
	.error "gText_Rom_25F968 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F968) < 0x1d
	.space 0x1d - (. - gText_Rom_25F968)
	.endif

	@ data/text/trainers.inc:2396 Route123_Text_WendyIntro (+1 aliases)
	.globl gText_Rom_25F985
gText_Rom_25F985: @ 0x0825F985
	.string "あなたの じつりょくが\nどれほどの ものか……\lわたしが たしかめて あげる!$"
	.if (. - gText_Rom_25F985) > 0x28
	.error "gText_Rom_25F985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F985) < 0x28
	.space 0x28 - (. - gText_Rom_25F985)
	.endif

	@ data/text/trainers.inc:2399 Route123_Text_WendyDefeat (+1 aliases)
	.globl gText_Rom_25F9AD
gText_Rom_25F9AD: @ 0x0825F9AD
	.string "すばらしいわ……!$"
	.if (. - gText_Rom_25F9AD) > 0xa
	.error "gText_Rom_25F9AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F9AD) < 0xa
	.space 0xa - (. - gText_Rom_25F9AD)
	.endif

	@ data/text/trainers.inc:2402 Route123_Text_WendyPostBattle
	.globl gText_Rom_25F9B7
gText_Rom_25F9B7: @ 0x0825F9B7
	.string "わたしに かつなんて……\nあなたの じつりょくも そうとうな もの!$"
	.if (. - gText_Rom_25F9B7) > 0x23
	.error "gText_Rom_25F9B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F9B7) < 0x23
	.space 0x23 - (. - gText_Rom_25F9B7)
	.endif

	@ data/text/trainers.inc:2405 Route123_Text_BraxtonIntro (+1 aliases)
	.globl gText_Rom_25F9DA
gText_Rom_25F9DA: @ 0x0825F9DA
	.string "たくさん ジムの バッジを\nもっている みたいだね!\pほんとうに それだけの ちからが あるか\nたしかめさせて もらうよ!$"
	.if (. - gText_Rom_25F9DA) > 0x3e
	.error "gText_Rom_25F9DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F9DA) < 0x3e
	.space 0x3e - (. - gText_Rom_25F9DA)
	.endif

	@ data/text/trainers.inc:2408 Route123_Text_BraxtonDefeat (+1 aliases)
	.globl gText_Rom_25FA18
gText_Rom_25FA18: @ 0x0825FA18
	.string "たしかに ちからは ある!$"
	.if (. - gText_Rom_25FA18) > 0xe
	.error "gText_Rom_25FA18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA18) < 0xe
	.space 0xe - (. - gText_Rom_25FA18)
	.endif

	@ data/text/trainers.inc:2411 Route123_Text_BraxtonPostBattle
	.globl gText_Rom_25FA26
gText_Rom_25FA26: @ 0x0825FA26
	.string "ジムバッジに はじない\nたたかい だったよ!$"
	.if (. - gText_Rom_25FA26) > 0x17
	.error "gText_Rom_25FA26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA26) < 0x17
	.space 0x17 - (. - gText_Rom_25FA26)
	.endif

	@ data/text/trainers.inc:2414 Route123_Text_VioletIntro (+1 aliases)
	.globl gText_Rom_25FA3D
gText_Rom_25FA3D: @ 0x0825FA3D
	.string "たのしい ことが あるとき って\nいい においで いっぱいに なってるのね$"
	.if (. - gText_Rom_25FA3D) > 0x26
	.error "gText_Rom_25FA3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA3D) < 0x26
	.space 0x26 - (. - gText_Rom_25FA3D)
	.endif

	@ data/text/trainers.inc:2417 Route123_Text_VioletDefeat (+1 aliases)
	.globl gText_Rom_25FA63
gText_Rom_25FA63: @ 0x0825FA63
	.string "あぁ\nかなしみの におい だわ……$"
	.if (. - gText_Rom_25FA63) > 0x12
	.error "gText_Rom_25FA63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA63) < 0x12
	.space 0x12 - (. - gText_Rom_25FA63)
	.endif

	@ data/text/trainers.inc:2420 Route123_Text_VioletPostBattle
	.globl gText_Rom_25FA75
gText_Rom_25FA75: @ 0x0825FA75
	.string "きのみ めいじんの はなばたけ\nすっごく いいかんじの においで いっぱい!$"
	.if (. - gText_Rom_25FA75) > 0x27
	.error "gText_Rom_25FA75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA75) < 0x27
	.space 0x27 - (. - gText_Rom_25FA75)
	.endif

