	@ data/text/trainers.inc:1337 Route114_Text_SteveRematchDefeat (+1 aliases)
	.globl gText_Rom_25CCEA
gText_Rom_25CCEA: @ 0x0825CCEA
	.string "ああ ポケモン みることが できて\nしあわせ だ……{EOS}"
	.if (. - gText_Rom_25CCEA) > 0x1b
	.error "gText_Rom_25CCEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CCEA) < 0x1b
	.space 0x1b - (. - gText_Rom_25CCEA)
	.endif
	@ data/text/trainers.inc:1340 Route114_Text_StevePostRematch
	.globl Route114_Text_StevePostRematch
Route114_Text_StevePostRematch: @ 0x0825CD05
	.string "うふふふふふ……\pポケモンの たたかっている すがたに\nぞくぞく するんだ ボク{EOS}"
	.if (. - Route114_Text_StevePostRematch) > 0x29
	.error "Route114_Text_StevePostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_StevePostRematch) < 0x29
	.space 0x29 - (. - Route114_Text_StevePostRematch)
	.endif
	@ data/text/trainers.inc:1343 Route114_Text_BernieIntro (+1 aliases)
	.globl Route114_Text_BernieIntro
Route114_Text_BernieIntro: @ 0x0825CD2E
	.string "キャンプファイヤー するとき\nはなびを するとき\lみずを ようい しておけよ!{EOS}"
	.if (. - Route114_Text_BernieIntro) > 0x28
	.error "Route114_Text_BernieIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_BernieIntro) < 0x28
	.space 0x28 - (. - Route114_Text_BernieIntro)
	.endif
	@ data/text/trainers.inc:1346 Route114_Text_BernieDefeat (+1 aliases)
	.globl Route114_Text_BernieDefeat
Route114_Text_BernieDefeat: @ 0x0825CD56
	.string "しょうか かつどう\nありがとう! ってか{EOS}"
	.if (. - Route114_Text_BernieDefeat) > 0x15
	.error "Route114_Text_BernieDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_BernieDefeat) < 0x15
	.space 0x15 - (. - Route114_Text_BernieDefeat)
	.endif
	@ data/text/trainers.inc:1349 Route114_Text_BerniePostBattle (+1 aliases)
	.globl gText_Rom_25CD6B
gText_Rom_25CD6B: @ 0x0825CD6B
	.string "ほんと ひのようじん だけは おこたるな!\nひを あまく みるんじゃないぜ!{EOS}"
	.if (. - gText_Rom_25CD6B) > 0x27
	.error "gText_Rom_25CD6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CD6B) < 0x27
	.space 0x27 - (. - gText_Rom_25CD6B)
	.endif
	@ data/text/trainers.inc:1352 Route114_Text_BernieRegister
	.globl Route114_Text_BernieRegister
Route114_Text_BernieRegister: @ 0x0825CD92
	.string "もえあがった きもちの まま\nポケナビに とうろく しあおう!{EOS}"
	.if (. - Route114_Text_BernieRegister) > 0x20
	.error "Route114_Text_BernieRegister may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_BernieRegister) < 0x20
	.space 0x20 - (. - Route114_Text_BernieRegister)
	.endif
	@ data/text/trainers.inc:1355 Route114_Text_BernieRematchIntro (+1 aliases)
	.globl Route114_Text_BernieRematchIntro
Route114_Text_BernieRematchIntro: @ 0x0825CDB2
	.string "キャンプファイヤー するとき\nはなびを するとき\lみずを ようい するように なったか!?{EOS}"
	.if (. - Route114_Text_BernieRematchIntro) > 0x2e
	.error "Route114_Text_BernieRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_BernieRematchIntro) < 0x2e
	.space 0x2e - (. - Route114_Text_BernieRematchIntro)
	.endif
	@ data/text/trainers.inc:1358 Route114_Text_BernieRematchDefeat (+1 aliases)
	.globl Route114_Text_BernieRematchDefeat
Route114_Text_BernieRematchDefeat: @ 0x0825CDE0
	.string "もえあがる まえに\nけされた! ってか{EOS}"
	.if (. - Route114_Text_BernieRematchDefeat) > 0x14
	.error "Route114_Text_BernieRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_BernieRematchDefeat) < 0x14
	.space 0x14 - (. - Route114_Text_BernieRematchDefeat)
	.endif
	@ data/text/trainers.inc:1349 Route114_Text_BerniePostBattle (+1 aliases)
	.globl gText_Rom_25CDF4
gText_Rom_25CDF4: @ 0x0825CDF4
	.string "ほんと ひのようじん だけは おこたるな!\nひを あまく みるんじゃないぜ!{EOS}"
	.if (. - gText_Rom_25CDF4) > 0x27
	.error "gText_Rom_25CDF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CDF4) < 0x27
	.space 0x27 - (. - gText_Rom_25CDF4)
	.endif
	@ data/text/trainers.inc:1364 Route114_Text_ClaudeIntro (+1 aliases)
	.globl Route114_Text_ClaudeIntro
Route114_Text_ClaudeIntro: @ 0x0825CE1B
	.string "つりで しょうぶ すると\nきみには かちめが ないだろう\lポケモンで かかってきなさい!{EOS}"
	.if (. - Route114_Text_ClaudeIntro) > 0x2d
	.error "Route114_Text_ClaudeIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_ClaudeIntro) < 0x2d
	.space 0x2d - (. - Route114_Text_ClaudeIntro)
	.endif
	@ data/text/trainers.inc:1367 Route114_Text_ClaudeDefeat (+1 aliases)
	.globl Route114_Text_ClaudeDefeat
Route114_Text_ClaudeDefeat: @ 0x0825CE48
	.string "つりの しょうぶなら かってた……{EOS}"
	.if (. - Route114_Text_ClaudeDefeat) > 0x12
	.error "Route114_Text_ClaudeDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_ClaudeDefeat) < 0x12
	.space 0x12 - (. - Route114_Text_ClaudeDefeat)
	.endif
	@ data/text/trainers.inc:1370 Route114_Text_ClaudePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route114_Text_ClaudePostBattle
Route114_Text_ClaudePostBattle: @ 0x0825CE5A
	.string "りゅうせいのたきで\nおおものでも つると しようかな\lあそこの たきには なにか いそうだからね{EOS}"
	.if (. - Route114_Text_ClaudePostBattle) != 0x31
	.error "Route114_Text_ClaudePostBattle must retain its original byte length"
	.endif
	.globl gText_Rom_25CE86
	.set gText_Rom_25CE86, Route114_Text_ClaudePostBattle + 0x2c
	@ data/text/trainers.inc:1373 Route114_Text_NolanIntro (+1 aliases)
	.globl Route114_Text_NolanIntro
Route114_Text_NolanIntro: @ 0x0825CE8B
	.string "つりも すき だが\nしょうぶも すき!\pしょうぶを いどまれたら\nつりの さいちゅうでも ことわらないよ!{EOS}"
	.if (. - Route114_Text_NolanIntro) > 0x36
	.error "Route114_Text_NolanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_NolanIntro) < 0x36
	.space 0x36 - (. - Route114_Text_NolanIntro)
	.endif
	@ data/text/trainers.inc:1376 Route114_Text_NolanDefeat (+1 aliases)
	.globl Route114_Text_NolanDefeat
Route114_Text_NolanDefeat: @ 0x0825CEC1
	.string "しょうぶは すき だが\nつよい わけじゃ ないんだ……{EOS}"
	.if (. - Route114_Text_NolanDefeat) > 0x1c
	.error "Route114_Text_NolanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_NolanDefeat) < 0x1c
	.space 0x1c - (. - Route114_Text_NolanDefeat)
	.endif
	@ data/text/trainers.inc:1379 Route114_Text_NolanPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route114_Text_NolanPostBattle
Route114_Text_NolanPostBattle: @ 0x0825CEDD
	.string "こんどこそ!\pと おもっちゃうから\nつりも しょうぶも やめられない{EOS}"
	.if (. - Route114_Text_NolanPostBattle) != 0x23
	.error "Route114_Text_NolanPostBattle must retain its original byte length"
	.endif
	.globl gText_Rom_25CEFB
	.set gText_Rom_25CEFB, Route114_Text_NolanPostBattle + 0x1e
	@ data/text/trainers.inc:1382 Route114_Text_TyraIntro (+1 aliases)
	.globl Route114_Text_TyraIntro
Route114_Text_TyraIntro: @ 0x0825CF00
	.string "カヨ『そうね\nなんとなく そんな きぶん だから\lあなたにも ポケモン おしえたげよっか{EOS}"
	.if (. - Route114_Text_TyraIntro) > 0x2d
	.error "Route114_Text_TyraIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_TyraIntro) < 0x2d
	.space 0x2d - (. - Route114_Text_TyraIntro)
	.endif
	@ data/text/trainers.inc:1385 Route114_Text_TyraDefeat (+1 aliases)
	.globl Route114_Text_TyraDefeat
Route114_Text_TyraDefeat: @ 0x0825CF2D
	.string "カヨ『すごい たたかいかた!{EOS}"
	.if (. - Route114_Text_TyraDefeat) > 0xf
	.error "Route114_Text_TyraDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_TyraDefeat) < 0xf
	.space 0xf - (. - Route114_Text_TyraDefeat)
	.endif
	@ data/text/trainers.inc:1388 Route114_Text_TyraPostBattle
	.globl Route114_Text_TyraPostBattle
Route114_Text_TyraPostBattle: @ 0x0825CF3C
	.string "カヨ『コウハイの イヨに あたしが\nポケモンを おしえて あげたの!{EOS}"
	.if (. - Route114_Text_TyraPostBattle) > 0x23
	.error "Route114_Text_TyraPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_TyraPostBattle) < 0x23
	.space 0x23 - (. - Route114_Text_TyraPostBattle)
	.endif
	@ data/text/trainers.inc:1391 Route114_Text_TyraNotEnoughMons (+1 aliases)
	.globl Route114_Text_TyraNotEnoughMons
Route114_Text_TyraNotEnoughMons: @ 0x0825CF5F
	.string "カヨ『うふふ!\nあたしたちと しょうぶ するなら\lポケモン いっぴきじゃ ダメなのよ!{EOS}"
	.if (. - Route114_Text_TyraNotEnoughMons) > 0x2c
	.error "Route114_Text_TyraNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_TyraNotEnoughMons) < 0x2c
	.space 0x2c - (. - Route114_Text_TyraNotEnoughMons)
	.endif
	@ data/text/trainers.inc:1394 Route114_Text_IvyIntro (+1 aliases)
	.globl Route114_Text_IvyIntro
Route114_Text_IvyIntro: @ 0x0825CF8B
	.string "イヨ『あなた\nだれに ポケモン おそわったの?{EOS}"
	.if (. - Route114_Text_IvyIntro) > 0x18
	.error "Route114_Text_IvyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_IvyIntro) < 0x18
	.space 0x18 - (. - Route114_Text_IvyIntro)
	.endif
	@ data/text/trainers.inc:1397 Route114_Text_IvyDefeat (+1 aliases)
	.globl Route114_Text_IvyDefeat
Route114_Text_IvyDefeat: @ 0x0825CFA3
	.string "イヨ『すごい たたかいかた!{EOS}"
	.if (. - Route114_Text_IvyDefeat) > 0xf
	.error "Route114_Text_IvyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_IvyDefeat) < 0xf
	.space 0xf - (. - Route114_Text_IvyDefeat)
	.endif
	@ data/text/trainers.inc:1400 Route114_Text_IvyPostBattle
	.globl gText_Rom_25CFB2
gText_Rom_25CFB2: @ 0x0825CFB2
	.string "イヨ『あたしが\nポケモン はじめた きっかけは\lセンパイが おしえてくれた からなの!{EOS}"
	.if (. - gText_Rom_25CFB2) > 0x2c
	.error "gText_Rom_25CFB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CFB2) < 0x2c
	.space 0x2c - (. - gText_Rom_25CFB2)
	.endif
	@ data/text/trainers.inc:1403 Route114_Text_IvyNotEnoughMons (+1 aliases)
	.globl Route114_Text_IvyNotEnoughMons
Route114_Text_IvyNotEnoughMons: @ 0x0825CFDE
	.string "イヨ『ポケモン いっぴき だけなの?\nなんだか さみしい かんじ しちゃうね{EOS}"
	.if (. - Route114_Text_IvyNotEnoughMons) > 0x27
	.error "Route114_Text_IvyNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_IvyNotEnoughMons) < 0x27
	.space 0x27 - (. - Route114_Text_IvyNotEnoughMons)
	.endif
	@ data/text/trainers.inc:1406 Route114_Text_KaiIntro (+1 aliases)
	.globl Route114_Text_KaiIntro
Route114_Text_KaiIntro: @ 0x0825D005
	.string "でっかいの つれたっ でっかいの!{EOS}"
	.if (. - Route114_Text_KaiIntro) > 0x12
	.error "Route114_Text_KaiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_KaiIntro) < 0x12
	.space 0x12 - (. - Route114_Text_KaiIntro)
	.endif
	@ data/text/trainers.inc:1409 Route114_Text_KaiDefeat (+1 aliases)
	.globl Route114_Text_KaiDefeat
Route114_Text_KaiDefeat: @ 0x0825D017
	.string "あれー\nおおきさで まけたんかな{EOS}"
	.if (. - Route114_Text_KaiDefeat) > 0x11
	.error "Route114_Text_KaiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_KaiDefeat) < 0x11
	.space 0x11 - (. - Route114_Text_KaiDefeat)
	.endif
	@ data/text/trainers.inc:1412 Route114_Text_KaiPostBattle
	.globl gText_Rom_25D028
gText_Rom_25D028: @ 0x0825D028
	.string "よっしゃー!\nもっと おおきいの つるもんね!{EOS}"
	.if (. - gText_Rom_25D028) > 0x18
	.error "gText_Rom_25D028 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D028) < 0x18
	.space 0x18 - (. - gText_Rom_25D028)
	.endif
	@ data/text/trainers.inc:1415 Route114_Text_CharlotteIntro (+1 aliases)
	.globl Route114_Text_CharlotteIntro
Route114_Text_CharlotteIntro: @ 0x0825D040
	.string "あたし!\nかわいい だけじゃ ないんだから!{EOS}"
	.if (. - Route114_Text_CharlotteIntro) > 0x17
	.error "Route114_Text_CharlotteIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_CharlotteIntro) < 0x17
	.space 0x17 - (. - Route114_Text_CharlotteIntro)
	.endif
	@ data/text/trainers.inc:1418 Route114_Text_CharlotteDefeat (+1 aliases)
	.globl Route114_Text_CharlotteDefeat
Route114_Text_CharlotteDefeat: @ 0x0825D057
	.string "かわいく なーいっ!{EOS}"
	.if (. - Route114_Text_CharlotteDefeat) > 0xb
	.error "Route114_Text_CharlotteDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_CharlotteDefeat) < 0xb
	.space 0xb - (. - Route114_Text_CharlotteDefeat)
	.endif
	@ data/text/trainers.inc:1421 Route114_Text_CharlottePostBattle
	.globl Route114_Text_CharlottePostBattle
Route114_Text_CharlottePostBattle: @ 0x0825D062
	.string "かわいい だけの ポケモンなんて いや!\nかわいくて ひとクセ あるコが すき!{EOS}"
	.if (. - Route114_Text_CharlottePostBattle) > 0x29
	.error "Route114_Text_CharlottePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_CharlottePostBattle) < 0x29
	.space 0x29 - (. - Route114_Text_CharlottePostBattle)
	.endif
	@ data/text/trainers.inc:1424 Route114_Text_AngelinaIntro (+1 aliases)
	.globl Route114_Text_AngelinaIntro
Route114_Text_AngelinaIntro: @ 0x0825D08B
	.string "あなたの ポケモンって\nどの くらい しんか させてる?{EOS}"
	.if (. - Route114_Text_AngelinaIntro) > 0x1d
	.error "Route114_Text_AngelinaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_AngelinaIntro) < 0x1d
	.space 0x1d - (. - Route114_Text_AngelinaIntro)
	.endif
	@ data/text/trainers.inc:1427 Route114_Text_AngelinaDefeat (+1 aliases)
	.globl Route114_Text_AngelinaDefeat
Route114_Text_AngelinaDefeat: @ 0x0825D0A8
	.string "ふーん\nなるほどね{EOS}"
	.if (. - Route114_Text_AngelinaDefeat) > 0xa
	.error "Route114_Text_AngelinaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_AngelinaDefeat) < 0xa
	.space 0xa - (. - Route114_Text_AngelinaDefeat)
	.endif
	@ data/text/trainers.inc:1430 Route114_Text_AngelinaPostBattle
	.globl Route114_Text_AngelinaPostBattle
Route114_Text_AngelinaPostBattle: @ 0x0825D0B2
	.string "しんか させると\nみためが ものすごく かわって\lビックリする ポケモンが いるよね!{EOS}"
	.if (. - Route114_Text_AngelinaPostBattle) > 0x2c
	.error "Route114_Text_AngelinaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_AngelinaPostBattle) < 0x2c
	.space 0x2c - (. - Route114_Text_AngelinaPostBattle)
	.endif
	@ data/text/trainers.inc:1433 Route115_Text_TimothyIntro (+1 aliases)
	.globl Route115_Text_TimothyIntro
Route115_Text_TimothyIntro: @ 0x0825D0DE
	.string "ふむ……\nなかなか できそうだな……\lわたしが あいてを してあげよう!{EOS}"
	.if (. - Route115_Text_TimothyIntro) > 0x25
	.error "Route115_Text_TimothyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_TimothyIntro) < 0x25
	.space 0x25 - (. - Route115_Text_TimothyIntro)
	.endif
	@ data/text/trainers.inc:1436 Route115_Text_TimothyDefeat (+1 aliases)
	.globl Route115_Text_TimothyDefeat
Route115_Text_TimothyDefeat: @ 0x0825D103
	.string "そうぞう いじょうの つよさだ……!{EOS}"
	.if (. - Route115_Text_TimothyDefeat) > 0x13
	.error "Route115_Text_TimothyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_TimothyDefeat) < 0x13
	.space 0x13 - (. - Route115_Text_TimothyDefeat)
	.endif
	@ data/text/trainers.inc:1439 Route115_Text_TimothyPostBattle
	.globl gText_Rom_25D116
gText_Rom_25D116: @ 0x0825D116
	.string "てんさい など いない\nすべては どりょく!\lわたしは そう しんじている……{EOS}"
	.if (. - gText_Rom_25D116) > 0x28
	.error "gText_Rom_25D116 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D116) < 0x28
	.space 0x28 - (. - gText_Rom_25D116)
	.endif
	@ data/text/trainers.inc:1442 Route115_Text_TimothyRegister
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_TimothyRegister
Route115_Text_TimothyRegister: @ 0x0825D13E
	.string "ふむ……\nこんな まけかたも ひさかたぶりだ\lできれば また あいてを してほしい{EOS}"
	.if (. - Route115_Text_TimothyRegister) != 0x2a
	.error "Route115_Text_TimothyRegister must retain its original byte length"
	.endif
	.globl gText_Rom_25D164
	.set gText_Rom_25D164, Route115_Text_TimothyRegister + 0x26
	@ data/text/trainers.inc:1445 Route115_Text_TimothyRematchIntro (+1 aliases)
	.globl gText_Rom_25D168
gText_Rom_25D168: @ 0x0825D168
	.string "ふむ……\nあいかわらずの みのこなし\lわたしの あいてを してもらおう!{EOS}"
	.if (. - gText_Rom_25D168) > 0x25
	.error "gText_Rom_25D168 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D168) < 0x25
	.space 0x25 - (. - gText_Rom_25D168)
	.endif
	@ data/text/trainers.inc:1448 Route115_Text_TimothyRematchDefeat (+1 aliases)
	.globl gText_Rom_25D18D
gText_Rom_25D18D: @ 0x0825D18D
	.string "あいかわらずの つよさだ……!{EOS}"
	.if (. - gText_Rom_25D18D) > 0x10
	.error "gText_Rom_25D18D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D18D) < 0x10
	.space 0x10 - (. - gText_Rom_25D18D)
	.endif
	@ data/text/trainers.inc:1451 Route115_Text_TimothyPostRematch
	.globl Route115_Text_TimothyPostRematch
Route115_Text_TimothyPostRematch: @ 0x0825D19D
	.string "どりょく あるのみ!\pまけたのは まだまだ\nどりょくが たりないからだ!{EOS}"
	.if (. - Route115_Text_TimothyPostRematch) > 0x25
	.error "Route115_Text_TimothyPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_TimothyPostRematch) < 0x25
	.space 0x25 - (. - Route115_Text_TimothyPostRematch)
	.endif
	@ data/text/trainers.inc:1454 Route115_Text_KoichiIntro (+1 aliases)
	.globl Route115_Text_KoichiIntro
Route115_Text_KoichiIntro: @ 0x0825D1C2
	.string "おれのッ!\pワンリキーがッ!\pたたかいを のぞんでいるッ!{EOS}"
	.if (. - Route115_Text_KoichiIntro) > 0x1e
	.error "Route115_Text_KoichiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_KoichiIntro) < 0x1e
	.space 0x1e - (. - Route115_Text_KoichiIntro)
	.endif
	@ data/text/trainers.inc:1457 Route115_Text_KoichiDefeat (+1 aliases)
	.globl Route115_Text_KoichiDefeat
Route115_Text_KoichiDefeat: @ 0x0825D1E0
	.string "いててててっ!{EOS}"
	.if (. - Route115_Text_KoichiDefeat) > 0x8
	.error "Route115_Text_KoichiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_KoichiDefeat) < 0x8
	.space 0x8 - (. - Route115_Text_KoichiDefeat)
	.endif
	@ data/text/trainers.inc:1460 Route115_Text_KoichiPostBattle
	.globl Route115_Text_KoichiPostBattle
Route115_Text_KoichiPostBattle: @ 0x0825D1E8
	.string "おれの ワンリキー たちがッ!\pつよさを のぞむかぎり\pおれたちは どこまでも つよくなるぜッ!{EOS}"
	.if (. - Route115_Text_KoichiPostBattle) > 0x31
	.error "Route115_Text_KoichiPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_KoichiPostBattle) < 0x31
	.space 0x31 - (. - Route115_Text_KoichiPostBattle)
	.endif
	@ data/text/trainers.inc:1463 Route115_Text_NobIntro (+1 aliases)
	.globl Route115_Text_NobIntro
Route115_Text_NobIntro: @ 0x0825D219
	.string "オレの とくいわざは\nずつきで レンガを くだく ことだ!{EOS}"
	.if (. - Route115_Text_NobIntro) > 0x1e
	.error "Route115_Text_NobIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_NobIntro) < 0x1e
	.space 0x1e - (. - Route115_Text_NobIntro)
	.endif
	@ data/text/trainers.inc:1466 Route115_Text_NobDefeat (+1 aliases)
	.globl Route115_Text_NobDefeat
Route115_Text_NobDefeat: @ 0x0825D237
	.string "うがーっ!\nあたまが くだけたーっ!{EOS}"
	.if (. - Route115_Text_NobDefeat) > 0x13
	.error "Route115_Text_NobDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_NobDefeat) < 0x13
	.space 0x13 - (. - Route115_Text_NobDefeat)
	.endif
	@ data/text/trainers.inc:1469 Route115_Text_NobPostBattle
	.globl Route115_Text_NobPostBattle
Route115_Text_NobPostBattle: @ 0x0825D24A
	.string "ポケモンに カラテを おしえてるんだが\nオレより つよく なりそうで\lちょっと たのしみ なんだ!{EOS}"
	.if (. - Route115_Text_NobPostBattle) > 0x32
	.error "Route115_Text_NobPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_NobPostBattle) < 0x32
	.space 0x32 - (. - Route115_Text_NobPostBattle)
	.endif
	@ data/text/trainers.inc:1472 Route115_Text_NobRegister
	.globl Route115_Text_NobRegister
Route115_Text_NobRegister: @ 0x0825D27C
	.string "きみは すげえな!\nきたえなおして もういちど しょうぶだ!{EOS}"
	.if (. - Route115_Text_NobRegister) > 0x1f
	.error "Route115_Text_NobRegister may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_NobRegister) < 0x1f
	.space 0x1f - (. - Route115_Text_NobRegister)
	.endif
	@ data/text/trainers.inc:1475 Route115_Text_NobRematchIntro (+1 aliases)
	.globl Route115_Text_NobRematchIntro
Route115_Text_NobRematchIntro: @ 0x0825D29B
	.string "きみに まけてから がんばって\nポケモンと おのれを きたえなおしたぞ!\lさあ もういちど しょうぶ!{EOS}"
	.if (. - Route115_Text_NobRematchIntro) > 0x34
	.error "Route115_Text_NobRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_NobRematchIntro) < 0x34
	.space 0x34 - (. - Route115_Text_NobRematchIntro)
	.endif
	@ data/text/trainers.inc:1478 Route115_Text_NobRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_NobRematchDefeat
Route115_Text_NobRematchDefeat: @ 0x0825D2CF
	.string "うがーっ!\nまた まけたーっ!{EOS}"
	.if (. - Route115_Text_NobRematchDefeat) != 0x10
	.error "Route115_Text_NobRematchDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_25D2D8
	.set gText_Rom_25D2D8, Route115_Text_NobRematchDefeat + 0x9
	@ data/text/trainers.inc:1481 Route115_Text_NobPostRematch
	.globl gText_Rom_25D2DF
gText_Rom_25D2DF: @ 0x0825D2DF
	.string "おれの ポケモンは まだまだ つよくなる!\nがんばって きたえるぞ!{EOS}"
	.if (. - gText_Rom_25D2DF) > 0x23
	.error "gText_Rom_25D2DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D2DF) < 0x23
	.space 0x23 - (. - gText_Rom_25D2DF)
	.endif
	@ data/text/trainers.inc:1484 Route115_Text_CyndyIntro (+1 aliases)
	.globl Route115_Text_CyndyIntro
Route115_Text_CyndyIntro: @ 0x0825D302
	.string "この すなはまは わたしの\nヒミツの しゅぎょう ばしょ!\lかってに はいって こないでよ!{EOS}"
	.if (. - Route115_Text_CyndyIntro) > 0x2f
	.error "Route115_Text_CyndyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_CyndyIntro) < 0x2f
	.space 0x2f - (. - Route115_Text_CyndyIntro)
	.endif
	@ data/text/trainers.inc:1487 Route115_Text_CyndyDefeat (+1 aliases)
	.globl Route115_Text_CyndyDefeat
Route115_Text_CyndyDefeat: @ 0x0825D331
	.string "しゅぎょうが たりないわ……!{EOS}"
	.if (. - Route115_Text_CyndyDefeat) > 0x10
	.error "Route115_Text_CyndyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_CyndyDefeat) < 0x10
	.space 0x10 - (. - Route115_Text_CyndyDefeat)
	.endif
	@ data/text/trainers.inc:1490 Route115_Text_CyndyPostBattle
	.globl Route115_Text_CyndyPostBattle
Route115_Text_CyndyPostBattle: @ 0x0825D341
	.string "すなが クッションに なるから\nからだを いためないの\lさいこうの しゅぎょう ばしょね!{EOS}"
	.if (. - Route115_Text_CyndyPostBattle) > 0x2e
	.error "Route115_Text_CyndyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_CyndyPostBattle) < 0x2e
	.space 0x2e - (. - Route115_Text_CyndyPostBattle)
	.endif
	@ data/text/trainers.inc:1493 Route115_Text_CyndyRegister
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_CyndyRegister
Route115_Text_CyndyRegister: @ 0x0825D36F
	.string "いいわ あなたが ここに はいるの\nみとめてあげる!\lそのかわり また あいてを たのむわよ!{EOS}"
	.if (. - Route115_Text_CyndyRegister) != 0x30
	.error "Route115_Text_CyndyRegister must retain its original byte length"
	.endif
	.globl gText_Rom_25D39B
	.set gText_Rom_25D39B, Route115_Text_CyndyRegister + 0x2c
	@ data/text/trainers.inc:1496 Route115_Text_CyndyRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_CyndyRematchIntro
Route115_Text_CyndyRematchIntro: @ 0x0825D39F
	.string "さあ ポケモンしょうぶ いくわよ!{EOS}"
	.if (. - Route115_Text_CyndyRematchIntro) != 0x12
	.error "Route115_Text_CyndyRematchIntro must retain its original byte length"
	.endif
	.globl gText_Rom_25D3AD
	.set gText_Rom_25D3AD, Route115_Text_CyndyRematchIntro + 0xe
	@ data/text/trainers.inc:1499 Route115_Text_CyndyRematchDefeat (+1 aliases)
	.globl gText_Rom_25D3B1
gText_Rom_25D3B1: @ 0x0825D3B1
	.string "わたしは たたかえるけど\nポケモンが……{EOS}"
	.if (. - gText_Rom_25D3B1) > 0x15
	.error "gText_Rom_25D3B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D3B1) < 0x15
	.space 0x15 - (. - gText_Rom_25D3B1)
	.endif
	@ data/text/trainers.inc:1502 Route115_Text_CyndyPostRematch
	.globl Route115_Text_CyndyPostRematch
Route115_Text_CyndyPostRematch: @ 0x0825D3C6
	.string "まけても ちょっと たのしいのは\nほんとうに ポケモンが すき だからかな?{EOS}"
	.if (. - Route115_Text_CyndyPostRematch) > 0x27
	.error "Route115_Text_CyndyPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_CyndyPostRematch) < 0x27
	.space 0x27 - (. - Route115_Text_CyndyPostRematch)
	.endif
	@ data/text/trainers.inc:1505 Route115_Text_HectorIntro (+1 aliases)
	.globl Route115_Text_HectorIntro
Route115_Text_HectorIntro: @ 0x0825D3ED
	.string "ぼく めずらしい ポケモン もってるんだ!\nよかったら みせて あげようか{EOS}"
	.if (. - Route115_Text_HectorIntro) > 0x26
	.error "Route115_Text_HectorIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_HectorIntro) < 0x26
	.space 0x26 - (. - Route115_Text_HectorIntro)
	.endif
	@ data/text/trainers.inc:1508 Route115_Text_HectorDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_HectorDefeat
Route115_Text_HectorDefeat: @ 0x0825D413
	.string "きみ……\nぼくの ポケモン ほしいでしょ?{EOS}"
	.if (. - Route115_Text_HectorDefeat) != 0x16
	.error "Route115_Text_HectorDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_25D424
	.set gText_Rom_25D424, Route115_Text_HectorDefeat + 0x11
	@ data/text/trainers.inc:1511 Route115_Text_HectorPostBattle
	.globl Route115_Text_HectorPostBattle
Route115_Text_HectorPostBattle: @ 0x0825D429
	.string "こんなに めずらしい ポケモン もってるんだ\nそれだけで ぼくは まんぞく なのさ!{EOS}"
	.if (. - Route115_Text_HectorPostBattle) > 0x2b
	.error "Route115_Text_HectorPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_HectorPostBattle) < 0x2b
	.space 0x2b - (. - Route115_Text_HectorPostBattle)
	.endif
	@ data/text/trainers.inc:1514 Route115_Text_KyraIntro (+1 aliases)
	.globl Route115_Text_KyraIntro
Route115_Text_KyraIntro: @ 0x0825D454
	.string "はしりながら しょうぶを するわよッ!\nあなたも ついて きなさーい!{EOS}"
	.if (. - Route115_Text_KyraIntro) > 0x24
	.error "Route115_Text_KyraIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_KyraIntro) < 0x24
	.space 0x24 - (. - Route115_Text_KyraIntro)
	.endif
	@ data/text/trainers.inc:1517 Route115_Text_KyraDefeat (+1 aliases)
	.globl Route115_Text_KyraDefeat
Route115_Text_KyraDefeat: @ 0x0825D478
	.string "はぁ はぁ……{EOS}"
	.if (. - Route115_Text_KyraDefeat) > 0x8
	.error "Route115_Text_KyraDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_KyraDefeat) < 0x8
	.space 0x8 - (. - Route115_Text_KyraDefeat)
	.endif
	@ data/text/trainers.inc:1520 Route115_Text_KyraPostBattle
	.globl gText_Rom_25D480
gText_Rom_25D480: @ 0x0825D480
	.string "はしりながら たたかおうと したのが\nまちがい だったわよ!\lひとっぱしり して アタマ ひやすかな{EOS}"
	.if (. - gText_Rom_25D480) > 0x33
	.error "gText_Rom_25D480 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D480) < 0x33
	.space 0x33 - (. - gText_Rom_25D480)
	.endif
	@ data/text/trainers.inc:1523 Route115_Text_JaidenIntro (+1 aliases)
	.globl Route115_Text_JaidenIntro
Route115_Text_JaidenIntro: @ 0x0825D4B3
	.string "くらえーっ\nにんぽう すごポケモンの じゅつ!{EOS}"
	.if (. - Route115_Text_JaidenIntro) > 0x18
	.error "Route115_Text_JaidenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_JaidenIntro) < 0x18
	.space 0x18 - (. - Route115_Text_JaidenIntro)
	.endif
	@ data/text/trainers.inc:1526 Route115_Text_JaidenDefeat (+1 aliases)
	.globl Route115_Text_JaidenDefeat
Route115_Text_JaidenDefeat: @ 0x0825D4CB
	.string "わーん しっぱいだ!{EOS}"
	.if (. - Route115_Text_JaidenDefeat) > 0xb
	.error "Route115_Text_JaidenDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_JaidenDefeat) < 0xb
	.space 0xb - (. - Route115_Text_JaidenDefeat)
	.endif
	@ data/text/trainers.inc:1529 Route115_Text_JaidenPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_JaidenPostBattle
Route115_Text_JaidenPostBattle: @ 0x0825D4D6
	.string "でも ぼくの ポケモン\nすごポケモン だった でしょ?{EOS}"
	.if (. - Route115_Text_JaidenPostBattle) != 0x1c
	.error "Route115_Text_JaidenPostBattle must retain its original byte length"
	.endif
	.globl gText_Rom_25D4ED
	.set gText_Rom_25D4ED, Route115_Text_JaidenPostBattle + 0x17
	@ data/text/trainers.inc:1532 Route115_Text_HeleneIntro (+1 aliases)
	.globl Route115_Text_HeleneIntro
Route115_Text_HeleneIntro: @ 0x0825D4F2
	.string "ふふっ あたしの ポケモンたちは\nくろおび クラスの つよさよ!{EOS}"
	.if (. - Route115_Text_HeleneIntro) > 0x21
	.error "Route115_Text_HeleneIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_HeleneIntro) < 0x21
	.space 0x21 - (. - Route115_Text_HeleneIntro)
	.endif
	@ data/text/trainers.inc:1535 Route115_Text_HeleneDefeat (+1 aliases)
	.globl Route115_Text_HeleneDefeat
Route115_Text_HeleneDefeat: @ 0x0825D513
	.string "くやしすぎるわ!{EOS}"
	.if (. - Route115_Text_HeleneDefeat) > 0x9
	.error "Route115_Text_HeleneDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_HeleneDefeat) < 0x9
	.space 0x9 - (. - Route115_Text_HeleneDefeat)
	.endif
	@ data/text/trainers.inc:1538 Route115_Text_HelenePostBattle
	.globl gText_Rom_25D51C
gText_Rom_25D51C: @ 0x0825D51C
	.string "あたしより つよい ひとなんて\nめったに あわないのに……\pわかった!\nあなた ジムリーダー でしょ!{EOS}"
	.if (. - gText_Rom_25D51C) > 0x34
	.error "gText_Rom_25D51C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D51C) < 0x34
	.space 0x34 - (. - gText_Rom_25D51C)
	.endif
	@ data/text/trainers.inc:1541 Route115_Text_AlixIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_AlixIntro
Route115_Text_AlixIntro: @ 0x0825D550
	.string "めが あったからには にがさないわよ!{EOS}"
	.if (. - Route115_Text_AlixIntro) != 0x14
	.error "Route115_Text_AlixIntro must retain its original byte length"
	.endif
	.globl gText_Rom_25D560
	.set gText_Rom_25D560, Route115_Text_AlixIntro + 0x10
	@ data/text/trainers.inc:1544 Route115_Text_AlixDefeat (+1 aliases)
	.globl Route115_Text_AlixDefeat
Route115_Text_AlixDefeat: @ 0x0825D564
	.string "くっ…… なかなか!{EOS}"
	.if (. - Route115_Text_AlixDefeat) > 0xb
	.error "Route115_Text_AlixDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_AlixDefeat) < 0xb
	.space 0xb - (. - Route115_Text_AlixDefeat)
	.endif
	@ data/text/trainers.inc:1547 Route115_Text_AlixPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_AlixPostBattle
Route115_Text_AlixPostBattle: @ 0x0825D56F
	.string "あーあ!\nテレポートで おうちに かえろうかしら{EOS}"
	.if (. - Route115_Text_AlixPostBattle) != 0x19
	.error "Route115_Text_AlixPostBattle must retain its original byte length"
	.endif
	.globl gText_Rom_25D584
	.set gText_Rom_25D584, Route115_Text_AlixPostBattle + 0x15
	@ data/text/trainers.inc:1550 Route115_Text_MarleneIntro (+1 aliases)
	.globl Route115_Text_MarleneIntro
Route115_Text_MarleneIntro: @ 0x0825D588
	.string "めいそうの じゃまを したわね……\nおしおき させて もらうわ!{EOS}"
	.if (. - Route115_Text_MarleneIntro) > 0x21
	.error "Route115_Text_MarleneIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_MarleneIntro) < 0x21
	.space 0x21 - (. - Route115_Text_MarleneIntro)
	.endif
	@ data/text/trainers.inc:1553 Route115_Text_MarleneDefeat (+1 aliases)
	.globl Route115_Text_MarleneDefeat
Route115_Text_MarleneDefeat: @ 0x0825D5A9
	.string "こころが みだれて しまう!{EOS}"
	.if (. - Route115_Text_MarleneDefeat) > 0xf
	.error "Route115_Text_MarleneDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_MarleneDefeat) < 0xf
	.space 0xf - (. - Route115_Text_MarleneDefeat)
	.endif
	@ data/text/trainers.inc:1556 Route115_Text_MarlenePostBattle
	.globl gText_Rom_25D5B8
gText_Rom_25D5B8: @ 0x0825D5B8
	.string "ここで ポケモンたちと\nめいそうを していたの!\lでも あまり おちつかない ところね{EOS}"
	.if (. - gText_Rom_25D5B8) > 0x2c
	.error "gText_Rom_25D5B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D5B8) < 0x2c
	.space 0x2c - (. - gText_Rom_25D5B8)
	.endif
	@ data/text/trainers.inc:1559 Route116_Text_ClarkIntro (+1 aliases)
	.globl Route116_Text_ClarkIntro
Route116_Text_ClarkIntro: @ 0x0825D5E4
	.string "トンネルが つうじて いないなら\nやまを こえて いけば いいのだ!{EOS}"
	.if (. - Route116_Text_ClarkIntro) > 0x23
	.error "Route116_Text_ClarkIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_ClarkIntro) < 0x23
	.space 0x23 - (. - Route116_Text_ClarkIntro)
	.endif
	@ data/text/trainers.inc:1562 Route116_Text_ClarkDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route116_Text_ClarkDefeat
Route116_Text_ClarkDefeat: @ 0x0825D607
	.string "ぜえ…… ぜえ……\nまけて つかれて しまった{EOS}"
	.if (. - Route116_Text_ClarkDefeat) != 0x18
	.error "Route116_Text_ClarkDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_25D61A
	.set gText_Rom_25D61A, Route116_Text_ClarkDefeat + 0x13
	@ data/text/trainers.inc:1565 Route116_Text_ClarkPostBattle
	.globl gText_Rom_25D61F
gText_Rom_25D61F: @ 0x0825D61F
	.string "トンネルなど なくても かまわん\nやまおとこは やまが みち なのだ!{EOS}"
	.if (. - gText_Rom_25D61F) > 0x24
	.error "gText_Rom_25D61F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D61F) < 0x24
	.space 0x24 - (. - gText_Rom_25D61F)
	.endif
	@ data/text/trainers.inc:1568 Route116_Text_JoeyIntro (+1 aliases)
	.globl Route116_Text_JoeyIntro
Route116_Text_JoeyIntro: @ 0x0825D643
	.string "おれの ポケモン つえーぞ!\nちょっと みてみろよ!{EOS}"
	.if (. - Route116_Text_JoeyIntro) > 0x1b
	.error "Route116_Text_JoeyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JoeyIntro) < 0x1b
	.space 0x1b - (. - Route116_Text_JoeyIntro)
	.endif
	@ data/text/trainers.inc:1571 Route116_Text_JoeyDefeat (+1 aliases)
	.globl Route116_Text_JoeyDefeat
Route116_Text_JoeyDefeat: @ 0x0825D65E
	.string "あいたたたたっ! キズが できた!\nバンソーコー はらなきゃ!{EOS}"
	.if (. - Route116_Text_JoeyDefeat) > 0x20
	.error "Route116_Text_JoeyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JoeyDefeat) < 0x20
	.space 0x20 - (. - Route116_Text_JoeyDefeat)
	.endif
	@ data/text/trainers.inc:1574 Route116_Text_JoeyPostBattle
	.globl gText_Rom_25D67E
gText_Rom_25D67E: @ 0x0825D67E
	.string "バンソーコーは おとこの くんしょう!\nまた ひとつ ふえたぜ!{EOS}"
	.if (. - gText_Rom_25D67E) > 0x21
	.error "gText_Rom_25D67E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D67E) < 0x21
	.space 0x21 - (. - gText_Rom_25D67E)
	.endif
	@ data/text/trainers.inc:1577 Route116_Text_JoseIntro (+1 aliases)
	.globl gText_Rom_25D69F
gText_Rom_25D69F: @ 0x0825D69F
	.string "ぼくの むしポケモンは つよいよ!\nしょうぶ しようよ!{EOS}"
	.if (. - gText_Rom_25D69F) > 0x1d
	.error "gText_Rom_25D69F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D69F) < 0x1d
	.space 0x1d - (. - gText_Rom_25D69F)
	.endif
	@ data/text/trainers.inc:1580 Route116_Text_JoseDefeat (+1 aliases)
	.globl gText_Rom_25D6BC
gText_Rom_25D6BC: @ 0x0825D6BC
	.string "まけた……!\nかてると おもったのに……!{EOS}"
	.if (. - gText_Rom_25D6BC) > 0x16
	.error "gText_Rom_25D6BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D6BC) < 0x16
	.space 0x16 - (. - gText_Rom_25D6BC)
	.endif
	@ data/text/trainers.inc:1583 Route116_Text_JosePostBattle
	.globl gText_Rom_25D6D2
gText_Rom_25D6D2: @ 0x0825D6D2
	.string "むしポケモンは しんかが はやいから\nつよく なるのも はやい!{EOS}"
	.if (. - gText_Rom_25D6D2) > 0x21
	.error "gText_Rom_25D6D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D6D2) < 0x21
	.space 0x21 - (. - gText_Rom_25D6D2)
	.endif
	@ data/text/trainers.inc:1586 Route116_Text_JaniceIntro (+1 aliases)
	.globl gText_Rom_25D6F3
gText_Rom_25D6F3: @ 0x0825D6F3
	.string "わたしの かわいい ポケモンの つよさ\nじっくりと おしえて あげるわ!{EOS}"
	.if (. - gText_Rom_25D6F3) > 0x25
	.error "gText_Rom_25D6F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D6F3) < 0x25
	.space 0x25 - (. - gText_Rom_25D6F3)
	.endif
	@ data/text/trainers.inc:1589 Route116_Text_JaniceDefeat (+1 aliases)
	.globl gText_Rom_25D718
gText_Rom_25D718: @ 0x0825D718
	.string "キミの ほうが いちまい うわてね……{EOS}"
	.if (. - gText_Rom_25D718) > 0x14
	.error "gText_Rom_25D718 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D718) < 0x14
	.space 0x14 - (. - gText_Rom_25D718)
	.endif
	@ data/text/trainers.inc:1592 Route116_Text_JanicePostBattle
	.globl gText_Rom_25D72C
gText_Rom_25D72C: @ 0x0825D72C
	.string "かわいさと つよさを かねそなえた ポケモン\nそれが わたしの りそうなの!{EOS}"
	.if (. - gText_Rom_25D72C) > 0x27
	.error "gText_Rom_25D72C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D72C) < 0x27
	.space 0x27 - (. - gText_Rom_25D72C)
	.endif
	@ data/text/trainers.inc:1595 Route116_Text_JerryIntro (+1 aliases)
	.globl gText_Rom_25D753
gText_Rom_25D753: @ 0x0825D753
	.string "トレーナーズ スクールで\nいろいろ べんきょう したからね\lじっせんで たしかめるよ!{EOS}"
	.if (. - gText_Rom_25D753) > 0x2c
	.error "gText_Rom_25D753 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D753) < 0x2c
	.space 0x2c - (. - gText_Rom_25D753)
	.endif
	@ data/text/trainers.inc:1598 Route116_Text_JerryDefeat (+1 aliases)
	.globl gText_Rom_25D77F
gText_Rom_25D77F: @ 0x0825D77F
	.string "べんきょう さぼってたから\nまけちゃったよ{EOS}"
	.if (. - gText_Rom_25D77F) > 0x16
	.error "gText_Rom_25D77F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D77F) < 0x16
	.space 0x16 - (. - gText_Rom_25D77F)
	.endif
	@ data/text/trainers.inc:1601 Route116_Text_JerryPostBattle (+1 aliases)
	.globl gText_Rom_25D795
gText_Rom_25D795: @ 0x0825D795
	.string "トレーナーズ スクールで\nもういちど べんきょう しなおさなきゃ\lツツジさんに おこられちゃうよ{EOS}"
	.if (. - gText_Rom_25D795) > 0x31
	.error "gText_Rom_25D795 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D795) < 0x31
	.space 0x31 - (. - gText_Rom_25D795)
	.endif
	@ data/text/trainers.inc:1604 Route116_Text_JerryRegister1 (+1 aliases)
	.globl gText_Rom_25D7C6
gText_Rom_25D7C6: @ 0x0825D7C6
	.string "ポケナビには トレーナーが\nとうろく できるん だって\lトレーナーズ スクールで ならったんだ!\pよく わからないから やってみてよ!{EOS}"
	.if (. - gText_Rom_25D7C6) > 0x44
	.error "gText_Rom_25D7C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D7C6) < 0x44
	.space 0x44 - (. - gText_Rom_25D7C6)
	.endif
	@ data/text/trainers.inc:1604 Route116_Text_JerryRegister1 (+1 aliases)
	.globl gText_Rom_25D80A
gText_Rom_25D80A: @ 0x0825D80A
	.string "ポケナビには トレーナーが\nとうろく できるん だって\lトレーナーズ スクールで ならったんだ!\pよく わからないから やってみてよ!{EOS}"
	.if (. - gText_Rom_25D80A) > 0x44
	.error "gText_Rom_25D80A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D80A) < 0x44
	.space 0x44 - (. - gText_Rom_25D80A)
	.endif
	@ data/text/trainers.inc:1610 Route116_Text_JerryRematchIntro (+1 aliases)
	.globl gText_Rom_25D84E
gText_Rom_25D84E: @ 0x0825D84E
	.string "あれから トレーナーズ スクールで\nまじめに べんきょう したからね\lこのまえ みたいに まけたりしないよ!{EOS}"
	.if (. - gText_Rom_25D84E) > 0x37
	.error "gText_Rom_25D84E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D84E) < 0x37
	.space 0x37 - (. - gText_Rom_25D84E)
	.endif
	@ data/text/trainers.inc:1613 Route116_Text_JerryRematchDefeat (+1 aliases)
	.globl gText_Rom_25D885
gText_Rom_25D885: @ 0x0825D885
	.string "あれー?\nきちんと べんきょう したのに{EOS}"
	.if (. - gText_Rom_25D885) > 0x15
	.error "gText_Rom_25D885 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D885) < 0x15
	.space 0x15 - (. - gText_Rom_25D885)
	.endif
	@ data/text/trainers.inc:1601 Route116_Text_JerryPostBattle (+1 aliases)
	.globl gText_Rom_25D89A
gText_Rom_25D89A: @ 0x0825D89A
	.string "トレーナーズ スクールで\nもういちど べんきょう しなおさなきゃ\lツツジさんに おこられちゃうよ{EOS}"
	.if (. - gText_Rom_25D89A) > 0x31
	.error "gText_Rom_25D89A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D89A) < 0x31
	.space 0x31 - (. - gText_Rom_25D89A)
	.endif
	@ data/text/trainers.inc:1619 Route116_Text_KarenIntro (+1 aliases)
	.globl gText_Rom_25D8CB
gText_Rom_25D8CB: @ 0x0825D8CB
	.string "スクールでも べんきょう\nかえりみち でも べんきょうよ!{EOS}"
	.if (. - gText_Rom_25D8CB) > 0x1e
	.error "gText_Rom_25D8CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D8CB) < 0x1e
	.space 0x1e - (. - gText_Rom_25D8CB)
	.endif
	@ data/text/trainers.inc:1622 Route116_Text_KarenDefeat (+1 aliases)
	.globl gText_Rom_25D8E9
gText_Rom_25D8E9: @ 0x0825D8E9
	.string "ショック\nまけちゃったよ{EOS}"
	.if (. - gText_Rom_25D8E9) > 0xd
	.error "gText_Rom_25D8E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D8E9) < 0xd
	.space 0xd - (. - gText_Rom_25D8E9)
	.endif
	@ data/text/trainers.inc:1625 Route116_Text_KarenPostBattle
	.globl gText_Rom_25D8F6
gText_Rom_25D8F6: @ 0x0825D8F6
	.string "ああん! これじゃ ツツジさまのように\nエレガントな トレーナーに なれないわ!{EOS}"
	.if (. - gText_Rom_25D8F6) > 0x29
	.error "gText_Rom_25D8F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D8F6) < 0x29
	.space 0x29 - (. - gText_Rom_25D8F6)
	.endif
	@ data/text/trainers.inc:1628 Route116_Text_KarenRegister1 (+1 aliases)
	.globl gText_Rom_25D91F
gText_Rom_25D91F: @ 0x0825D91F
	.string "あーっ それ ポケナビね!\nあたしも もってるから とうろくして!{EOS}"
	.if (. - gText_Rom_25D91F) > 0x22
	.error "gText_Rom_25D91F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D91F) < 0x22
	.space 0x22 - (. - gText_Rom_25D91F)
	.endif
	@ data/text/trainers.inc:1628 Route116_Text_KarenRegister1 (+1 aliases)
	.globl gText_Rom_25D941
gText_Rom_25D941: @ 0x0825D941
	.string "あーっ それ ポケナビね!\nあたしも もってるから とうろくして!{EOS}"
	.if (. - gText_Rom_25D941) > 0x22
	.error "gText_Rom_25D941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D941) < 0x22
	.space 0x22 - (. - gText_Rom_25D941)
	.endif
	@ data/text/trainers.inc:1634 Route116_Text_KarenRematchIntro (+1 aliases)
	.globl gText_Rom_25D963
gText_Rom_25D963: @ 0x0825D963
	.string "あれから ものすっごく べんきょう したの!\nその せいか みてもらうからね!{EOS}"
	.if (. - gText_Rom_25D963) > 0x28
	.error "gText_Rom_25D963 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D963) < 0x28
	.space 0x28 - (. - gText_Rom_25D963)
	.endif
	@ data/text/trainers.inc:1637 Route116_Text_KarenRematchDefeat (+1 aliases)
	.globl gText_Rom_25D98B
gText_Rom_25D98B: @ 0x0825D98B
	.string "ショック\nまた まけちゃったよ{EOS}"
	.if (. - gText_Rom_25D98B) > 0x10
	.error "gText_Rom_25D98B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D98B) < 0x10
	.space 0x10 - (. - gText_Rom_25D98B)
	.endif
	@ data/text/trainers.inc:1640 Route116_Text_KarenPostRematch
	.globl gText_Rom_25D99B
gText_Rom_25D99B: @ 0x0825D99B
	.string "ツツジさまに かったことが あるの?\nそれじゃ いまの あたしには かてないわ{EOS}"
	.if (. - gText_Rom_25D99B) > 0x28
	.error "gText_Rom_25D99B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D99B) < 0x28
	.space 0x28 - (. - gText_Rom_25D99B)
	.endif
	@ data/text/trainers.inc:1643 Route116_Text_SarahIntro (+1 aliases)
	.globl Route116_Text_SarahIntro
Route116_Text_SarahIntro: @ 0x0825D9C3
	.string "わたくし いままで\nひとに なにかで まけた ことって\lありませんの!{EOS}"
	.if (. - Route116_Text_SarahIntro) > 0x24
	.error "Route116_Text_SarahIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_SarahIntro) < 0x24
	.space 0x24 - (. - Route116_Text_SarahIntro)
	.endif
	@ data/text/trainers.inc:1646 Route116_Text_SarahDefeat (+1 aliases)
	.globl Route116_Text_SarahDefeat
Route116_Text_SarahDefeat: @ 0x0825D9E7
	.string "まあ\nこんなの はじめてですわ!{EOS}"
	.if (. - Route116_Text_SarahDefeat) > 0x11
	.error "Route116_Text_SarahDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_SarahDefeat) < 0x11
	.space 0x11 - (. - Route116_Text_SarahDefeat)
	.endif
	@ data/text/trainers.inc:1649 Route116_Text_SarahPostBattle
	.globl Route116_Text_SarahPostBattle
Route116_Text_SarahPostBattle: @ 0x0825D9F8
	.string "なにふじゆう ない くらし ですけど\nポケモンの ことだけは\lおもいどおりに なりません のね{EOS}"
	.if (. - Route116_Text_SarahPostBattle) > 0x30
	.error "Route116_Text_SarahPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_SarahPostBattle) < 0x30
	.space 0x30 - (. - Route116_Text_SarahPostBattle)
	.endif
	@ data/text/trainers.inc:1652 Route116_Text_DawsonIntro (+1 aliases)
	.globl gText_Rom_25DA28
gText_Rom_25DA28: @ 0x0825DA28
	.string "ぼくの ポケモンの\nうつくしい けなみに みとれて\lキミは なにも できない!{EOS}"
	.if (. - gText_Rom_25DA28) > 0x28
	.error "gText_Rom_25DA28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DA28) < 0x28
	.space 0x28 - (. - gText_Rom_25DA28)
	.endif
	@ data/text/trainers.inc:1655 Route116_Text_DawsonDefeat (+1 aliases)
	.globl gText_Rom_25DA50
gText_Rom_25DA50: @ 0x0825DA50
	.string "そりゃないぜ ベイビー{EOS}"
	.if (. - gText_Rom_25DA50) > 0xc
	.error "gText_Rom_25DA50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DA50) < 0xc
	.space 0xc - (. - gText_Rom_25DA50)
	.endif
	@ data/text/trainers.inc:1658 Route116_Text_DawsonPostBattle
	.globl gText_Rom_25DA5C
gText_Rom_25DA5C: @ 0x0825DA5C
	.string "ああっ\nポケモンの けなみと\lぼくの ヘアーが みだれた!\lびよういん よやく しなきゃ{EOS}"
	.if (. - gText_Rom_25DA5C) > 0x2d
	.error "gText_Rom_25DA5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DA5C) < 0x2d
	.space 0x2d - (. - gText_Rom_25DA5C)
	.endif
	@ data/text/trainers.inc:1661 Route116_Text_DevanIntro (+1 aliases)
	.globl Route116_Text_DevanIntro
Route116_Text_DevanIntro: @ 0x0825DA89
	.string "ガツンと いってみようかあ!{EOS}"
	.if (. - Route116_Text_DevanIntro) > 0xf
	.error "Route116_Text_DevanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_DevanIntro) < 0xf
	.space 0xf - (. - Route116_Text_DevanIntro)
	.endif
	@ data/text/trainers.inc:1664 Route116_Text_DevanDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route116_Text_DevanDefeat
Route116_Text_DevanDefeat: @ 0x0825DA98
	.string "あああ\nしょうぶに ならんな こりゃ{EOS}"
	.if (. - Route116_Text_DevanDefeat) != 0x13
	.error "Route116_Text_DevanDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_25DAA7
	.set gText_Rom_25DAA7, Route116_Text_DevanDefeat + 0xf
	@ data/text/trainers.inc:1667 Route116_Text_DevanPostBattle
	.globl Route116_Text_DevanPostBattle
Route116_Text_DevanPostBattle: @ 0x0825DAAB
	.string "たまには ほかの タイプの\nポケモンも つかって みるかなあ?{EOS}"
	.if (. - Route116_Text_DevanPostBattle) > 0x20
	.error "Route116_Text_DevanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_DevanPostBattle) < 0x20
	.space 0x20 - (. - Route116_Text_DevanPostBattle)
	.endif
	@ data/text/trainers.inc:1670 Route116_Text_JohnsonIntro (+1 aliases)
	.globl Route116_Text_JohnsonIntro
Route116_Text_JohnsonIntro: @ 0x0825DACB
	.string "この さきって いきどまりなんだ\nつまんない から しょうぶ してね{EOS}"
	.if (. - Route116_Text_JohnsonIntro) > 0x23
	.error "Route116_Text_JohnsonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JohnsonIntro) < 0x23
	.space 0x23 - (. - Route116_Text_JohnsonIntro)
	.endif
	@ data/text/trainers.inc:1673 Route116_Text_JohnsonDefeat (+1 aliases)
	.globl Route116_Text_JohnsonDefeat
Route116_Text_JohnsonDefeat: @ 0x0825DAEE
	.string "まけた けど おもしろかったよ!{EOS}"
	.if (. - Route116_Text_JohnsonDefeat) > 0x11
	.error "Route116_Text_JohnsonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JohnsonDefeat) < 0x11
	.space 0x11 - (. - Route116_Text_JohnsonDefeat)
	.endif
	@ data/text/trainers.inc:1676 Route116_Text_JohnsonPostBattle
	.globl gText_Rom_25DAFF
gText_Rom_25DAFF: @ 0x0825DAFF
	.string "まけちゃった から\nぼくの たんパン かしてあげても いーよ!{EOS}"
	.if (. - gText_Rom_25DAFF) > 0x20
	.error "gText_Rom_25DAFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DAFF) < 0x20
	.space 0x20 - (. - gText_Rom_25DAFF)
	.endif
	@ data/text/trainers.inc:1679 Route117_Text_IsaacIntro (+1 aliases)
	.globl Route117_Text_IsaacIntro
Route117_Text_IsaacIntro: @ 0x0825DB1F
	.string "オレが そだてている ポケモンと\nしょうぶ してくれないか?{EOS}"
	.if (. - Route117_Text_IsaacIntro) > 0x1f
	.error "Route117_Text_IsaacIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_IsaacIntro) < 0x1f
	.space 0x1f - (. - Route117_Text_IsaacIntro)
	.endif
	@ data/text/trainers.inc:1682 Route117_Text_IsaacDefeat (+1 aliases)
	.globl Route117_Text_IsaacDefeat
Route117_Text_IsaacDefeat: @ 0x0825DB3E
	.string "みごとに そだててるね……{EOS}"
	.if (. - Route117_Text_IsaacDefeat) > 0xe
	.error "Route117_Text_IsaacDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_IsaacDefeat) < 0xe
	.space 0xe - (. - Route117_Text_IsaacDefeat)
	.endif
	@ data/text/trainers.inc:1685 Route117_Text_IsaacPostBattle
	.globl gText_Rom_25DB4C
gText_Rom_25DB4C: @ 0x0825DB4C
	.string "つよさ だけが ポケモンじゃないよ!\nポケモンの こせいを みがきあげるのも\lたのしみかたの ひとつ だね!{EOS}"
	.if (. - gText_Rom_25DB4C) > 0x37
	.error "gText_Rom_25DB4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DB4C) < 0x37
	.space 0x37 - (. - gText_Rom_25DB4C)
	.endif
	@ data/text/trainers.inc:1688 Route117_Text_IsaacRegister
	.globl gText_Rom_25DB83
gText_Rom_25DB83: @ 0x0825DB83
	.string "よーし ますます がんばって そだてるぞ!\nきみ そしたら みにきて くれるだろ?{EOS}"
	.if (. - gText_Rom_25DB83) > 0x2a
	.error "gText_Rom_25DB83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DB83) < 0x2a
	.space 0x2a - (. - gText_Rom_25DB83)
	.endif
	@ data/text/trainers.inc:1691 Route117_Text_IsaacRematchIntro (+1 aliases)
	.globl Route117_Text_IsaacRematchIntro
Route117_Text_IsaacRematchIntro: @ 0x0825DBAD
	.string "オレが そだてている ポケモン\nあいかわらず いい かんじ だよ!{EOS}"
	.if (. - Route117_Text_IsaacRematchIntro) > 0x22
	.error "Route117_Text_IsaacRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_IsaacRematchIntro) < 0x22
	.space 0x22 - (. - Route117_Text_IsaacRematchIntro)
	.endif
	@ data/text/trainers.inc:1694 Route117_Text_IsaacRematchDefeat (+1 aliases)
	.globl Route117_Text_IsaacRematchDefeat
Route117_Text_IsaacRematchDefeat: @ 0x0825DBCF
	.string "いい そだてかた してるね……\nきみには そだてやの さいのう あるかも{EOS}"
	.if (. - Route117_Text_IsaacRematchDefeat) > 0x25
	.error "Route117_Text_IsaacRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_IsaacRematchDefeat) < 0x25
	.space 0x25 - (. - Route117_Text_IsaacRematchDefeat)
	.endif
	@ data/text/trainers.inc:1697 Route117_Text_IsaacPostRematch
	.globl gText_Rom_25DBF4
gText_Rom_25DBF4: @ 0x0825DBF4
	.string "いい ぐあいに そだってるね!\nミナモシティの ポケモンコンテストに\lでることを おすすめ するよ!{EOS}"
	.if (. - gText_Rom_25DBF4) > 0x33
	.error "gText_Rom_25DBF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DBF4) < 0x33
	.space 0x33 - (. - gText_Rom_25DBF4)
	.endif
	@ data/text/trainers.inc:1700 Route117_Text_LydiaIntro (+1 aliases)
	.globl gText_Rom_25DC27
gText_Rom_25DC27: @ 0x0825DC27
	.string "ポケモンを ちゃんと そだててるか\nわたしが たしかめて あげますね{EOS}"
	.if (. - gText_Rom_25DC27) > 0x23
	.error "gText_Rom_25DC27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DC27) < 0x23
	.space 0x23 - (. - gText_Rom_25DC27)
	.endif
	@ data/text/trainers.inc:1703 Route117_Text_LydiaDefeat (+1 aliases)
	.globl gText_Rom_25DC4A
gText_Rom_25DC4A: @ 0x0825DC4A
	.string "ちゃんと そだってますね{EOS}"
	.if (. - gText_Rom_25DC4A) > 0xd
	.error "gText_Rom_25DC4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DC4A) < 0xd
	.space 0xd - (. - gText_Rom_25DC4A)
	.endif
	@ data/text/trainers.inc:1706 Route117_Text_LydiaPostBattle
	.globl Route117_Text_LydiaPostBattle
Route117_Text_LydiaPostBattle: @ 0x0825DC57
	.string "ポケモンの こせいにも きをくばって\nそだてて みて くださいね{EOS}"
	.if (. - Route117_Text_LydiaPostBattle) > 0x21
	.error "Route117_Text_LydiaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_LydiaPostBattle) < 0x21
	.space 0x21 - (. - Route117_Text_LydiaPostBattle)
	.endif
	@ data/text/trainers.inc:1709 Route117_Text_LydiaRegister
	.globl Route117_Text_LydiaRegister
Route117_Text_LydiaRegister: @ 0x0825DC78
	.string "よい トレーナーさんに あえて よかった!\nこれからも よろしく おねがいしますね{EOS}"
	.if (. - Route117_Text_LydiaRegister) > 0x2a
	.error "Route117_Text_LydiaRegister may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_LydiaRegister) < 0x2a
	.space 0x2a - (. - Route117_Text_LydiaRegister)
	.endif
	@ data/text/trainers.inc:1712 Route117_Text_LydiaRematchIntro (+1 aliases)
	.globl gText_Rom_25DCA2
gText_Rom_25DCA2: @ 0x0825DCA2
	.string "ポケモンを ちゃんと そだててるか\nまた わたしが たしかめて あげますね{EOS}"
	.if (. - gText_Rom_25DCA2) > 0x26
	.error "gText_Rom_25DCA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DCA2) < 0x26
	.space 0x26 - (. - gText_Rom_25DCA2)
	.endif
	@ data/text/trainers.inc:1715 Route117_Text_LydiaRematchDefeat (+1 aliases)
	.globl gText_Rom_25DCC8
gText_Rom_25DCC8: @ 0x0825DCC8
	.string "みごとに そだってますね{EOS}"
	.if (. - gText_Rom_25DCC8) > 0xd
	.error "gText_Rom_25DCC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DCC8) < 0xd
	.space 0xd - (. - gText_Rom_25DCC8)
	.endif
	@ data/text/trainers.inc:1718 Route117_Text_LydiaPostRematch
	.globl Route117_Text_LydiaPostRematch
Route117_Text_LydiaPostRematch: @ 0x0825DCD5
	.string "ポケモンの せいかくに よって\nすきな ポロックが あるみたいなの{EOS}"
	.if (. - Route117_Text_LydiaPostRematch) > 0x22
	.error "Route117_Text_LydiaPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_LydiaPostRematch) < 0x22
	.space 0x22 - (. - Route117_Text_LydiaPostRematch)
	.endif
	@ data/text/trainers.inc:1721 Route117_Text_DylanIntro (+1 aliases)
	.globl Route117_Text_DylanIntro
Route117_Text_DylanIntro: @ 0x0825DCF7
	.string "トライアスロンの まっさいちゅう だけど\nさくっと しょうぶ しようじゃ ないか!{EOS}"
	.if (. - Route117_Text_DylanIntro) > 0x2a
	.error "Route117_Text_DylanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DylanIntro) < 0x2a
	.space 0x2a - (. - Route117_Text_DylanIntro)
	.endif
	@ data/text/trainers.inc:1724 Route117_Text_DylanDefeat (+1 aliases)
	.globl Route117_Text_DylanDefeat
Route117_Text_DylanDefeat: @ 0x0825DD21
	.string "たいりょく なくなった!{EOS}"
	.if (. - Route117_Text_DylanDefeat) > 0xd
	.error "Route117_Text_DylanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DylanDefeat) < 0xd
	.space 0xd - (. - Route117_Text_DylanDefeat)
	.endif
	@ data/text/trainers.inc:1727 Route117_Text_DylanPostBattle
	.globl gText_Rom_25DD2E
gText_Rom_25DD2E: @ 0x0825DD2E
	.string "まいったな……\pいまの しょうぶの あいだに\nビリに なっちゃったかも……?{EOS}"
	.if (. - gText_Rom_25DD2E) > 0x27
	.error "gText_Rom_25DD2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DD2E) < 0x27
	.space 0x27 - (. - gText_Rom_25DD2E)
	.endif
	@ data/text/trainers.inc:1730 Route117_Text_DylanRegister
	.globl gText_Rom_25DD55
gText_Rom_25DD55: @ 0x0825DD55
	.string "ポケモンも つよく なくちゃ ダメか?\nきみさ たまに ぼくを きたえてよ!{EOS}"
	.if (. - gText_Rom_25DD55) > 0x27
	.error "gText_Rom_25DD55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DD55) < 0x27
	.space 0x27 - (. - gText_Rom_25DD55)
	.endif
	@ data/text/trainers.inc:1733 Route117_Text_DylanRematchIntro (+1 aliases)
	.globl Route117_Text_DylanRematchIntro
Route117_Text_DylanRematchIntro: @ 0x0825DD7C
	.string "トライアスロンの まっさいちゅう だけど\nぼくには よゆうが あるからね\lさくっと しょうぶ しようじゃ ないか!{EOS}"
	.if (. - Route117_Text_DylanRematchIntro) > 0x3a
	.error "Route117_Text_DylanRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DylanRematchIntro) < 0x3a
	.space 0x3a - (. - Route117_Text_DylanRematchIntro)
	.endif
	@ data/text/trainers.inc:1736 Route117_Text_DylanRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route117_Text_DylanRematchDefeat
Route117_Text_DylanRematchDefeat: @ 0x0825DDB6
	.string "また たいりょく なくなった!{EOS}"
	.if (. - Route117_Text_DylanRematchDefeat) != 0x10
	.error "Route117_Text_DylanRematchDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_25DDB9
	.set gText_Rom_25DDB9, Route117_Text_DylanRematchDefeat + 0x3
	@ data/text/trainers.inc:1739 Route117_Text_DylanPostRematch
	.globl gText_Rom_25DDC6
gText_Rom_25DDC6: @ 0x0825DDC6
	.string "およぎと じてんしゃでは トップだったけど\nポケモンは いまいち じしんが ないよ{EOS}"
	.if (. - gText_Rom_25DDC6) > 0x2a
	.error "gText_Rom_25DDC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DDC6) < 0x2a
	.space 0x2a - (. - gText_Rom_25DDC6)
	.endif
	@ data/text/trainers.inc:1742 Route117_Text_MariaIntro (+1 aliases)
	.globl gText_Rom_25DDF0
gText_Rom_25DDF0: @ 0x0825DDF0
	.string "トライアスロンの れんしゅう\nポケモンと いっしょに してるからさ\lスピードに じしん あるよ!{EOS}"
	.if (. - gText_Rom_25DDF0) > 0x31
	.error "gText_Rom_25DDF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DDF0) < 0x31
	.space 0x31 - (. - gText_Rom_25DDF0)
	.endif
	@ data/text/trainers.inc:1745 Route117_Text_MariaDefeat (+2 aliases)
	.globl gText_Rom_25DE21
gText_Rom_25DE21: @ 0x0825DE21
	.string "れんしゅうが たりなかったかな?{EOS}"
	.if (. - gText_Rom_25DE21) > 0x11
	.error "gText_Rom_25DE21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DE21) < 0x11
	.space 0x11 - (. - gText_Rom_25DE21)
	.endif
	@ data/text/trainers.inc:1748 Route117_Text_MariaPostBattle
	.globl Route117_Text_MariaPostBattle
Route117_Text_MariaPostBattle: @ 0x0825DE32
	.string "れんしゅうは つづけてこそ\nいみが あるのよね\pよーし! また れんしゅうよ\nあしたから!{EOS}"
	.if (. - Route117_Text_MariaPostBattle) > 0x2e
	.error "Route117_Text_MariaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MariaPostBattle) < 0x2e
	.space 0x2e - (. - Route117_Text_MariaPostBattle)
	.endif
	@ data/text/trainers.inc:1751 Route117_Text_MariaRegister
	.globl Route117_Text_MariaRegister
Route117_Text_MariaRegister: @ 0x0825DE60
	.string "あなたは れんしゅう してる?\nよかったら わたしが あいてになるわ!{EOS}"
	.if (. - Route117_Text_MariaRegister) > 0x24
	.error "Route117_Text_MariaRegister may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MariaRegister) < 0x24
	.space 0x24 - (. - Route117_Text_MariaRegister)
	.endif
	@ data/text/trainers.inc:1754 Route117_Text_MariaRematchIntro (+1 aliases)
	.globl gText_Rom_25DE84
gText_Rom_25DE84: @ 0x0825DE84
	.string "どう れんしゅう つづけてる?\nあたしは もちろん つづけてるわ\lその しょうこ みせちゃうから!{EOS}"
	.if (. - gText_Rom_25DE84) > 0x32
	.error "gText_Rom_25DE84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DE84) < 0x32
	.space 0x32 - (. - gText_Rom_25DE84)
	.endif
	@ data/text/trainers.inc:1745 Route117_Text_MariaDefeat (+2 aliases)
	.globl gText_Rom_25DEB6
gText_Rom_25DEB6: @ 0x0825DEB6
	.string "れんしゅうが たりなかったかな?{EOS}"
	.if (. - gText_Rom_25DEB6) > 0x11
	.error "gText_Rom_25DEB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DEB6) < 0x11
	.space 0x11 - (. - gText_Rom_25DEB6)
	.endif
	@ data/text/trainers.inc:1760 Route117_Text_MariaPostRematch
	.globl Route117_Text_MariaPostRematch
Route117_Text_MariaPostRematch: @ 0x0825DEC7
	.string "あしたから また れんしゅう するから\nよかったら また しょうぶ してね!{EOS}"
	.if (. - Route117_Text_MariaPostRematch) > 0x27
	.error "Route117_Text_MariaPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MariaPostRematch) < 0x27
	.space 0x27 - (. - Route117_Text_MariaPostRematch)
	.endif
	@ data/text/trainers.inc:1763 Route117_Text_DerekIntro (+1 aliases)
	.globl Route117_Text_DerekIntro
Route117_Text_DerekIntro: @ 0x0825DEEE
	.string "むかしは むしとりしょうねん!\nいまは こんちゅうマニア!\pでも ポケモンを あいする きもちは\nずっと かわらないぜ!{EOS}"
	.if (. - Route117_Text_DerekIntro) > 0x3d
	.error "Route117_Text_DerekIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DerekIntro) < 0x3d
	.space 0x3d - (. - Route117_Text_DerekIntro)
	.endif
	@ data/text/trainers.inc:1766 Route117_Text_DerekDefeat (+1 aliases)
	.globl Route117_Text_DerekDefeat
Route117_Text_DerekDefeat: @ 0x0825DF2B
	.string "ポケモンの よわさも かわらない……{EOS}"
	.if (. - Route117_Text_DerekDefeat) > 0x13
	.error "Route117_Text_DerekDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DerekDefeat) < 0x13
	.space 0x13 - (. - Route117_Text_DerekDefeat)
	.endif
	@ data/text/trainers.inc:1769 Route117_Text_DerekPostBattle
	.globl gText_Rom_25DF3E
gText_Rom_25DF3E: @ 0x0825DF3E
	.string "すきな ことばかり していたら\nいつのまにか マニアって よばれてるよ!\pまあ むしポケモンに くわしいからね\nマニアと よばれて とうぜん なのさっ!{EOS}"
	.if (. - gText_Rom_25DF3E) > 0x4d
	.error "gText_Rom_25DF3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DF3E) < 0x4d
	.space 0x4d - (. - gText_Rom_25DF3E)
	.endif
	@ data/text/trainers.inc:1772 Route117_Text_AnnaIntro (+1 aliases)
	.globl Route117_Text_AnnaIntro
Route117_Text_AnnaIntro: @ 0x0825DF8B
	.string "ミホ『かわいい コウハイの まえ だもん\nいいところ みせちゃうんだから!{EOS}"
	.if (. - Route117_Text_AnnaIntro) > 0x26
	.error "Route117_Text_AnnaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaIntro) < 0x26
	.space 0x26 - (. - Route117_Text_AnnaIntro)
	.endif
	@ data/text/trainers.inc:1775 Route117_Text_AnnaDefeat (+1 aliases)
	.globl Route117_Text_AnnaDefeat
Route117_Text_AnnaDefeat: @ 0x0825DFB1
	.string "ミホ『もう!\nコウハイの まえ だから かたせてよ!{EOS}"
	.if (. - Route117_Text_AnnaDefeat) > 0x1b
	.error "Route117_Text_AnnaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaDefeat) < 0x1b
	.space 0x1b - (. - Route117_Text_AnnaDefeat)
	.endif
	@ data/text/trainers.inc:1778 Route117_Text_AnnaPostBattle
	.globl gText_Rom_25DFCC
gText_Rom_25DFCC: @ 0x0825DFCC
	.string "ミホ『あなたの ポケモン\nなかなかの コンビネーション してる!\pそうね あたしたちの\nつぎ ぐらいに すごいんじゃない?{EOS}"
	.if (. - gText_Rom_25DFCC) > 0x3e
	.error "gText_Rom_25DFCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DFCC) < 0x3e
	.space 0x3e - (. - gText_Rom_25DFCC)
	.endif
	@ data/text/trainers.inc:1781 Route117_Text_AnnaAndMegRegister
	.globl Route117_Text_AnnaAndMegRegister
Route117_Text_AnnaAndMegRegister: @ 0x0825E00A
	.string "ミホ『まけっぱなしでは\nひきさがれない わたしたち!\lまた きて くれるわよね?{EOS}"
	.if (. - Route117_Text_AnnaAndMegRegister) > 0x29
	.error "Route117_Text_AnnaAndMegRegister may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaAndMegRegister) < 0x29
	.space 0x29 - (. - Route117_Text_AnnaAndMegRegister)
	.endif
	@ data/text/trainers.inc:1784 Route117_Text_AnnaNotEnoughMons (+2 aliases)
	.globl gText_Rom_25E033
gText_Rom_25E033: @ 0x0825E033
	.string "ミホ『あたしたちと しょうぶ したいなら\nポケモンを 2ひきは もってきてね!{EOS}"
	.if (. - gText_Rom_25E033) > 0x28
	.error "gText_Rom_25E033 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E033) < 0x28
	.space 0x28 - (. - gText_Rom_25E033)
	.endif
	@ data/text/trainers.inc:1787 Route117_Text_MegIntro (+1 aliases)
	.globl Route117_Text_MegIntro
Route117_Text_MegIntro: @ 0x0825E05B
	.string "リコ『すてきな センパイとの タッグで\nあなたを まかしちゃうから!{EOS}"
	.if (. - Route117_Text_MegIntro) > 0x23
	.error "Route117_Text_MegIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MegIntro) < 0x23
	.space 0x23 - (. - Route117_Text_MegIntro)
	.endif
	@ data/text/trainers.inc:1790 Route117_Text_MegDefeat (+1 aliases)
	.globl Route117_Text_MegDefeat
Route117_Text_MegDefeat: @ 0x0825E07E
	.string "リコ『やーん\nセンパイ ごめんなさい!{EOS}"
	.if (. - Route117_Text_MegDefeat) > 0x14
	.error "Route117_Text_MegDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MegDefeat) < 0x14
	.space 0x14 - (. - Route117_Text_MegDefeat)
	.endif
	@ data/text/trainers.inc:1793 Route117_Text_MegPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route117_Text_MegPostBattle
Route117_Text_MegPostBattle: @ 0x0825E092
	.string "リコ『あたしが センパイの\nあしを ひっぱっちゃったの……\pそうでなきゃ あんた かってないわよ!{EOS}"
	.if (. - Route117_Text_MegPostBattle) != 0x32
	.error "Route117_Text_MegPostBattle must retain its original byte length"
	.endif
	.globl gText_Rom_25E0C0
	.set gText_Rom_25E0C0, Route117_Text_MegPostBattle + 0x2e
	@ data/text/trainers.inc:1796 Route117_Text_MegNotEnoughMons (+2 aliases)
	.globl gText_Rom_25E0C4
gText_Rom_25E0C4: @ 0x0825E0C4
	.string "リコ『ポケモン 1ぴき しか いないの?\nじゃあ しょうぶは できないわね\pあたしたち 2たい2の\nしょうぶを たのしみたいの!{EOS}"
	.if (. - gText_Rom_25E0C4) > 0x41
	.error "gText_Rom_25E0C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E0C4) < 0x41
	.space 0x41 - (. - gText_Rom_25E0C4)
	.endif
	@ data/text/trainers.inc:1799 Route117_Text_AnnaRematchIntro (+1 aliases)
	.globl Route117_Text_AnnaRematchIntro
Route117_Text_AnnaRematchIntro: @ 0x0825E105
	.string "ミホ『コウハイの まえで\nなんども まけてられないのよね{EOS}"
	.if (. - Route117_Text_AnnaRematchIntro) > 0x1d
	.error "Route117_Text_AnnaRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaRematchIntro) < 0x1d
	.space 0x1d - (. - Route117_Text_AnnaRematchIntro)
	.endif
	@ data/text/trainers.inc:1802 Route117_Text_AnnaRematchDefeat (+1 aliases)
	.globl Route117_Text_AnnaRematchDefeat
Route117_Text_AnnaRematchDefeat: @ 0x0825E122
	.string "ミホ『ちょうしが でなかったのよ{EOS}"
	.if (. - Route117_Text_AnnaRematchDefeat) > 0x11
	.error "Route117_Text_AnnaRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaRematchDefeat) < 0x11
	.space 0x11 - (. - Route117_Text_AnnaRematchDefeat)
	.endif
	@ data/text/trainers.inc:1805 Route117_Text_AnnaPostRematch
	.globl gText_Rom_25E133
gText_Rom_25E133: @ 0x0825E133
	.string "ミホ『あなたの ポケモン\nなかなかの コンビネーションしてる!\pそうね あたしたちの\nつぎ ぐらいに すごいんじゃない?{EOS}"
	.if (. - gText_Rom_25E133) > 0x3d
	.error "gText_Rom_25E133 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E133) < 0x3d
	.space 0x3d - (. - gText_Rom_25E133)
	.endif
	@ data/text/trainers.inc:1784 Route117_Text_AnnaNotEnoughMons (+2 aliases)
	.globl gText_Rom_25E170
gText_Rom_25E170: @ 0x0825E170
	.string "ミホ『あたしたちと しょうぶ したいなら\nポケモンを 2ひきは もってきてね!{EOS}"
	.if (. - gText_Rom_25E170) > 0x28
	.error "gText_Rom_25E170 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E170) < 0x28
	.space 0x28 - (. - gText_Rom_25E170)
	.endif
	@ data/text/trainers.inc:1811 Route117_Text_MegRematchIntro (+1 aliases)
	.globl Route117_Text_MegRematchIntro
Route117_Text_MegRematchIntro: @ 0x0825E198
	.string "リコ『センパイとの タッグで\nこんどこそ あなたを まかしちゃうから!{EOS}"
	.if (. - Route117_Text_MegRematchIntro) > 0x24
	.error "Route117_Text_MegRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MegRematchIntro) < 0x24
	.space 0x24 - (. - Route117_Text_MegRematchIntro)
	.endif
	@ data/text/trainers.inc:1814 Route117_Text_MegRematchDefeat (+1 aliases)
	.globl Route117_Text_MegRematchDefeat
Route117_Text_MegRematchDefeat: @ 0x0825E1BC
	.string "リコ『つよすぎるわ{EOS}"
	.if (. - Route117_Text_MegRematchDefeat) > 0xa
	.error "Route117_Text_MegRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MegRematchDefeat) < 0xa
	.space 0xa - (. - Route117_Text_MegRematchDefeat)
	.endif
	@ data/text/trainers.inc:1817 Route117_Text_MegPostRematch
	.globl gText_Rom_25E1C6
gText_Rom_25E1C6: @ 0x0825E1C6
	.string "リコ『センパイと いっしょに たたかったのに\nまけるだなんて…… おちこんじゃう!{EOS}"
	.if (. - gText_Rom_25E1C6) > 0x2a
	.error "gText_Rom_25E1C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E1C6) < 0x2a
	.space 0x2a - (. - gText_Rom_25E1C6)
	.endif
	@ data/text/trainers.inc:1796 Route117_Text_MegNotEnoughMons (+2 aliases)
	.globl gText_Rom_25E1F0
gText_Rom_25E1F0: @ 0x0825E1F0
	.string "リコ『ポケモン 1ぴき しか いないの?\nじゃあ しょうぶは できないわね\pあたしたち 2たい2の\nしょうぶを たのしみたいの!{EOS}"
	.if (. - gText_Rom_25E1F0) > 0x41
	.error "gText_Rom_25E1F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E1F0) < 0x41
	.space 0x41 - (. - gText_Rom_25E1F0)
	.endif
	@ data/text/trainers.inc:1823 Route117_Text_MelinaIntro (+1 aliases)
	.globl Route117_Text_MelinaIntro
Route117_Text_MelinaIntro: @ 0x0825E231
	.string "すてきな おはなを みながら\nしょうぶする なんて すてきよね!{EOS}"
	.if (. - Route117_Text_MelinaIntro) > 0x21
	.error "Route117_Text_MelinaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MelinaIntro) < 0x21
	.space 0x21 - (. - Route117_Text_MelinaIntro)
	.endif
	@ data/text/trainers.inc:1826 Route117_Text_MelinaDefeat (+1 aliases)
	.globl Route117_Text_MelinaDefeat
Route117_Text_MelinaDefeat: @ 0x0825E252
	.string "へーえ いいカンジね あんた!{EOS}"
	.if (. - Route117_Text_MelinaDefeat) > 0x10
	.error "Route117_Text_MelinaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MelinaDefeat) < 0x10
	.space 0x10 - (. - Route117_Text_MelinaDefeat)
	.endif
	@ data/text/trainers.inc:1829 Route117_Text_MelinaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route117_Text_MelinaPostBattle
Route117_Text_MelinaPostBattle: @ 0x0825E262
	.string "おはなを みながら はしると\nきもちいいわよ!{EOS}"
	.if (. - Route117_Text_MelinaPostBattle) != 0x18
	.error "Route117_Text_MelinaPostBattle must retain its original byte length"
	.endif
	.globl gText_Rom_25E276
	.set gText_Rom_25E276, Route117_Text_MelinaPostBattle + 0x14
	@ data/text/trainers.inc:1832 Route117_Text_BrandiIntro (+1 aliases)
	.globl gText_Rom_25E27A
gText_Rom_25E27A: @ 0x0825E27A
	.string "エスパーポケモンに\nひめられた ちからを おみせするわ!{EOS}"
	.if (. - gText_Rom_25E27A) > 0x1d
	.error "gText_Rom_25E27A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E27A) < 0x1d
	.space 0x1d - (. - gText_Rom_25E27A)
	.endif
	@ data/text/trainers.inc:1835 Route117_Text_BrandiDefeat (+1 aliases)
	.globl gText_Rom_25E297
gText_Rom_25E297: @ 0x0825E297
	.string "おどろいたわ{EOS}"
	.if (. - gText_Rom_25E297) > 0x7
	.error "gText_Rom_25E297 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E297) < 0x7
	.space 0x7 - (. - gText_Rom_25E297)
	.endif
	@ data/text/trainers.inc:1838 Route117_Text_BrandiPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route117_Text_BrandiPostBattle
Route117_Text_BrandiPostBattle: @ 0x0825E29E
	.string "エスパーポケモンは おくが ふかいの\nあなたも つかまえて ごらんなさい{EOS}"
	.if (. - Route117_Text_BrandiPostBattle) != 0x25
	.error "Route117_Text_BrandiPostBattle must retain its original byte length"
	.endif
	.globl gText_Rom_25E2BF
	.set gText_Rom_25E2BF, Route117_Text_BrandiPostBattle + 0x21
	@ data/text/trainers.inc:1841 Route117_Text_AishaIntro (+1 aliases)
	.globl Route117_Text_AishaIntro
Route117_Text_AishaIntro: @ 0x0825E2C3
	.string "かつこと だけを かんがえて たたかうわ!{EOS}"
	.if (. - Route117_Text_AishaIntro) > 0x16
	.error "Route117_Text_AishaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AishaIntro) < 0x16
	.space 0x16 - (. - Route117_Text_AishaIntro)
	.endif
	@ data/text/trainers.inc:1844 Route117_Text_AishaDefeat (+1 aliases)
	.globl Route117_Text_AishaDefeat
Route117_Text_AishaDefeat: @ 0x0825E2D9
	.string "まけても くやしがったり しない!\nそんなひまが あったら とっくんよ{EOS}"
	.if (. - Route117_Text_AishaDefeat) > 0x24
	.error "Route117_Text_AishaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AishaDefeat) < 0x24
	.space 0x24 - (. - Route117_Text_AishaDefeat)
	.endif
	@ data/text/trainers.inc:1847 Route117_Text_AishaPostBattle
	.globl Route117_Text_AishaPostBattle
Route117_Text_AishaPostBattle: @ 0x0825E2FD
	.string "まけるかな?と しんぱい すると\nよけいに まけちゃうと おもうのよね{EOS}"
	.if (. - Route117_Text_AishaPostBattle) > 0x24
	.error "Route117_Text_AishaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AishaPostBattle) < 0x24
	.space 0x24 - (. - Route117_Text_AishaPostBattle)
	.endif
	@ data/text/trainers.inc:1850 Route118_Text_RoseIntro (+1 aliases)
	.globl gText_Rom_25E321
gText_Rom_25E321: @ 0x0825E321
	.string "はなの かおりは ふしぎな ちから\nからだも こころも きれいに なるわ{EOS}"
	.if (. - gText_Rom_25E321) > 0x25
	.error "gText_Rom_25E321 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E321) < 0x25
	.space 0x25 - (. - gText_Rom_25E321)
	.endif
	@ data/text/trainers.inc:1853 Route118_Text_RoseDefeat (+1 aliases)
	.globl gText_Rom_25E346
gText_Rom_25E346: @ 0x0825E346
	.string "あらら\nまけちゃったわね{EOS}"
	.if (. - gText_Rom_25E346) > 0xd
	.error "gText_Rom_25E346 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E346) < 0xd
	.space 0xd - (. - gText_Rom_25E346)
	.endif
	@ data/text/trainers.inc:1856 Route118_Text_RosePostBattle
	.globl Route118_Text_RosePostBattle
Route118_Text_RosePostBattle: @ 0x0825E353
	.string "はなも ポケモンも\nいい かおりの ものが だいすき!\lクサイにおいは…… かんべんね{EOS}"
	.if (. - Route118_Text_RosePostBattle) > 0x2c
	.error "Route118_Text_RosePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_RosePostBattle) < 0x2c
	.space 0x2c - (. - Route118_Text_RosePostBattle)
	.endif
	@ data/text/trainers.inc:1859 Route118_Text_RoseRegister
	.globl Route118_Text_RoseRegister
Route118_Text_RoseRegister: @ 0x0825E37F
	.string "あら その においは ポケナビね\nぜひとも とうろく しあいましょう!{EOS}"
	.if (. - Route118_Text_RoseRegister) > 0x24
	.error "Route118_Text_RoseRegister may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_RoseRegister) < 0x24
	.space 0x24 - (. - Route118_Text_RoseRegister)
	.endif
	@ data/text/trainers.inc:1862 Route118_Text_RoseRematchIntro (+1 aliases)
	.globl Route118_Text_RoseRematchIntro
Route118_Text_RoseRematchIntro: @ 0x0825E3A3
	.string "いい かおりに さそわれて\nいらしたのかしら?{EOS}"
	.if (. - Route118_Text_RoseRematchIntro) > 0x18
	.error "Route118_Text_RoseRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_RoseRematchIntro) < 0x18
	.space 0x18 - (. - Route118_Text_RoseRematchIntro)
	.endif
	@ data/text/trainers.inc:1865 Route118_Text_RoseRematchDefeat (+1 aliases)
	.globl Route118_Text_RoseRematchDefeat
Route118_Text_RoseRematchDefeat: @ 0x0825E3BB
	.string "においの こうか……\nあんまり きかなかったわね{EOS}"
	.if (. - Route118_Text_RoseRematchDefeat) > 0x19
	.error "Route118_Text_RoseRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_RoseRematchDefeat) < 0x19
	.space 0x19 - (. - Route118_Text_RoseRematchDefeat)
	.endif
	@ data/text/trainers.inc:1868 Route118_Text_RosePostRematch
	.globl gText_Rom_25E3D4
gText_Rom_25E3D4: @ 0x0825E3D4
	.string "あまいかおりを うまく つかうと\nポケモンが さそわれて やってくるわね{EOS}"
	.if (. - gText_Rom_25E3D4) > 0x25
	.error "gText_Rom_25E3D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E3D4) < 0x25
	.space 0x25 - (. - gText_Rom_25E3D4)
	.endif
	@ data/text/trainers.inc:1871 Route118_Text_PerryIntro (+1 aliases)
	.globl Route118_Text_PerryIntro
Route118_Text_PerryIntro: @ 0x0825E3F9
	.string "かれいに おおぞらを まう\nとりポケモンが さいこう だぜ!{EOS}"
	.if (. - Route118_Text_PerryIntro) > 0x1f
	.error "Route118_Text_PerryIntro may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_PerryIntro) < 0x1f
	.space 0x1f - (. - Route118_Text_PerryIntro)
	.endif
	@ data/text/trainers.inc:1874 Route118_Text_PerryDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route118_Text_PerryDefeat
Route118_Text_PerryDefeat: @ 0x0825E418
	.string "うう…… まけた……{EOS}"
	.if (. - Route118_Text_PerryDefeat) != 0xb
	.error "Route118_Text_PerryDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_25E41D
	.set gText_Rom_25E41D, Route118_Text_PerryDefeat + 0x5
	@ data/text/trainers.inc:1877 Route118_Text_PerryPostBattle
	.globl Route118_Text_PerryPostBattle
Route118_Text_PerryPostBattle: @ 0x0825E423
	.string "きみも いい ポケモンを もってるね!\nぼくも まけずに そだてよっと!{EOS}"
	.if (. - Route118_Text_PerryPostBattle) > 0x25
	.error "Route118_Text_PerryPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_PerryPostBattle) < 0x25
	.space 0x25 - (. - Route118_Text_PerryPostBattle)
	.endif
	@ data/text/trainers.inc:1880 Route118_Text_ChesterIntro (+1 aliases)
	.globl gText_Rom_25E448
gText_Rom_25E448: @ 0x0825E448
	.string "はばたけ!\nおいらの とりポケモン!{EOS}"
	.if (. - gText_Rom_25E448) > 0x13
	.error "gText_Rom_25E448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E448) < 0x13
	.space 0x13 - (. - gText_Rom_25E448)
	.endif
	@ data/text/trainers.inc:1883 Route118_Text_ChesterDefeat (+1 aliases)
	.globl gText_Rom_25E45B
gText_Rom_25E45B: @ 0x0825E45B
	.string "はばたいたけど……{EOS}"
	.if (. - gText_Rom_25E45B) > 0xa
	.error "gText_Rom_25E45B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E45B) < 0xa
	.space 0xa - (. - gText_Rom_25E45B)
	.endif
	@ data/text/trainers.inc:1886 Route118_Text_ChesterPostBattle
	.globl gText_Rom_25E465
gText_Rom_25E465: @ 0x0825E465
	.string "もっと つよくなると\nじゆうに とべるように なるのにな!{EOS}"
	.if (. - gText_Rom_25E465) > 0x1e
	.error "gText_Rom_25E465 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E465) < 0x1e
	.space 0x1e - (. - gText_Rom_25E465)
	.endif
	@ data/text/trainers.inc:1889 Route118_Text_BarnyIntro (+1 aliases)
	.globl Route118_Text_BarnyIntro
Route118_Text_BarnyIntro: @ 0x0825E483
	.string "あたしゃ つりびとだが トレーナーでもある\nつった ポケモン ちゃんと そだててるよ!{EOS}"
	.if (. - Route118_Text_BarnyIntro) > 0x2c
	.error "Route118_Text_BarnyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_BarnyIntro) < 0x2c
	.space 0x2c - (. - Route118_Text_BarnyIntro)
	.endif
	@ data/text/trainers.inc:1892 Route118_Text_BarnyDefeat (+1 aliases)
	.globl Route118_Text_BarnyDefeat
Route118_Text_BarnyDefeat: @ 0x0825E4AF
	.string "そだてたはず なんだが……?{EOS}"
	.if (. - Route118_Text_BarnyDefeat) > 0xf
	.error "Route118_Text_BarnyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_BarnyDefeat) < 0xf
	.space 0xf - (. - Route118_Text_BarnyDefeat)
	.endif
	@ data/text/trainers.inc:1895 Route118_Text_BarnyPostBattle
	.globl gText_Rom_25E4BE
gText_Rom_25E4BE: @ 0x0825E4BE
	.string "つりを しながら\nポケモン そだてても かてなかった……\lどっちも はんぱ だったのか!?{EOS}"
	.if (. - gText_Rom_25E4BE) > 0x2e
	.error "gText_Rom_25E4BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E4BE) < 0x2e
	.space 0x2e - (. - gText_Rom_25E4BE)
	.endif
	@ data/text/trainers.inc:1898 Route118_Text_WadeIntro (+1 aliases)
	.globl gText_Rom_25E4EC
gText_Rom_25E4EC: @ 0x0825E4EC
	.string "つりびとに だいじ なのは どうぐ!\nトレーナーに だいじ なのは\lもちろん ポケモンと ハートだな!{EOS}"
	.if (. - gText_Rom_25E4EC) > 0x34
	.error "gText_Rom_25E4EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E4EC) < 0x34
	.space 0x34 - (. - gText_Rom_25E4EC)
	.endif
	@ data/text/trainers.inc:1901 Route118_Text_WadeDefeat (+1 aliases)
	.globl gText_Rom_25E520
gText_Rom_25E520: @ 0x0825E520
	.string "ハートの しょうぶで まけたのか?{EOS}"
	.if (. - gText_Rom_25E520) > 0x12
	.error "gText_Rom_25E520 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E520) < 0x12
	.space 0x12 - (. - gText_Rom_25E520)
	.endif
	@ data/text/trainers.inc:1904 Route118_Text_WadePostBattle
	.globl gText_Rom_25E532
gText_Rom_25E532: @ 0x0825E532
	.string "つり というのも\nひとと ポケモンとの\lしんけん しょうぶ だな!{EOS}"
	.if (. - gText_Rom_25E532) > 0x22
	.error "gText_Rom_25E532 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E532) < 0x22
	.space 0x22 - (. - gText_Rom_25E532)
	.endif
	@ data/text/trainers.inc:1907 Route118_Text_DaltonIntro (+1 aliases)
	.globl gText_Rom_25E554
gText_Rom_25E554: @ 0x0825E554
	.string "ぼくの メロディ\nあなたの こころに とどけるよ{EOS}"
	.if (. - gText_Rom_25E554) > 0x19
	.error "gText_Rom_25E554 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E554) < 0x19
	.space 0x19 - (. - gText_Rom_25E554)
	.endif
	@ data/text/trainers.inc:1910 Route118_Text_DaltonDefeat (+2 aliases)
	.globl gText_Rom_25E56D
gText_Rom_25E56D: @ 0x0825E56D
	.string "ルー ルルルー{EOS}"
	.if (. - gText_Rom_25E56D) > 0x8
	.error "gText_Rom_25E56D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E56D) < 0x8
	.space 0x8 - (. - gText_Rom_25E56D)
	.endif
	@ data/text/trainers.inc:1913 Route118_Text_DaltonPostBattle
	.globl Route118_Text_DaltonPostBattle
Route118_Text_DaltonPostBattle: @ 0x0825E575
	.string "エレキギターって\nただ うるさい だけじゃ ないんだ……\pこうして こころに しみる\nメロディも かなでられるのさ……{EOS}"
	.if (. - Route118_Text_DaltonPostBattle) > 0x3c
	.error "Route118_Text_DaltonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DaltonPostBattle) < 0x3c
	.space 0x3c - (. - Route118_Text_DaltonPostBattle)
	.endif
	@ data/text/trainers.inc:1916 Route118_Text_DaltonRegister
	.globl Route118_Text_DaltonRegister
Route118_Text_DaltonRegister: @ 0x0825E5B1
	.string "もっと いい メロディが できたら\nききにおいでよ!{EOS}"
	.if (. - Route118_Text_DaltonRegister) > 0x1b
	.error "Route118_Text_DaltonRegister may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DaltonRegister) < 0x1b
	.space 0x1b - (. - Route118_Text_DaltonRegister)
	.endif
	@ data/text/trainers.inc:1919 Route118_Text_DaltonRematchIntro (+1 aliases)
	.globl gText_Rom_25E5CC
gText_Rom_25E5CC: @ 0x0825E5CC
	.string "ぼくと ポケモンの メロディ\nあなたの こころに とどけるよ{EOS}"
	.if (. - gText_Rom_25E5CC) > 0x1f
	.error "gText_Rom_25E5CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E5CC) < 0x1f
	.space 0x1f - (. - gText_Rom_25E5CC)
	.endif
	@ data/text/trainers.inc:1910 Route118_Text_DaltonDefeat (+2 aliases)
	.globl gText_Rom_25E5EB
gText_Rom_25E5EB: @ 0x0825E5EB
	.string "ルー ルルルー{EOS}"
	.if (. - gText_Rom_25E5EB) > 0x8
	.error "gText_Rom_25E5EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E5EB) < 0x8
	.space 0x8 - (. - gText_Rom_25E5EB)
	.endif
	@ data/text/trainers.inc:1925 Route118_Text_DaltonPostRematch
	.globl gText_Rom_25E5F3
gText_Rom_25E5F3: @ 0x0825E5F3
	.string "ひいてるときの ぼくの きもちが\nエレキギターを とおして\lあなたに とどく はずなのさ……{EOS}"
	.if (. - gText_Rom_25E5F3) > 0x2f
	.error "gText_Rom_25E5F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E5F3) < 0x2f
	.space 0x2f - (. - gText_Rom_25E5F3)
	.endif
	@ data/text/trainers.inc:1928 Route118_Text_DeandreIntro (+1 aliases)
	.globl Route118_Text_DeandreIntro
Route118_Text_DeandreIntro: @ 0x0825E622
	.string "いけいけー!\nボクの ポケモン 1ごう 2ごう 3ごう!{EOS}"
	.if (. - Route118_Text_DeandreIntro) > 0x1d
	.error "Route118_Text_DeandreIntro may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DeandreIntro) < 0x1d
	.space 0x1d - (. - Route118_Text_DeandreIntro)
	.endif
	@ data/text/trainers.inc:1931 Route118_Text_DeandreDefeat (+1 aliases)
	.globl Route118_Text_DeandreDefeat
Route118_Text_DeandreDefeat: @ 0x0825E63F
	.string "ああ だいじょうぶか!?\nボクの ポケモン 1ごう 2ごう 3ごう!{EOS}"
	.if (. - Route118_Text_DeandreDefeat) > 0x23
	.error "Route118_Text_DeandreDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DeandreDefeat) < 0x23
	.space 0x23 - (. - Route118_Text_DeandreDefeat)
	.endif
	@ data/text/trainers.inc:1934 Route118_Text_DeandrePostBattle
	.globl Route118_Text_DeandrePostBattle
Route118_Text_DeandrePostBattle: @ 0x0825E662
	.string "ボクの ポケモン せんたい\nカッコいい だろー!\lまね しても いーぜー!{EOS}"
	.if (. - Route118_Text_DeandrePostBattle) > 0x26
	.error "Route118_Text_DeandrePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DeandrePostBattle) < 0x26
	.space 0x26 - (. - Route118_Text_DeandrePostBattle)
	.endif
	@ data/text/trainers.inc:1937 Route119_Text_BrentIntro (+1 aliases)
	.globl Route119_Text_BrentIntro
Route119_Text_BrentIntro: @ 0x0825E688
	.string "ボクらは モノマネサークル!\nキミの うごきを マネするよ!{EOS}"
	.if (. - Route119_Text_BrentIntro) > 0x1f
	.error "Route119_Text_BrentIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_BrentIntro) < 0x1f
	.space 0x1f - (. - Route119_Text_BrentIntro)
	.endif
	@ data/text/trainers.inc:1940 Route119_Text_BrentDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route119_Text_BrentDefeat
Route119_Text_BrentDefeat: @ 0x0825E6A7
	.string "うわあ まけたーっ!{EOS}"
	.if (. - Route119_Text_BrentDefeat) != 0xb
	.error "Route119_Text_BrentDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_25E6AB
	.set gText_Rom_25E6AB, Route119_Text_BrentDefeat + 0x4
	@ data/text/trainers.inc:1943 Route119_Text_BrentPostBattle
	.globl Route119_Text_BrentPostBattle
Route119_Text_BrentPostBattle: @ 0x0825E6B2
	.string "マネを して なにが たのしいか……\pふふふ……\nキミには わからない だろうよ{EOS}"
	.if (. - Route119_Text_BrentPostBattle) > 0x29
	.error "Route119_Text_BrentPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_BrentPostBattle) < 0x29
	.space 0x29 - (. - Route119_Text_BrentPostBattle)
	.endif
	@ data/text/trainers.inc:1946 Route119_Text_DonaldIntro (+1 aliases)
	.globl Route119_Text_DonaldIntro
Route119_Text_DonaldIntro: @ 0x0825E6DB
	.string "ようやく であえたね!\nぼくの むしポケモンが あいて するよ!{EOS}"
	.if (. - Route119_Text_DonaldIntro) > 0x21
	.error "Route119_Text_DonaldIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DonaldIntro) < 0x21
	.space 0x21 - (. - Route119_Text_DonaldIntro)
	.endif
	@ data/text/trainers.inc:1949 Route119_Text_DonaldDefeat (+1 aliases)
	.globl Route119_Text_DonaldDefeat
Route119_Text_DonaldDefeat: @ 0x0825E6FC
	.string "であわなければ よかった……{EOS}"
	.if (. - Route119_Text_DonaldDefeat) > 0xf
	.error "Route119_Text_DonaldDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DonaldDefeat) < 0xf
	.space 0xf - (. - Route119_Text_DonaldDefeat)
	.endif
	@ data/text/trainers.inc:1952 Route119_Text_DonaldPostBattle
	.globl gText_Rom_25E70B
gText_Rom_25E70B: @ 0x0825E70B
	.string "もっと キミの マネを したい!\nほら はやく うごいてよ!{EOS}"
	.if (. - gText_Rom_25E70B) > 0x1f
	.error "gText_Rom_25E70B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E70B) < 0x1f
	.space 0x1f - (. - gText_Rom_25E70B)
	.endif
	@ data/text/trainers.inc:1955 Route119_Text_TaylorIntro (+1 aliases)
	.globl Route119_Text_TaylorIntro
Route119_Text_TaylorIntro: @ 0x0825E72A
	.string "きみが まえに すすんだら\nぼくらも すすむ\pきみが みぎへ まがれば\nぼくらも まがる……{EOS}"
	.if (. - Route119_Text_TaylorIntro) > 0x2f
	.error "Route119_Text_TaylorIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_TaylorIntro) < 0x2f
	.space 0x2f - (. - Route119_Text_TaylorIntro)
	.endif
	@ data/text/trainers.inc:1958 Route119_Text_TaylorDefeat (+1 aliases)
	.globl Route119_Text_TaylorDefeat
Route119_Text_TaylorDefeat: @ 0x0825E759
	.string "キミが かっても\nぼくは まける……{EOS}"
	.if (. - Route119_Text_TaylorDefeat) > 0x13
	.error "Route119_Text_TaylorDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_TaylorDefeat) < 0x13
	.space 0x13 - (. - Route119_Text_TaylorDefeat)
	.endif
	@ data/text/trainers.inc:1961 Route119_Text_TaylorPostBattle
	.globl Route119_Text_TaylorPostBattle
Route119_Text_TaylorPostBattle: @ 0x0825E76C
	.string "うーん しょうぶの しょうはい だけは\nマネ できないよなあ……\lなんか くやしい……{EOS}"
	.if (. - Route119_Text_TaylorPostBattle) > 0x2c
	.error "Route119_Text_TaylorPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_TaylorPostBattle) < 0x2c
	.space 0x2c - (. - Route119_Text_TaylorPostBattle)
	.endif
	@ data/text/trainers.inc:1964 Route119_Text_DougIntro (+1 aliases)
	.globl gText_Rom_25E798
gText_Rom_25E798: @ 0x0825E798
	.string "やっと ボクを つかまえられたね!\nそれとも にげようと していたのかな?{EOS}"
	.if (. - gText_Rom_25E798) > 0x26
	.error "gText_Rom_25E798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E798) < 0x26
	.space 0x26 - (. - gText_Rom_25E798)
	.endif
	@ data/text/trainers.inc:1967 Route119_Text_DougDefeat (+1 aliases)
	.globl gText_Rom_25E7BE
gText_Rom_25E7BE: @ 0x0825E7BE
	.string "すばらしい たたかい だったな!{EOS}"
	.if (. - gText_Rom_25E7BE) > 0x11
	.error "gText_Rom_25E7BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E7BE) < 0x11
	.space 0x11 - (. - gText_Rom_25E7BE)
	.endif
	@ data/text/trainers.inc:1970 Route119_Text_DougPostBattle
	.globl Route119_Text_DougPostBattle
Route119_Text_DougPostBattle: @ 0x0825E7CF
	.string "ボクらは モノマネサークル!\nたのしんで もらえたかな?{EOS}"
	.if (. - Route119_Text_DougPostBattle) > 0x1d
	.error "Route119_Text_DougPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DougPostBattle) < 0x1d
	.space 0x1d - (. - Route119_Text_DougPostBattle)
	.endif
	@ data/text/trainers.inc:1973 Route119_Text_GregIntro (+1 aliases)
	.globl Route119_Text_GregIntro
Route119_Text_GregIntro: @ 0x0825E7EC
	.string "ボクが だれなのか わからないだろう?\p……まあ ボクも キミのこと しらないから\nこうして たたかうんだけどね!{EOS}"
	.if (. - Route119_Text_GregIntro) > 0x3a
	.error "Route119_Text_GregIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_GregIntro) < 0x3a
	.space 0x3a - (. - Route119_Text_GregIntro)
	.endif
	@ data/text/trainers.inc:1976 Route119_Text_GregDefeat (+1 aliases)
	.globl Route119_Text_GregDefeat
Route119_Text_GregDefeat: @ 0x0825E826
	.string "けっこう つよい じゃんか!{EOS}"
	.if (. - Route119_Text_GregDefeat) > 0xf
	.error "Route119_Text_GregDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_GregDefeat) < 0xf
	.space 0xf - (. - Route119_Text_GregDefeat)
	.endif
	@ data/text/trainers.inc:1979 Route119_Text_GregPostBattle
	.globl Route119_Text_GregPostBattle
Route119_Text_GregPostBattle: @ 0x0825E835
	.string "キミが どこかに いくまで\nボクらは マネを つづけるよ!{EOS}"
	.if (. - Route119_Text_GregPostBattle) > 0x1e
	.error "Route119_Text_GregPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_GregPostBattle) < 0x1e
	.space 0x1e - (. - Route119_Text_GregPostBattle)
	.endif
	@ data/text/trainers.inc:1982 Route119_Text_KentIntro (+1 aliases)
	.globl Route119_Text_KentIntro
Route119_Text_KentIntro: @ 0x0825E853
	.string "モノマネ だいすきな ひとが\nあつまって つくった モノマネサークル!\pであった そのとき\nしょうぶが はじまる!{EOS}"
	.if (. - Route119_Text_KentIntro) > 0x3a
	.error "Route119_Text_KentIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_KentIntro) < 0x3a
	.space 0x3a - (. - Route119_Text_KentIntro)
	.endif
	@ data/text/trainers.inc:410 Route106_Text_DouglasDefeated (+2 aliases)
	.globl gText_Rom_25E88D
gText_Rom_25E88D: @ 0x0825E88D
	.string "まいりましたーっ!{EOS}"
	.if (. - gText_Rom_25E88D) > 0xa
	.error "gText_Rom_25E88D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E88D) < 0xa
	.space 0xa - (. - gText_Rom_25E88D)
	.endif
	@ data/text/trainers.inc:1988 Route119_Text_KentPostBattle
	.globl gText_Rom_25E897
gText_Rom_25E897: @ 0x0825E897
	.string "キミも モノマネサークルに はいらない?{EOS}"
	.if (. - gText_Rom_25E897) > 0x15
	.error "gText_Rom_25E897 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E897) < 0x15
	.space 0x15 - (. - gText_Rom_25E897)
	.endif
	@ data/text/trainers.inc:1991 Route119_Text_JacksonIntro (+1 aliases)
	.globl Route119_Text_JacksonIntro
Route119_Text_JacksonIntro: @ 0x0825E8AC
	.string "サバイバルに ひつような\nちしきと ぎじゅつを もつ もの!\lそれが ポケモンレンジャーさ!{EOS}"
	.if (. - Route119_Text_JacksonIntro) > 0x2f
	.error "Route119_Text_JacksonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_JacksonIntro) < 0x2f
	.space 0x2f - (. - Route119_Text_JacksonIntro)
	.endif
	@ data/text/trainers.inc:1994 Route119_Text_JacksonDefeat (+1 aliases)
	.globl Route119_Text_JacksonDefeat
Route119_Text_JacksonDefeat: @ 0x0825E8DB
	.string "ポケモンの ちしきは たらなかった……{EOS}"
	.if (. - Route119_Text_JacksonDefeat) > 0x14
	.error "Route119_Text_JacksonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_JacksonDefeat) < 0x14
	.space 0x14 - (. - Route119_Text_JacksonDefeat)
	.endif
	@ data/text/trainers.inc:1997 Route119_Text_JacksonPostBattle
	.globl Route119_Text_JacksonPostBattle
Route119_Text_JacksonPostBattle: @ 0x0825E8EF
	.string "ぶんめい から はなれて\nにんげんの やせいを めざめさせる!\lそれが オレたちの テーマさ!{EOS}"
	.if (. - Route119_Text_JacksonPostBattle) > 0x30
	.error "Route119_Text_JacksonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_JacksonPostBattle) < 0x30
	.space 0x30 - (. - Route119_Text_JacksonPostBattle)
	.endif
	@ data/text/trainers.inc:2000 Route119_Text_JacksonRegister
	.globl Route119_Text_JacksonRegister
Route119_Text_JacksonRegister: @ 0x0825E91F
	.string "ちしきぶそくと わらわずに\nこんど また あいてを してやってくれよな{EOS}"
	.if (. - Route119_Text_JacksonRegister) > 0x24
	.error "Route119_Text_JacksonRegister may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_JacksonRegister) < 0x24
	.space 0x24 - (. - Route119_Text_JacksonRegister)
	.endif
	@ data/text/trainers.inc:2003 Route119_Text_JacksonRematchIntro (+1 aliases)
	.globl gText_Rom_25E943
gText_Rom_25E943: @ 0x0825E943
	.string "ポケモンと いることで\nやせいを とりもどすのさ!{EOS}"
	.if (. - gText_Rom_25E943) > 0x1a
	.error "gText_Rom_25E943 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E943) < 0x1a
	.space 0x1a - (. - gText_Rom_25E943)
	.endif
	@ data/text/trainers.inc:2006 Route119_Text_JacksonRematchDefeat (+1 aliases)
	.globl gText_Rom_25E95D
gText_Rom_25E95D: @ 0x0825E95D
	.string "あいかわらず つよいな!{EOS}"
	.if (. - gText_Rom_25E95D) > 0xd
	.error "gText_Rom_25E95D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E95D) < 0xd
	.space 0xd - (. - gText_Rom_25E95D)
	.endif
	@ data/text/trainers.inc:2009 Route119_Text_JacksonPostRematch
	.globl Route119_Text_JacksonPostRematch
Route119_Text_JacksonPostRematch: @ 0x0825E96A
	.string "とにかく ポケモンを しんじろ!\nじぶんを しんじろ!\lそうすれば みちは ひらける!{EOS}"
	.if (. - Route119_Text_JacksonPostRematch) > 0x2c
	.error "Route119_Text_JacksonPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_JacksonPostRematch) < 0x2c
	.space 0x2c - (. - Route119_Text_JacksonPostRematch)
	.endif
	@ data/text/trainers.inc:2012 Route119_Text_CatherineIntro (+1 aliases)
	.globl Route119_Text_CatherineIntro
Route119_Text_CatherineIntro: @ 0x0825E996
	.string "あら あなた……\nぼうけんを している わりには\lずいぶん みがるな かっこうね!{EOS}"
	.if (. - Route119_Text_CatherineIntro) > 0x2a
	.error "Route119_Text_CatherineIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_CatherineIntro) < 0x2a
	.space 0x2a - (. - Route119_Text_CatherineIntro)
	.endif
	@ data/text/trainers.inc:2015 Route119_Text_CatherineDefeat (+1 aliases)
	.globl Route119_Text_CatherineDefeat
Route119_Text_CatherineDefeat: @ 0x0825E9C0
	.string "じゅんび ぶそくは じこの もと……{EOS}"
	.if (. - Route119_Text_CatherineDefeat) > 0x13
	.error "Route119_Text_CatherineDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_CatherineDefeat) < 0x13
	.space 0x13 - (. - Route119_Text_CatherineDefeat)
	.endif
	@ data/text/trainers.inc:2018 Route119_Text_CatherinePostBattle
	.globl Route119_Text_CatherinePostBattle
Route119_Text_CatherinePostBattle: @ 0x0825E9D3
	.string "ずいぶん みがるな かっこう だけど\nひつような どうぐは もってるし\lきりょく たいりょく じゅうぶんね!{EOS}"
	.if (. - Route119_Text_CatherinePostBattle) > 0x37
	.error "Route119_Text_CatherinePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_CatherinePostBattle) < 0x37
	.space 0x37 - (. - Route119_Text_CatherinePostBattle)
	.endif
	@ data/text/trainers.inc:2021 Route119_Text_CatherineRegister
	.globl Route119_Text_CatherineRegister
Route119_Text_CatherineRegister: @ 0x0825EA0A
	.string "トレーナーの ひつじゅひん ポケナビは\nちゃんと もってる?\pあっ もってるわね! とうろくしましょ{EOS}"
	.if (. - Route119_Text_CatherineRegister) > 0x33
	.error "Route119_Text_CatherineRegister may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_CatherineRegister) < 0x33
	.space 0x33 - (. - Route119_Text_CatherineRegister)
	.endif
	@ data/text/trainers.inc:2024 Route119_Text_CatherineRematchIntro (+1 aliases)
	.globl Route119_Text_CatherineRematchIntro
Route119_Text_CatherineRematchIntro: @ 0x0825EA3D
	.string "ポケモンと いっしょの ぼうけんは\nうまく いってるかしら?{EOS}"
	.if (. - Route119_Text_CatherineRematchIntro) > 0x1f
	.error "Route119_Text_CatherineRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_CatherineRematchIntro) < 0x1f
	.space 0x1f - (. - Route119_Text_CatherineRematchIntro)
	.endif
	@ data/text/trainers.inc:2027 Route119_Text_CatherineRematchDefeat (+1 aliases)
	.globl Route119_Text_CatherineRematchDefeat
Route119_Text_CatherineRematchDefeat: @ 0x0825EA5C
	.string "まだ なにかが\nたりなかったわね……{EOS}"
	.if (. - Route119_Text_CatherineRematchDefeat) > 0x13
	.error "Route119_Text_CatherineRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_CatherineRematchDefeat) < 0x13
	.space 0x13 - (. - Route119_Text_CatherineRematchDefeat)
	.endif
	@ data/text/trainers.inc:2030 Route119_Text_CatherinePostRematch
	.globl gText_Rom_25EA6F
gText_Rom_25EA6F: @ 0x0825EA6F
	.string "トレーナーの あなたが\nポケモンを たよって いるように\lポケモンも あなたを たよっているのよ!{EOS}"
	.if (. - gText_Rom_25EA6F) > 0x32
	.error "gText_Rom_25EA6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EA6F) < 0x32
	.space 0x32 - (. - gText_Rom_25EA6F)
	.endif
	@ data/text/trainers.inc:2033 Route119_Text_HughIntro (+1 aliases)
	.globl Route119_Text_HughIntro
Route119_Text_HughIntro: @ 0x0825EAA1
	.string "おおぞらは おとこの ロマン!\pじゆうに そらを とぶ きもちよさは\nなにごとにも かえがたい!{EOS}"
	.if (. - Route119_Text_HughIntro) > 0x31
	.error "Route119_Text_HughIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_HughIntro) < 0x31
	.space 0x31 - (. - Route119_Text_HughIntro)
	.endif
	@ data/text/trainers.inc:2036 Route119_Text_HughDefeat (+1 aliases)
	.globl Route119_Text_HughDefeat
Route119_Text_HughDefeat: @ 0x0825EAD2
	.string "まけたーっ!{EOS}"
	.if (. - Route119_Text_HughDefeat) > 0x7
	.error "Route119_Text_HughDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_HughDefeat) < 0x7
	.space 0x7 - (. - Route119_Text_HughDefeat)
	.endif
	@ data/text/trainers.inc:2039 Route119_Text_HughPostBattle
	.globl Route119_Text_HughPostBattle
Route119_Text_HughPostBattle: @ 0x0825EAD9
	.string "そらを とびまわる ユメは\nとりポケモンの おかげで かなえられたよ!{EOS}"
	.if (. - Route119_Text_HughPostBattle) > 0x24
	.error "Route119_Text_HughPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_HughPostBattle) < 0x24
	.space 0x24 - (. - Route119_Text_HughPostBattle)
	.endif
	@ data/text/trainers.inc:2042 Route119_Text_PhilIntro (+1 aliases)
	.globl gText_Rom_25EAFD
gText_Rom_25EAFD: @ 0x0825EAFD
	.string "ぼくの とりポケモンの じつりょくを\nみせて あげるよ!{EOS}"
	.if (. - gText_Rom_25EAFD) > 0x1d
	.error "gText_Rom_25EAFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EAFD) < 0x1d
	.space 0x1d - (. - gText_Rom_25EAFD)
	.endif
	@ data/text/trainers.inc:2045 Route119_Text_PhilDefeat (+1 aliases)
	.globl gText_Rom_25EB1A
gText_Rom_25EB1A: @ 0x0825EB1A
	.string "じつりょく ぶそく だった……{EOS}"
	.if (. - gText_Rom_25EB1A) > 0x10
	.error "gText_Rom_25EB1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EB1A) < 0x10
	.space 0x10 - (. - gText_Rom_25EB1A)
	.endif
	@ data/text/trainers.inc:2048 Route119_Text_PhilPostBattle
	.globl Route119_Text_PhilPostBattle
Route119_Text_PhilPostBattle: @ 0x0825EB2A
	.string "ぼくは ちいさい ころから\nとりポケモンに あこがれて いたんだ!{EOS}"
	.if (. - Route119_Text_PhilPostBattle) > 0x22
	.error "Route119_Text_PhilPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_PhilPostBattle) < 0x22
	.space 0x22 - (. - Route119_Text_PhilPostBattle)
	.endif
	@ data/text/trainers.inc:2051 Route119_Text_YasuIntro (+1 aliases)
	.globl Route119_Text_YasuIntro
Route119_Text_YasuIntro: @ 0x0825EB4C
	.string "かげに ひそみ やみに いきる\nそれが オレの さだめ……!\lいざ ポケモンしょうぶ!{EOS}"
	.if (. - Route119_Text_YasuIntro) > 0x2c
	.error "Route119_Text_YasuIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_YasuIntro) < 0x2c
	.space 0x2c - (. - Route119_Text_YasuIntro)
	.endif
	@ data/text/trainers.inc:2054 Route119_Text_YasuDefeat (+1 aliases)
	.globl Route119_Text_YasuDefeat
Route119_Text_YasuDefeat: @ 0x0825EB78
	.string "まいった……!{EOS}"
	.if (. - Route119_Text_YasuDefeat) > 0x8
	.error "Route119_Text_YasuDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_YasuDefeat) < 0x8
	.space 0x8 - (. - Route119_Text_YasuDefeat)
	.endif
	@ data/text/trainers.inc:2057 Route119_Text_YasuPostBattle
	.globl Route119_Text_YasuPostBattle
Route119_Text_YasuPostBattle: @ 0x0825EB80
	.string "しょうぶに やぶれた ものは\nいさぎよく かげに もどる……\lそれも さだめ……{EOS}"
	.if (. - Route119_Text_YasuPostBattle) > 0x29
	.error "Route119_Text_YasuPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_YasuPostBattle) < 0x29
	.space 0x29 - (. - Route119_Text_YasuPostBattle)
	.endif
	@ data/text/trainers.inc:2060 Route119_Text_TakashiIntro (+1 aliases)
	.globl Route119_Text_TakashiIntro
Route119_Text_TakashiIntro: @ 0x0825EBA9
	.string "ゆだん してると\nいたい めに あうぜ!{EOS}"
	.if (. - Route119_Text_TakashiIntro) > 0x15
	.error "Route119_Text_TakashiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_TakashiIntro) < 0x15
	.space 0x15 - (. - Route119_Text_TakashiIntro)
	.endif
	@ data/text/trainers.inc:2063 Route119_Text_TakashiDefeat (+1 aliases)
	.globl Route119_Text_TakashiDefeat
Route119_Text_TakashiDefeat: @ 0x0825EBBE
	.string "つよいな きみーっ!{EOS}"
	.if (. - Route119_Text_TakashiDefeat) > 0xb
	.error "Route119_Text_TakashiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_TakashiDefeat) < 0xb
	.space 0xb - (. - Route119_Text_TakashiDefeat)
	.endif
	@ data/text/trainers.inc:2066 Route119_Text_TakashiPostBattle
	.globl gText_Rom_25EBC9
gText_Rom_25EBC9: @ 0x0825EBC9
	.string "きしゅう さくせんは シッパイだった……{EOS}"
	.if (. - gText_Rom_25EBC9) > 0x15
	.error "gText_Rom_25EBC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EBC9) < 0x15
	.space 0x15 - (. - gText_Rom_25EBC9)
	.endif
	@ data/text/trainers.inc:2069 Route119_Text_HideoIntro (+1 aliases)
	.globl Route119_Text_HideoIntro
Route119_Text_HideoIntro: @ 0x0825EBDE
	.string "きを かくすなら もりのなか!{EOS}"
	.if (. - Route119_Text_HideoIntro) > 0x10
	.error "Route119_Text_HideoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_HideoIntro) < 0x10
	.space 0x10 - (. - Route119_Text_HideoIntro)
	.endif
	@ data/text/trainers.inc:2072 Route119_Text_HideoDefeat (+1 aliases)
	.globl Route119_Text_HideoDefeat
Route119_Text_HideoDefeat: @ 0x0825EBEE
	.string "つわもので ござるな{EOS}"
	.if (. - Route119_Text_HideoDefeat) > 0xb
	.error "Route119_Text_HideoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_HideoDefeat) < 0xb
	.space 0xb - (. - Route119_Text_HideoDefeat)
	.endif
	@ data/text/trainers.inc:2075 Route119_Text_HideoPostBattle
	.globl Route119_Text_HideoPostBattle
Route119_Text_HideoPostBattle: @ 0x0825EBF9
	.string "きを かくすなら もりのなか!\nポケモンを かくすなら ポケモンのなか!\pとくに いみは ないでござる{EOS}"
	.if (. - Route119_Text_HideoPostBattle) > 0x34
	.error "Route119_Text_HideoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_HideoPostBattle) < 0x34
	.space 0x34 - (. - Route119_Text_HideoPostBattle)
	.endif
	@ data/text/trainers.inc:2078 Route119_Text_ChrisIntro (+1 aliases)
	.globl gText_Rom_25EC2D
gText_Rom_25EC2D: @ 0x0825EC2D
	.string "わたしに はなしかけた……\nつまり しょうぶを いどむ つもりだな!\pよーし! なみのり しながら\nつりあげた ポケモンで たたかうぞ!{EOS}"
	.if (. - gText_Rom_25EC2D) > 0x45
	.error "gText_Rom_25EC2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EC2D) < 0x45
	.space 0x45 - (. - gText_Rom_25EC2D)
	.endif
	@ data/text/trainers.inc:2081 Route119_Text_ChrisDefeat (+1 aliases)
	.globl gText_Rom_25EC72
gText_Rom_25EC72: @ 0x0825EC72
	.string "かつための ポイントが\nちっとも わからん!{EOS}"
	.if (. - gText_Rom_25EC72) > 0x17
	.error "gText_Rom_25EC72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EC72) < 0x17
	.space 0x17 - (. - gText_Rom_25EC72)
	.endif
	@ data/text/trainers.inc:2084 Route119_Text_ChrisPostBattle
	.globl Route119_Text_ChrisPostBattle
Route119_Text_ChrisPostBattle: @ 0x0825EC89
	.string "なみのりを つかう!\pポケモンの せなかに のって\nつりを たのしむ!\pなんて ゆうがな ひととき だろう!{EOS}"
	.if (. - Route119_Text_ChrisPostBattle) > 0x37
	.error "Route119_Text_ChrisPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_ChrisPostBattle) < 0x37
	.space 0x37 - (. - Route119_Text_ChrisPostBattle)
	.endif
	@ data/text/trainers.inc:2087 Route119_Text_FabianIntro (+1 aliases)
	.globl Route119_Text_FabianIntro
Route119_Text_FabianIntro: @ 0x0825ECC0
	.string "デケデケデケデケ\nかつぜーヘ おれたちーヒ かつぜーヘ{EOS}"
	.if (. - Route119_Text_FabianIntro) > 0x1c
	.error "Route119_Text_FabianIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_FabianIntro) < 0x1c
	.space 0x1c - (. - Route119_Text_FabianIntro)
	.endif
	@ data/text/trainers.inc:2090 Route119_Text_FabianDefeat (+1 aliases)
	.globl Route119_Text_FabianDefeat
Route119_Text_FabianDefeat: @ 0x0825ECDC
	.string "まけたぜーヘ あっさりーヒ まけたぜーヘ{EOS}"
	.if (. - Route119_Text_FabianDefeat) > 0x15
	.error "Route119_Text_FabianDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_FabianDefeat) < 0x15
	.space 0x15 - (. - Route119_Text_FabianDefeat)
	.endif
	@ data/text/trainers.inc:2093 Route119_Text_FabianPostBattle
	.globl Route119_Text_FabianPostBattle
Route119_Text_FabianPostBattle: @ 0x0825ECF1
	.string "デケデケデケデケ\nにどとーホ おれにーヒ かまうなよーホ{EOS}"
	.if (. - Route119_Text_FabianPostBattle) > 0x1d
	.error "Route119_Text_FabianPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_FabianPostBattle) < 0x1d
	.space 0x1d - (. - Route119_Text_FabianPostBattle)
	.endif
	@ data/text/trainers.inc:2096 Route119_Text_DaytonIntro (+1 aliases)
	.globl Route119_Text_DaytonIntro
Route119_Text_DaytonIntro: @ 0x0825ED0E
	.string "ホッホッホー!\nこども トレーナーは だいすきだぞ!\lおじちゃんと たたかおうっ!{EOS}"
	.if (. - Route119_Text_DaytonIntro) > 0x2a
	.error "Route119_Text_DaytonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DaytonIntro) < 0x2a
	.space 0x2a - (. - Route119_Text_DaytonIntro)
	.endif
	@ data/text/trainers.inc:2099 Route119_Text_DaytonDefeat (+1 aliases)
	.globl Route119_Text_DaytonDefeat
Route119_Text_DaytonDefeat: @ 0x0825ED38
	.string "やるなー ホッホッホ!{EOS}"
	.if (. - Route119_Text_DaytonDefeat) > 0xc
	.error "Route119_Text_DaytonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DaytonDefeat) < 0xc
	.space 0xc - (. - Route119_Text_DaytonDefeat)
	.endif
	@ data/text/trainers.inc:2102 Route119_Text_DaytonPostBattle
	.globl gText_Rom_25ED44
gText_Rom_25ED44: @ 0x0825ED44
	.string "ホッホッホー!\nこども トレーナーの げんきを\lみならって おじちゃん がんばるぞ!{EOS}"
	.if (. - gText_Rom_25ED44) > 0x2b
	.error "gText_Rom_25ED44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED44) < 0x2b
	.space 0x2b - (. - gText_Rom_25ED44)
	.endif
	@ data/text/trainers.inc:2105 Route119_Text_RachelIntro (+1 aliases)
	.globl Route119_Text_RachelIntro
Route119_Text_RachelIntro: @ 0x0825ED6F
	.string "いつでも どこでも\nパラソルを てばなさないの!{EOS}"
	.if (. - Route119_Text_RachelIntro) > 0x19
	.error "Route119_Text_RachelIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_RachelIntro) < 0x19
	.space 0x19 - (. - Route119_Text_RachelIntro)
	.endif
	@ data/text/trainers.inc:2108 Route119_Text_RachelDefeat (+1 aliases)
	.globl Route119_Text_RachelDefeat
Route119_Text_RachelDefeat: @ 0x0825ED88
	.string "いやん そんなあ{EOS}"
	.if (. - Route119_Text_RachelDefeat) > 0x9
	.error "Route119_Text_RachelDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_RachelDefeat) < 0x9
	.space 0x9 - (. - Route119_Text_RachelDefeat)
	.endif
	@ data/text/trainers.inc:2111 Route119_Text_RachelPostBattle
	.globl gText_Rom_25ED91
gText_Rom_25ED91: @ 0x0825ED91
	.string "パラソルが おもく ないかって?\nキミの バッグの ほうが\lいっぱい はいってるじゃない{EOS}"
	.if (. - gText_Rom_25ED91) > 0x2d
	.error "gText_Rom_25ED91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED91) < 0x2d
	.space 0x2d - (. - gText_Rom_25ED91)
	.endif
	@ data/text/trainers.inc:2114 Route120_Text_ColinIntro (+1 aliases)
	.globl gText_Rom_25EDBE
gText_Rom_25EDBE: @ 0x0825EDBE
	.string "そらを とんでいる ポケモンに\nダメージを あたえる ワザを もってる?{EOS}"
	.if (. - gText_Rom_25EDBE) > 0x25
	.error "gText_Rom_25EDBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EDBE) < 0x25
	.space 0x25 - (. - gText_Rom_25EDBE)
	.endif
	@ data/text/trainers.inc:2117 Route120_Text_ColinDefeat (+1 aliases)
	.globl gText_Rom_25EDE3
gText_Rom_25EDE3: @ 0x0825EDE3
	.string "キミの ほうが\nいちまい うわて だった!{EOS}"
	.if (. - gText_Rom_25EDE3) > 0x16
	.error "gText_Rom_25EDE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EDE3) < 0x16
	.space 0x16 - (. - gText_Rom_25EDE3)
	.endif
	@ data/text/trainers.inc:2120 Route120_Text_ColinPostBattle
	.globl gText_Rom_25EDF9
gText_Rom_25EDF9: @ 0x0825EDF9
	.string "そらをとぶ って ワザは べんりだな!\pそらを とんでいる あいだは\nほとんどの ワザが あたらないだろ?{EOS}"
	.if (. - gText_Rom_25EDF9) > 0x36
	.error "gText_Rom_25EDF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EDF9) < 0x36
	.space 0x36 - (. - gText_Rom_25EDF9)
	.endif
	@ data/text/trainers.inc:2123 Route120_Text_RobertIntro (+1 aliases)
	.globl Route120_Text_RobertIntro
Route120_Text_RobertIntro: @ 0x0825EE2F
	.string "ボクの ポケモンは つよいぜ!\nキミの ポケモンは どうかな?{EOS}"
	.if (. - Route120_Text_RobertIntro) > 0x20
	.error "Route120_Text_RobertIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_RobertIntro) < 0x20
	.space 0x20 - (. - Route120_Text_RobertIntro)
	.endif
	@ data/text/trainers.inc:2126 Route120_Text_RobertDefeat (+1 aliases)
	.globl Route120_Text_RobertDefeat
Route120_Text_RobertDefeat: @ 0x0825EE4F
	.string "キミの ポケモンの ほうが\nつよかった……!{EOS}"
	.if (. - Route120_Text_RobertDefeat) > 0x17
	.error "Route120_Text_RobertDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_RobertDefeat) < 0x17
	.space 0x17 - (. - Route120_Text_RobertDefeat)
	.endif
	@ data/text/trainers.inc:2129 Route120_Text_RobertPostBattle (+1 aliases)
	.globl gText_Rom_25EE66
gText_Rom_25EE66: @ 0x0825EE66
	.string "どんどん つよくなる ポケモンは\nほんと たよりに なるよなー!{EOS}"
	.if (. - gText_Rom_25EE66) > 0x21
	.error "gText_Rom_25EE66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EE66) < 0x21
	.space 0x21 - (. - gText_Rom_25EE66)
	.endif
	@ data/text/trainers.inc:2132 Route120_Text_RobertRegister
	.globl Route120_Text_RobertRegister
Route120_Text_RobertRegister: @ 0x0825EE87
	.string "キミって きたい できそうだなー!\nポケナビに とうろく しておきたい!{EOS}"
	.if (. - Route120_Text_RobertRegister) > 0x25
	.error "Route120_Text_RobertRegister may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_RobertRegister) < 0x25
	.space 0x25 - (. - Route120_Text_RobertRegister)
	.endif
	@ data/text/trainers.inc:2129 Route120_Text_RobertPostBattle (+2 aliases)
	.globl gText_Rom_25EEAC
gText_Rom_25EEAC: @ 0x0825EEAC
	.string "どんどん つよくなる ポケモンは\nほんと たよりに なるよなー!{EOS}"
	.if (. - gText_Rom_25EEAC) > 0x21
	.error "gText_Rom_25EEAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EEAC) < 0x21
	.space 0x21 - (. - gText_Rom_25EEAC)
	.endif
	@ data/text/trainers.inc:2138 Route120_Text_RobertRematchDefeat (+1 aliases)
	.globl gText_Rom_25EECD
gText_Rom_25EECD: @ 0x0825EECD
	.string "キミの ポケモン\nほんとうに つよいんだな……{EOS}"
	.if (. - gText_Rom_25EECD) > 0x18
	.error "gText_Rom_25EECD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EECD) < 0x18
	.space 0x18 - (. - gText_Rom_25EECD)
	.endif
	@ data/text/trainers.inc:2141 Route120_Text_RobertPostRematch
	.globl gText_Rom_25EEE5
gText_Rom_25EEE5: @ 0x0825EEE5
	.string "ポケモンが つよくなるのと いっしょに\nおれも つよくならないとなー!{EOS}"
	.if (. - gText_Rom_25EEE5) > 0x24
	.error "gText_Rom_25EEE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EEE5) < 0x24
	.space 0x24 - (. - gText_Rom_25EEE5)
	.endif
	@ data/text/trainers.inc:2144 Route120_Text_LorenzoIntro (+1 aliases)
	.globl Route120_Text_LorenzoIntro
Route120_Text_LorenzoIntro: @ 0x0825EF09
	.string "きみの ポケモン\nそうなん しないか みてあげよう!{EOS}"
	.if (. - Route120_Text_LorenzoIntro) > 0x1b
	.error "Route120_Text_LorenzoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_LorenzoIntro) < 0x1b
	.space 0x1b - (. - Route120_Text_LorenzoIntro)
	.endif
	@ data/text/trainers.inc:2147 Route120_Text_LorenzoDefeat (+1 aliases)
	.globl Route120_Text_LorenzoDefeat
Route120_Text_LorenzoDefeat: @ 0x0825EF24
	.string "そんなに つよい ポケモンと いっしょなら\nそうなんの おそれは ないな!{EOS}"
	.if (. - Route120_Text_LorenzoDefeat) > 0x26
	.error "Route120_Text_LorenzoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_LorenzoDefeat) < 0x26
	.space 0x26 - (. - Route120_Text_LorenzoDefeat)
	.endif
	@ data/text/trainers.inc:2150 Route120_Text_LorenzoPostBattle
	.globl Route120_Text_LorenzoPostBattle
Route120_Text_LorenzoPostBattle: @ 0x0825EF4A
	.string "ポケモンと いっしょに どこまでもいく\nトレーナーの よろこびと いえるだろう!{EOS}"
	.if (. - Route120_Text_LorenzoPostBattle) > 0x29
	.error "Route120_Text_LorenzoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_LorenzoPostBattle) < 0x29
	.space 0x29 - (. - Route120_Text_LorenzoPostBattle)
	.endif
	@ data/text/trainers.inc:2153 Route120_Text_JennaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route120_Text_JennaIntro
Route120_Text_JennaIntro: @ 0x0825EF73
	.string "あなたの たいりょく どう?\nたいりょく ぶそくだと\lいざと いうとき こまるわよ!{EOS}"
	.if (. - Route120_Text_JennaIntro) != 0x2b
	.error "Route120_Text_JennaIntro must retain its original byte length"
	.endif
	.globl gText_Rom_25EF9A
	.set gText_Rom_25EF9A, Route120_Text_JennaIntro + 0x27
	@ data/text/trainers.inc:2156 Route120_Text_JennaDefeat (+1 aliases)
	.globl gText_Rom_25EF9E
gText_Rom_25EF9E: @ 0x0825EF9E
	.string "たいりょく だけは あったのに……{EOS}"
	.if (. - gText_Rom_25EF9E) > 0x12
	.error "gText_Rom_25EF9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EF9E) < 0x12
	.space 0x12 - (. - gText_Rom_25EF9E)
	.endif
	@ data/text/trainers.inc:2159 Route120_Text_JennaPostBattle
	.globl gText_Rom_25EFB0
gText_Rom_25EFB0: @ 0x0825EFB0
	.string "たいりょく づくりが わたしの にっか\nまいにち ポケモンと ランニングよ!{EOS}"
	.if (. - gText_Rom_25EFB0) > 0x27
	.error "gText_Rom_25EFB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EFB0) < 0x27
	.space 0x27 - (. - gText_Rom_25EFB0)
	.endif
	@ data/text/trainers.inc:2162 Route120_Text_JeffreyIntro (+1 aliases)
	.globl Route120_Text_JeffreyIntro
Route120_Text_JeffreyIntro: @ 0x0825EFD7
	.string "…… …… ……\n…… …… ……\lしょうぶ する……?{EOS}"
	.if (. - Route120_Text_JeffreyIntro) > 0x1d
	.error "Route120_Text_JeffreyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JeffreyIntro) < 0x1d
	.space 0x1d - (. - Route120_Text_JeffreyIntro)
	.endif
	@ data/text/trainers.inc:2165 Route120_Text_JeffreyDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route120_Text_JeffreyDefeat
Route120_Text_JeffreyDefeat: @ 0x0825EFF4
	.string "…… …… ……\nまけた……{EOS}"
	.if (. - Route120_Text_JeffreyDefeat) != 0xf
	.error "Route120_Text_JeffreyDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_25EFFD
	.set gText_Rom_25EFFD, Route120_Text_JeffreyDefeat + 0x9
	@ data/text/trainers.inc:2168 Route120_Text_JeffreyPostBattle
	.globl Route120_Text_JeffreyPostBattle
Route120_Text_JeffreyPostBattle: @ 0x0825F003
	.string "…… …… ……\n…… …… ……\lがんばろう……{EOS}"
	.if (. - Route120_Text_JeffreyPostBattle) > 0x1a
	.error "Route120_Text_JeffreyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JeffreyPostBattle) < 0x1a
	.space 0x1a - (. - Route120_Text_JeffreyPostBattle)
	.endif
	@ data/text/trainers.inc:2171 Route120_Text_JeffreyRegister
	.globl Route120_Text_JeffreyRegister
Route120_Text_JeffreyRegister: @ 0x0825F01D
	.string "…… …… ……\n…… …… ……\lポケナビ もってる……?{EOS}"
	.if (. - Route120_Text_JeffreyRegister) > 0x1f
	.error "Route120_Text_JeffreyRegister may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JeffreyRegister) < 0x1f
	.space 0x1f - (. - Route120_Text_JeffreyRegister)
	.endif
	@ data/text/trainers.inc:2174 Route120_Text_JeffreyRematchIntro (+1 aliases)
	.globl gText_Rom_25F03C
gText_Rom_25F03C: @ 0x0825F03C
	.string "…… …… ……\n…… …… ……\lまた しょうぶ する……?{EOS}"
	.if (. - gText_Rom_25F03C) > 0x20
	.error "gText_Rom_25F03C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F03C) < 0x20
	.space 0x20 - (. - gText_Rom_25F03C)
	.endif
	@ data/text/trainers.inc:2177 Route120_Text_JeffreyRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route120_Text_JeffreyRematchDefeat
Route120_Text_JeffreyRematchDefeat: @ 0x0825F05C
	.string "…… …… ……\nまた まけた……{EOS}"
	.if (. - Route120_Text_JeffreyRematchDefeat) != 0x12
	.error "Route120_Text_JeffreyRematchDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_25F068
	.set gText_Rom_25F068, Route120_Text_JeffreyRematchDefeat + 0xc
	@ data/text/trainers.inc:2180 Route120_Text_JeffreyPostRematch
	.globl gText_Rom_25F06E
gText_Rom_25F06E: @ 0x0825F06E
	.string "…… …… ……\n…… …… ……\lまた がんばろう……\lだいじな むしポケモンの ために……{EOS}"
	.if (. - gText_Rom_25F06E) > 0x30
	.error "gText_Rom_25F06E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F06E) < 0x30
	.space 0x30 - (. - gText_Rom_25F06E)
	.endif
	@ data/text/trainers.inc:2183 Route120_Text_JenniferIntro (+1 aliases)
	.globl Route120_Text_JenniferIntro
Route120_Text_JenniferIntro: @ 0x0825F09E
	.string "ポケモンには いろんな とくせいが ある\nそれを かんがえてこそ\lいちりゅうの トレーナーに なれるのよ!{EOS}"
	.if (. - Route120_Text_JenniferIntro) > 0x36
	.error "Route120_Text_JenniferIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JenniferIntro) < 0x36
	.space 0x36 - (. - Route120_Text_JenniferIntro)
	.endif
	@ data/text/trainers.inc:2186 Route120_Text_JenniferDefeat (+1 aliases)
	.globl Route120_Text_JenniferDefeat
Route120_Text_JenniferDefeat: @ 0x0825F0D4
	.string "なかなか かんがえてるのね{EOS}"
	.if (. - Route120_Text_JenniferDefeat) > 0xe
	.error "Route120_Text_JenniferDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JenniferDefeat) < 0xe
	.space 0xe - (. - Route120_Text_JenniferDefeat)
	.endif
	@ data/text/trainers.inc:2189 Route120_Text_JenniferPostBattle
	.globl Route120_Text_JenniferPostBattle
Route120_Text_JenniferPostBattle: @ 0x0825F0E2
	.string "そう ポケモンの とくせいに よって\nたたかいかたも いろいろ かわってくるわ!{EOS}"
	.if (. - Route120_Text_JenniferPostBattle) > 0x29
	.error "Route120_Text_JenniferPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JenniferPostBattle) < 0x29
	.space 0x29 - (. - Route120_Text_JenniferPostBattle)
	.endif
	@ data/text/trainers.inc:2192 Route120_Text_ChipIntro (+1 aliases)
	.globl gText_Rom_25F10B
gText_Rom_25F10B: @ 0x0825F10B
	.string "なんだね きみは?\pもしかして ひょっとすると\nあるかもしれない といわれる\lこだいの いせきを さがしに きたのかね!?{EOS}"
	.if (. - gText_Rom_25F10B) > 0x3e
	.error "gText_Rom_25F10B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F10B) < 0x3e
	.space 0x3e - (. - gText_Rom_25F10B)
	.endif
	@ data/text/trainers.inc:2195 Route120_Text_ChipDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route120_Text_ChipDefeat
Route120_Text_ChipDefeat: @ 0x0825F149
	.string "まいったね こりゃ{EOS}"
	.if (. - Route120_Text_ChipDefeat) != 0xa
	.error "Route120_Text_ChipDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_25F14F
	.set gText_Rom_25F14F, Route120_Text_ChipDefeat + 0x6
	@ data/text/trainers.inc:2198 Route120_Text_ChipPostBattle
	.globl gText_Rom_25F153
gText_Rom_25F153: @ 0x0825F153
	.string "あの おおきな いわ\nわたしは いせき だと おもいたいが\lそれにしては いりぐちが ないね……{EOS}"
	.if (. - gText_Rom_25F153) > 0x31
	.error "gText_Rom_25F153 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F153) < 0x31
	.space 0x31 - (. - gText_Rom_25F153)
	.endif
	@ data/text/trainers.inc:2201 Route120_Text_ClarissaIntro (+1 aliases)
	.globl Route120_Text_ClarissaIntro
Route120_Text_ClarissaIntro: @ 0x0825F184
	.string "あたしが パラソルを もってる りゆう?\pうふふ あたしに かてたら\nおしえて あげても いいかな?{EOS}"
	.if (. - Route120_Text_ClarissaIntro) > 0x33
	.error "Route120_Text_ClarissaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_ClarissaIntro) < 0x33
	.space 0x33 - (. - Route120_Text_ClarissaIntro)
	.endif
	@ data/text/trainers.inc:2204 Route120_Text_ClarissaDefeat (+1 aliases)
	.globl Route120_Text_ClarissaDefeat
Route120_Text_ClarissaDefeat: @ 0x0825F1B7
	.string "パラソルで ポケモンの こうげきは\nしのげないのね……{EOS}"
	.if (. - Route120_Text_ClarissaDefeat) > 0x1c
	.error "Route120_Text_ClarissaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_ClarissaDefeat) < 0x1c
	.space 0x1c - (. - Route120_Text_ClarissaDefeat)
	.endif
	@ data/text/trainers.inc:2207 Route120_Text_ClarissaPostBattle
	.globl Route120_Text_ClarissaPostBattle
Route120_Text_ClarissaPostBattle: @ 0x0825F1D3
	.string "あたしの ポケモンたちも\nあつい ひざしは にがてだと おもうの\lだから こうして パラソルを もってるのよ{EOS}"
	.if (. - Route120_Text_ClarissaPostBattle) > 0x37
	.error "Route120_Text_ClarissaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_ClarissaPostBattle) < 0x37
	.space 0x37 - (. - Route120_Text_ClarissaPostBattle)
	.endif
	@ data/text/trainers.inc:2210 Route120_Text_AngelicaIntro (+1 aliases)
	.globl Route120_Text_AngelicaIntro
Route120_Text_AngelicaIntro: @ 0x0825F20A
	.string "あたしと ポケモンと パラソル\nどれか ひとつ かけていても\lうつくしさが そこなわれるんだわ{EOS}"
	.if (. - Route120_Text_AngelicaIntro) > 0x30
	.error "Route120_Text_AngelicaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_AngelicaIntro) < 0x30
	.space 0x30 - (. - Route120_Text_AngelicaIntro)
	.endif
	@ data/text/trainers.inc:2213 Route120_Text_AngelicaDefeat (+1 aliases)
	.globl Route120_Text_AngelicaDefeat
Route120_Text_AngelicaDefeat: @ 0x0825F23A
	.string "うつくしさが\nだいなしに なっちゃったわ{EOS}"
	.if (. - Route120_Text_AngelicaDefeat) > 0x15
	.error "Route120_Text_AngelicaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_AngelicaDefeat) < 0x15
	.space 0x15 - (. - Route120_Text_AngelicaDefeat)
	.endif
	@ data/text/trainers.inc:2216 Route120_Text_AngelicaPostBattle
	.globl gText_Rom_25F24F
gText_Rom_25F24F: @ 0x0825F24F
	.string "あなたに パラソルは にあわないわ!\pだって こんなの もっていたら\nすっごく ジャマに なりそう なんだもの{EOS}"
	.if (. - gText_Rom_25F24F) > 0x38
	.error "gText_Rom_25F24F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F24F) < 0x38
	.space 0x38 - (. - gText_Rom_25F24F)
	.endif
	@ data/text/trainers.inc:2219 Route120_Text_KeigoIntro (+1 aliases)
	.globl Route120_Text_KeigoIntro
Route120_Text_KeigoIntro: @ 0x0825F287
	.string "ポケモンの うごきを とりいれて\nあたらしい にんぽうを あみだすんだ!{EOS}"
	.if (. - Route120_Text_KeigoIntro) > 0x25
	.error "Route120_Text_KeigoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_KeigoIntro) < 0x25
	.space 0x25 - (. - Route120_Text_KeigoIntro)
	.endif
	@ data/text/trainers.inc:2222 Route120_Text_KeigoDefeat (+1 aliases)
	.globl Route120_Text_KeigoDefeat
Route120_Text_KeigoDefeat: @ 0x0825F2AC
	.string "あたらしい にんぽう\nかんせいまで まだまだ かかりそうだ{EOS}"
	.if (. - Route120_Text_KeigoDefeat) > 0x1e
	.error "Route120_Text_KeigoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_KeigoDefeat) < 0x1e
	.space 0x1e - (. - Route120_Text_KeigoDefeat)
	.endif
	@ data/text/trainers.inc:2225 Route120_Text_KeigoPostBattle
	.globl Route120_Text_KeigoPostBattle
Route120_Text_KeigoPostBattle: @ 0x0825F2CA
	.string "ニンジャの せんせいを さがして\nでしいり しようかな?{EOS}"
	.if (. - Route120_Text_KeigoPostBattle) > 0x1d
	.error "Route120_Text_KeigoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_KeigoPostBattle) < 0x1d
	.space 0x1d - (. - Route120_Text_KeigoPostBattle)
	.endif
	@ data/text/trainers.inc:2228 Route120_Text_RileyIntro (+1 aliases)
	.globl gText_Rom_25F2E7
gText_Rom_25F2E7: @ 0x0825F2E7
	.string "ぼくたち ニンジャごっこの かくれぬの!\nどこに いるのか わからなかっただろ!{EOS}"
	.if (. - gText_Rom_25F2E7) > 0x29
	.error "gText_Rom_25F2E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F2E7) < 0x29
	.space 0x29 - (. - gText_Rom_25F2E7)
	.endif
	@ data/text/trainers.inc:2231 Route120_Text_RileyDefeat (+1 aliases)
	.globl gText_Rom_25F310
gText_Rom_25F310: @ 0x0825F310
	.string "まけた!\nかくれぬので かくれるか?{EOS}"
	.if (. - gText_Rom_25F310) > 0x13
	.error "gText_Rom_25F310 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F310) < 0x13
	.space 0x13 - (. - gText_Rom_25F310)
	.endif
	@ data/text/trainers.inc:2234 Route120_Text_RileyPostBattle
	.globl gText_Rom_25F323
gText_Rom_25F323: @ 0x0825F323
	.string "ぼくたち ニンジャごっこの かくれぬの!\nこれって てづくり なんだぜ!{EOS}"
	.if (. - gText_Rom_25F323) > 0x25
	.error "gText_Rom_25F323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F323) < 0x25
	.space 0x25 - (. - gText_Rom_25F323)
	.endif
	@ data/text/trainers.inc:2237 Route120_Text_CallieIntro (+1 aliases)
	.globl Route120_Text_CallieIntro
Route120_Text_CallieIntro: @ 0x0825F348
	.string "よそみ してると ケガするよ!{EOS}"
	.if (. - Route120_Text_CallieIntro) > 0x10
	.error "Route120_Text_CallieIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_CallieIntro) < 0x10
	.space 0x10 - (. - Route120_Text_CallieIntro)
	.endif
	@ data/text/trainers.inc:2240 Route120_Text_CallieDefeat (+1 aliases)
	.globl Route120_Text_CallieDefeat
Route120_Text_CallieDefeat: @ 0x0825F358
	.string "いたいめに あったのは あたしのほうか{EOS}"
	.if (. - Route120_Text_CallieDefeat) > 0x14
	.error "Route120_Text_CallieDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_CallieDefeat) < 0x14
	.space 0x14 - (. - Route120_Text_CallieDefeat)
	.endif
	@ data/text/trainers.inc:2243 Route120_Text_CalliePostBattle
	.globl gText_Rom_25F36C
gText_Rom_25F36C: @ 0x0825F36C
	.string "やっぱり しんか させようかな?\nこのままでも かわいい けど{EOS}"
	.if (. - gText_Rom_25F36C) > 0x20
	.error "gText_Rom_25F36C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F36C) < 0x20
	.space 0x20 - (. - gText_Rom_25F36C)
	.endif
	@ data/text/trainers.inc:2246 Route120_Text_LeonelIntro (+1 aliases)
	.globl Route120_Text_LeonelIntro
Route120_Text_LeonelIntro: @ 0x0825F38C
	.string "きみの てもち ポケモン\nいろんな タイプが そろって いるか?{EOS}"
	.if (. - Route120_Text_LeonelIntro) > 0x21
	.error "Route120_Text_LeonelIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_LeonelIntro) < 0x21
	.space 0x21 - (. - Route120_Text_LeonelIntro)
	.endif
	@ data/text/trainers.inc:2249 Route120_Text_LeonelDefeat (+1 aliases)
	.globl Route120_Text_LeonelDefeat
Route120_Text_LeonelDefeat: @ 0x0825F3AD
	.string "きみの こだわり みせてもらったよ!{EOS}"
	.if (. - Route120_Text_LeonelDefeat) > 0x13
	.error "Route120_Text_LeonelDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_LeonelDefeat) < 0x13
	.space 0x13 - (. - Route120_Text_LeonelDefeat)
	.endif
	@ data/text/trainers.inc:2252 Route120_Text_LeonelPostBattle
	.globl Route120_Text_LeonelPostBattle
Route120_Text_LeonelPostBattle: @ 0x0825F3C0
	.string "すきな ポケモン だけで\nつよいって いうのが さいこうだね{EOS}"
	.if (. - Route120_Text_LeonelPostBattle) > 0x1f
	.error "Route120_Text_LeonelPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_LeonelPostBattle) < 0x1f
	.space 0x1f - (. - Route120_Text_LeonelPostBattle)
	.endif
	@ data/text/trainers.inc:2255 Route121_Text_VanessaIntro (+1 aliases)
	.globl gText_Rom_25F3DF
gText_Rom_25F3DF: @ 0x0825F3DF
	.string "あたしの とっても プリティな\nポケモンを かわいがってよ!{EOS}"
	.if (. - gText_Rom_25F3DF) > 0x1f
	.error "gText_Rom_25F3DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F3DF) < 0x1f
	.space 0x1f - (. - gText_Rom_25F3DF)
	.endif
	@ data/text/trainers.inc:2258 Route121_Text_VanessaDefeat (+1 aliases)
	.globl gText_Rom_25F3FE
gText_Rom_25F3FE: @ 0x0825F3FE
	.string "かわいがるの いみが ちがうわ!{EOS}"
	.if (. - gText_Rom_25F3FE) > 0x11
	.error "gText_Rom_25F3FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F3FE) < 0x11
	.space 0x11 - (. - gText_Rom_25F3FE)
	.endif
	@ data/text/trainers.inc:2261 Route121_Text_VanessaPostBattle
	.globl gText_Rom_25F40F
gText_Rom_25F40F: @ 0x0825F40F
	.string "ミナモの コンテストに いくのよ\nあたしの ポケモンなら\lマスター ランクでも らくしょうよ!{EOS}"
	.if (. - gText_Rom_25F40F) > 0x30
	.error "gText_Rom_25F40F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F40F) < 0x30
	.space 0x30 - (. - gText_Rom_25F40F)
	.endif
	@ data/text/trainers.inc:2264 Route121_Text_WalterIntro (+2 aliases)
	.globl gText_Rom_25F43F
gText_Rom_25F43F: @ 0x0825F43F
	.string "せかい かっこくを\nポケモンと いっしょに まわってきた\pすこしは うでに じしんが ありますよ!{EOS}"
	.if (. - gText_Rom_25F43F) > 0x32
	.error "gText_Rom_25F43F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F43F) < 0x32
	.space 0x32 - (. - gText_Rom_25F43F)
	.endif
	@ data/text/trainers.inc:2267 Route121_Text_WalterDefeat (+1 aliases)
	.globl Route121_Text_WalterDefeat
Route121_Text_WalterDefeat: @ 0x0825F471
	.string "おみごと ですな{EOS}"
	.if (. - Route121_Text_WalterDefeat) > 0x9
	.error "Route121_Text_WalterDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_WalterDefeat) < 0x9
	.space 0x9 - (. - Route121_Text_WalterDefeat)
	.endif
	@ data/text/trainers.inc:2270 Route121_Text_WalterPostBattle
	.globl Route121_Text_WalterPostBattle
Route121_Text_WalterPostBattle: @ 0x0825F47A
	.string "また ポケモンと いっしょに\nせかいを まわってみたい ものです{EOS}"
	.if (. - Route121_Text_WalterPostBattle) > 0x21
	.error "Route121_Text_WalterPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_WalterPostBattle) < 0x21
	.space 0x21 - (. - Route121_Text_WalterPostBattle)
	.endif
	@ data/text/trainers.inc:2273 Route121_Text_WalterRegister
	.globl Route121_Text_WalterRegister
Route121_Text_WalterRegister: @ 0x0825F49B
	.string "あなたの うでまえは たいしたものだ\nぜひ きねんに とうろくを……{EOS}"
	.if (. - Route121_Text_WalterRegister) > 0x23
	.error "Route121_Text_WalterRegister may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_WalterRegister) < 0x23
	.space 0x23 - (. - Route121_Text_WalterRegister)
	.endif
	@ data/text/trainers.inc:2264 Route121_Text_WalterIntro (+2 aliases)
	.globl gText_Rom_25F4BE
gText_Rom_25F4BE: @ 0x0825F4BE
	.string "せかい かっこくを\nポケモンと いっしょに まわってきた\pすこしは うでに じしんが ありますよ!{EOS}"
	.if (. - gText_Rom_25F4BE) > 0x32
	.error "gText_Rom_25F4BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F4BE) < 0x32
	.space 0x32 - (. - gText_Rom_25F4BE)
	.endif
	@ data/text/trainers.inc:2279 Route121_Text_WalterRematchDefeat (+1 aliases)
	.globl gText_Rom_25F4F0
gText_Rom_25F4F0: @ 0x0825F4F0
	.string "おみごと ですな!{EOS}"
	.if (. - gText_Rom_25F4F0) > 0xa
	.error "gText_Rom_25F4F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F4F0) < 0xa
	.space 0xa - (. - gText_Rom_25F4F0)
	.endif
	@ data/text/trainers.inc:2282 Route121_Text_WalterPostRematch
	.globl gText_Rom_25F4FA
gText_Rom_25F4FA: @ 0x0825F4FA
	.string "あなたと その ポケモンなら\nがいこくでも つよいと いわれるでしょう!{EOS}"
	.if (. - gText_Rom_25F4FA) > 0x25
	.error "gText_Rom_25F4FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F4FA) < 0x25
	.space 0x25 - (. - gText_Rom_25F4FA)
	.endif
	@ data/text/trainers.inc:2285 Route121_Text_TammyIntro (+1 aliases)
	.globl Route121_Text_TammyIntro
Route121_Text_TammyIntro: @ 0x0825F51F
	.string "よの なかには ふしぎな ちからが\nいっぱい あるの……{EOS}"
	.if (. - Route121_Text_TammyIntro) > 0x1d
	.error "Route121_Text_TammyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_TammyIntro) < 0x1d
	.space 0x1d - (. - Route121_Text_TammyIntro)
	.endif
	@ data/text/trainers.inc:2288 Route121_Text_TammyDefeat (+1 aliases)
	.globl Route121_Text_TammyDefeat
Route121_Text_TammyDefeat: @ 0x0825F53C
	.string "あたし まけたのね……{EOS}"
	.if (. - Route121_Text_TammyDefeat) > 0xc
	.error "Route121_Text_TammyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_TammyDefeat) < 0xc
	.space 0xc - (. - Route121_Text_TammyDefeat)
	.endif
	@ data/text/trainers.inc:2291 Route121_Text_TammyPostBattle
	.globl Route121_Text_TammyPostBattle
Route121_Text_TammyPostBattle: @ 0x0825F548
	.string "おくりびやま……\nあそこに ふしぎな ちからが あるの……{EOS}"
	.if (. - Route121_Text_TammyPostBattle) > 0x1e
	.error "Route121_Text_TammyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_TammyPostBattle) < 0x1e
	.space 0x1e - (. - Route121_Text_TammyPostBattle)
	.endif
	@ data/text/trainers.inc:2294 Route121_Text_KateIntro (+1 aliases)
	.globl Route121_Text_KateIntro
Route121_Text_KateIntro: @ 0x0825F566
	.string "マナ『ふたり そろえば こわいもの なし!\nあたしたちの つよさ みせつけちゃうから!{EOS}"
	.if (. - Route121_Text_KateIntro) > 0x2c
	.error "Route121_Text_KateIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_KateIntro) < 0x2c
	.space 0x2c - (. - Route121_Text_KateIntro)
	.endif
	@ data/text/trainers.inc:2297 Route121_Text_KateDefeat (+1 aliases)
	.globl Route121_Text_KateDefeat
Route121_Text_KateDefeat: @ 0x0825F592
	.string "マナ『コウハイの まえで かっこわるいわ……{EOS}"
	.if (. - Route121_Text_KateDefeat) > 0x17
	.error "Route121_Text_KateDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_KateDefeat) < 0x17
	.space 0x17 - (. - Route121_Text_KateDefeat)
	.endif
	@ data/text/trainers.inc:2300 Route121_Text_KatePostBattle
	.globl gText_Rom_25F5A9
gText_Rom_25F5A9: @ 0x0825F5A9
	.string "マナ『あたしって たよられちゃうと\nつい かっこいい ところ\lみせたく なっちゃうのよね……{EOS}"
	.if (. - gText_Rom_25F5A9) > 0x2f
	.error "gText_Rom_25F5A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F5A9) < 0x2f
	.space 0x2f - (. - gText_Rom_25F5A9)
	.endif
	@ data/text/trainers.inc:2303 Route121_Text_KateNotEnoughMons (+1 aliases)
	.globl Route121_Text_KateNotEnoughMons
Route121_Text_KateNotEnoughMons: @ 0x0825F5D8
	.string "マナ『ポケモン 1ぴき しか いないのね\nじゃあ しょうぶは できないわ!\pだって よわいもの いじめに なるもの{EOS}"
	.if (. - Route121_Text_KateNotEnoughMons) > 0x3a
	.error "Route121_Text_KateNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_KateNotEnoughMons) < 0x3a
	.space 0x3a - (. - Route121_Text_KateNotEnoughMons)
	.endif
	@ data/text/trainers.inc:2306 Route121_Text_JoyIntro (+1 aliases)
	.globl Route121_Text_JoyIntro
Route121_Text_JoyIntro: @ 0x0825F612
	.string "ユイ『ふたり そろえば こわいもの なし!\nあたしたちの つよさ みせつけちゃうから!{EOS}"
	.if (. - Route121_Text_JoyIntro) > 0x2c
	.error "Route121_Text_JoyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JoyIntro) < 0x2c
	.space 0x2c - (. - Route121_Text_JoyIntro)
	.endif
	@ data/text/trainers.inc:2309 Route121_Text_JoyDefeat (+1 aliases)
	.globl Route121_Text_JoyDefeat
Route121_Text_JoyDefeat: @ 0x0825F63E
	.string "ユイ『センパイ ごめんなさーい{EOS}"
	.if (. - Route121_Text_JoyDefeat) > 0x10
	.error "Route121_Text_JoyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JoyDefeat) < 0x10
	.space 0x10 - (. - Route121_Text_JoyDefeat)
	.endif
	@ data/text/trainers.inc:2312 Route121_Text_JoyPostBattle
	.globl Route121_Text_JoyPostBattle
Route121_Text_JoyPostBattle: @ 0x0825F64E
	.string "ユイ『えへっ!\nまた センパイと いっしょに とっくんね!{EOS}"
	.if (. - Route121_Text_JoyPostBattle) > 0x1e
	.error "Route121_Text_JoyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JoyPostBattle) < 0x1e
	.space 0x1e - (. - Route121_Text_JoyPostBattle)
	.endif
	@ data/text/trainers.inc:2315 Route121_Text_JoyNotEnoughMons (+1 aliases)
	.globl Route121_Text_JoyNotEnoughMons
Route121_Text_JoyNotEnoughMons: @ 0x0825F66C
	.string "ユイ『あたしたちに しょうぶを いどむなら\nポケモン 2ひきは ひつよう だからね!{EOS}"
	.if (. - Route121_Text_JoyNotEnoughMons) > 0x2b
	.error "Route121_Text_JoyNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JoyNotEnoughMons) < 0x2b
	.space 0x2b - (. - Route121_Text_JoyNotEnoughMons)
	.endif
	@ data/text/trainers.inc:2318 Route121_Text_JessicaIntro (+1 aliases)
	.globl gText_Rom_25F697
gText_Rom_25F697: @ 0x0825F697
	.string "あたくしの だいじな ポケモン\nちょっと みなさいよ!{EOS}"
	.if (. - gText_Rom_25F697) > 0x1c
	.error "gText_Rom_25F697 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F697) < 0x1c
	.space 0x1c - (. - gText_Rom_25F697)
	.endif
	@ data/text/trainers.inc:2321 Route121_Text_JessicaDefeat (+1 aliases)
	.globl gText_Rom_25F6B3
gText_Rom_25F6B3: @ 0x0825F6B3
	.string "ぷんぷん!\nなによ ほんき だしちゃって!{EOS}"
	.if (. - gText_Rom_25F6B3) > 0x16
	.error "gText_Rom_25F6B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F6B3) < 0x16
	.space 0x16 - (. - gText_Rom_25F6B3)
	.endif
	@ data/text/trainers.inc:2324 Route121_Text_JessicaPostBattle (+1 aliases)
	.globl gText_Rom_25F6C9
gText_Rom_25F6C9: @ 0x0825F6C9
	.string "サファリで あたらしい ポケモン\nつかまえようかな?{EOS}"
	.if (. - gText_Rom_25F6C9) > 0x1b
	.error "gText_Rom_25F6C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F6C9) < 0x1b
	.space 0x1b - (. - gText_Rom_25F6C9)
	.endif
	@ data/text/trainers.inc:2327 Route121_Text_JessicaRegister
	.globl gText_Rom_25F6E4
gText_Rom_25F6E4: @ 0x0825F6E4
	.string "きょうは てかげん してあげたのよ\nつぎは こうは いかないからね!{EOS}"
	.if (. - gText_Rom_25F6E4) > 0x23
	.error "gText_Rom_25F6E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F6E4) < 0x23
	.space 0x23 - (. - gText_Rom_25F6E4)
	.endif
	@ data/text/trainers.inc:2330 Route121_Text_JessicaRematchIntro (+1 aliases)
	.globl Route121_Text_JessicaRematchIntro
Route121_Text_JessicaRematchIntro: @ 0x0825F707
	.string "だいじな ポケモン そだったのよ!\nちょっと みていきなさいよ!{EOS}"
	.if (. - Route121_Text_JessicaRematchIntro) > 0x21
	.error "Route121_Text_JessicaRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JessicaRematchIntro) < 0x21
	.space 0x21 - (. - Route121_Text_JessicaRematchIntro)
	.endif
	@ data/text/trainers.inc:2333 Route121_Text_JessicaRematchDefeat (+1 aliases)
	.globl Route121_Text_JessicaRematchDefeat
Route121_Text_JessicaRematchDefeat: @ 0x0825F728
	.string "ぷんぷん!\nまた てかげん してくれないのね!{EOS}"
	.if (. - Route121_Text_JessicaRematchDefeat) > 0x18
	.error "Route121_Text_JessicaRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JessicaRematchDefeat) < 0x18
	.space 0x18 - (. - Route121_Text_JessicaRematchDefeat)
	.endif
	@ data/text/trainers.inc:2324 Route121_Text_JessicaPostBattle (+1 aliases)
	.globl gText_Rom_25F740
gText_Rom_25F740: @ 0x0825F740
	.string "サファリで あたらしい ポケモン\nつかまえようかな?{EOS}"
	.if (. - gText_Rom_25F740) > 0x1b
	.error "gText_Rom_25F740 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F740) < 0x1b
	.space 0x1b - (. - gText_Rom_25F740)
	.endif
	@ data/text/trainers.inc:2339 Route121_Text_CristinIntro (+1 aliases)
	.globl gText_Rom_25F75B
gText_Rom_25F75B: @ 0x0825F75B
	.string "1にちに 5にんずつ\nたおす ことが にっかよ!\lあなたが その 5にんめ!{EOS}"
	.if (. - gText_Rom_25F75B) > 0x27
	.error "gText_Rom_25F75B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F75B) < 0x27
	.space 0x27 - (. - gText_Rom_25F75B)
	.endif
	@ data/text/trainers.inc:2342 Route121_Text_CristinDefeat (+1 aliases)
	.globl gText_Rom_25F782
gText_Rom_25F782: @ 0x0825F782
	.string "いやっ ひどいわ!{EOS}"
	.if (. - gText_Rom_25F782) > 0xa
	.error "gText_Rom_25F782 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F782) < 0xa
	.space 0xa - (. - gText_Rom_25F782)
	.endif
	@ data/text/trainers.inc:2345 Route121_Text_CristinPostBattle
	.globl gText_Rom_25F78C
gText_Rom_25F78C: @ 0x0825F78C
	.string "こんなに あっさり まけるなんて……\nつぎは わたしが かつから!{EOS}"
	.if (. - gText_Rom_25F78C) > 0x22
	.error "gText_Rom_25F78C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F78C) < 0x22
	.space 0x22 - (. - gText_Rom_25F78C)
	.endif
	@ data/text/trainers.inc:2348 Route121_Text_CristinRegister
	.globl gText_Rom_25F7AE
gText_Rom_25F7AE: @ 0x0825F7AE
	.string "くつじょく てき だわ!\nあなたの こと わすれないんだから……\lポケナビを かしなさい!{EOS}"
	.if (. - gText_Rom_25F7AE) > 0x2e
	.error "gText_Rom_25F7AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F7AE) < 0x2e
	.space 0x2e - (. - gText_Rom_25F7AE)
	.endif
	@ data/text/trainers.inc:2351 Route121_Text_CristinRematchIntro (+1 aliases)
	.globl Route121_Text_CristinRematchIntro
Route121_Text_CristinRematchIntro: @ 0x0825F7DC
	.string "1にちに 10にんずつ\nたおす ことが にっかよ!\lあなたが その 10にんめ!{EOS}"
	.if (. - Route121_Text_CristinRematchIntro) > 0x29
	.error "Route121_Text_CristinRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_CristinRematchIntro) < 0x29
	.space 0x29 - (. - Route121_Text_CristinRematchIntro)
	.endif
	@ data/text/trainers.inc:2354 Route121_Text_CristinRematchDefeat (+1 aliases)
	.globl Route121_Text_CristinRematchDefeat
Route121_Text_CristinRematchDefeat: @ 0x0825F805
	.string "ちょっ……\nひどい やりなおしてよ!{EOS}"
	.if (. - Route121_Text_CristinRematchDefeat) > 0x13
	.error "Route121_Text_CristinRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_CristinRematchDefeat) < 0x13
	.space 0x13 - (. - Route121_Text_CristinRematchDefeat)
	.endif
	@ data/text/trainers.inc:2357 Route121_Text_CristinPostRematch
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route121_Text_CristinPostRematch
Route121_Text_CristinPostRematch: @ 0x0825F818
	.string "こんなに かてない あいてが いるなんて……\nグスっ しんじられない{EOS}"
	.if (. - Route121_Text_CristinPostRematch) != 0x23
	.error "Route121_Text_CristinPostRematch must retain its original byte length"
	.endif
	.globl gText_Rom_25F833
	.set gText_Rom_25F833, Route121_Text_CristinPostRematch + 0x1b
	.globl gText_Rom_25F836
	.set gText_Rom_25F836, Route121_Text_CristinPostRematch + 0x1e
	@ data/text/trainers.inc:2360 Route121_Text_CaleIntro (+1 aliases)
	.globl Route121_Text_CaleIntro
Route121_Text_CaleIntro: @ 0x0825F83B
	.string "いま にもつが いっぱい なんですけど!\nこんな じょうたいで たたかえと?{EOS}"
	.if (. - Route121_Text_CaleIntro) > 0x27
	.error "Route121_Text_CaleIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_CaleIntro) < 0x27
	.space 0x27 - (. - Route121_Text_CaleIntro)
	.endif
	@ data/text/trainers.inc:2363 Route121_Text_CaleDefeat (+1 aliases)
	.globl Route121_Text_CaleDefeat
Route121_Text_CaleDefeat: @ 0x0825F862
	.string "そりゃ まけますよ\nりょうてが ふさがってるんだもん{EOS}"
	.if (. - Route121_Text_CaleDefeat) > 0x1b
	.error "Route121_Text_CaleDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_CaleDefeat) < 0x1b
	.space 0x1b - (. - Route121_Text_CaleDefeat)
	.endif
	@ data/text/trainers.inc:2366 Route121_Text_CalePostBattle
	.globl gText_Rom_25F87D
gText_Rom_25F87D: @ 0x0825F87D
	.string "この さきの ミナモデパートで\nかいもの しすぎたんだ!\lきみの みたいな バッグが ほしいな{EOS}"
	.if (. - gText_Rom_25F87D) > 0x30
	.error "gText_Rom_25F87D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F87D) < 0x30
	.space 0x30 - (. - gText_Rom_25F87D)
	.endif
	@ data/text/trainers.inc:2369 Route121_Text_MylesIntro (+1 aliases)
	.globl Route121_Text_MylesIntro
Route121_Text_MylesIntro: @ 0x0825F8AD
	.string "みんなの そだてた ポケモンが\nみてみたーーい!{EOS}"
	.if (. - Route121_Text_MylesIntro) > 0x19
	.error "Route121_Text_MylesIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_MylesIntro) < 0x19
	.space 0x19 - (. - Route121_Text_MylesIntro)
	.endif
	@ data/text/trainers.inc:2372 Route121_Text_MylesDefeat (+1 aliases)
	.globl Route121_Text_MylesDefeat
Route121_Text_MylesDefeat: @ 0x0825F8C6
	.string "すごーーい!{EOS}"
	.if (. - Route121_Text_MylesDefeat) > 0x7
	.error "Route121_Text_MylesDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_MylesDefeat) < 0x7
	.space 0x7 - (. - Route121_Text_MylesDefeat)
	.endif
	@ data/text/trainers.inc:2375 Route121_Text_MylesPostBattle
	.globl Route121_Text_MylesPostBattle
Route121_Text_MylesPostBattle: @ 0x0825F8CD
	.string "いいなーー! きみの ポケモン!\nどうやって そだてているの?{EOS}"
	.if (. - Route121_Text_MylesPostBattle) > 0x20
	.error "Route121_Text_MylesPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_MylesPostBattle) < 0x20
	.space 0x20 - (. - Route121_Text_MylesPostBattle)
	.endif
	@ data/text/trainers.inc:2378 Route121_Text_PatIntro (+1 aliases)
	.globl gText_Rom_25F8ED
gText_Rom_25F8ED: @ 0x0825F8ED
	.string "わたしの そだてた ポケモンたち\nみんなに みてほしいの!{EOS}"
	.if (. - gText_Rom_25F8ED) > 0x1e
	.error "gText_Rom_25F8ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F8ED) < 0x1e
	.space 0x1e - (. - gText_Rom_25F8ED)
	.endif
	@ data/text/trainers.inc:2381 Route121_Text_PatDefeat (+1 aliases)
	.globl gText_Rom_25F90B
gText_Rom_25F90B: @ 0x0825F90B
	.string "すごいなァ!{EOS}"
	.if (. - gText_Rom_25F90B) > 0x7
	.error "gText_Rom_25F90B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F90B) < 0x7
	.space 0x7 - (. - gText_Rom_25F90B)
	.endif
	@ data/text/trainers.inc:2384 Route121_Text_PatPostBattle
	.globl gText_Rom_25F912
gText_Rom_25F912: @ 0x0825F912
	.string "どんな ポケモンでも おなじように\nかわいがって そだてているの!{EOS}"
	.if (. - gText_Rom_25F912) > 0x22
	.error "gText_Rom_25F912 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F912) < 0x22
	.space 0x22 - (. - gText_Rom_25F912)
	.endif
	@ data/text/trainers.inc:2387 Route121_Text_MarcelIntro (+1 aliases)
	.globl Route121_Text_MarcelIntro
Route121_Text_MarcelIntro: @ 0x0825F934
	.string "わたしの ポケモンは まけしらず!\nこんど かったら つぎは コンテストだ!{EOS}"
	.if (. - Route121_Text_MarcelIntro) > 0x27
	.error "Route121_Text_MarcelIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_MarcelIntro) < 0x27
	.space 0x27 - (. - Route121_Text_MarcelIntro)
	.endif
	@ data/text/trainers.inc:2390 Route121_Text_MarcelDefeat (+1 aliases)
	.globl Route121_Text_MarcelDefeat
Route121_Text_MarcelDefeat: @ 0x0825F95B
	.string "あっと どうしたことだ?{EOS}"
	.if (. - Route121_Text_MarcelDefeat) > 0xd
	.error "Route121_Text_MarcelDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_MarcelDefeat) < 0xd
	.space 0xd - (. - Route121_Text_MarcelDefeat)
	.endif
	@ data/text/trainers.inc:2393 Route121_Text_MarcelPostBattle
	.globl Route121_Text_MarcelPostBattle
Route121_Text_MarcelPostBattle: @ 0x0825F968
	.string "コンテストの まえに\nもうすこし きたえないと ダメかな{EOS}"
	.if (. - Route121_Text_MarcelPostBattle) > 0x1d
	.error "Route121_Text_MarcelPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_MarcelPostBattle) < 0x1d
	.space 0x1d - (. - Route121_Text_MarcelPostBattle)
	.endif
	@ data/text/trainers.inc:2396 Route123_Text_WendyIntro (+1 aliases)
	.globl Route123_Text_WendyIntro
Route123_Text_WendyIntro: @ 0x0825F985
	.string "あなたの じつりょくが\nどれほどの ものか……\lわたしが たしかめて あげる!{EOS}"
	.if (. - Route123_Text_WendyIntro) > 0x28
	.error "Route123_Text_WendyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_WendyIntro) < 0x28
	.space 0x28 - (. - Route123_Text_WendyIntro)
	.endif
	@ data/text/trainers.inc:2399 Route123_Text_WendyDefeat (+1 aliases)
	.globl Route123_Text_WendyDefeat
Route123_Text_WendyDefeat: @ 0x0825F9AD
	.string "すばらしいわ……!{EOS}"
	.if (. - Route123_Text_WendyDefeat) > 0xa
	.error "Route123_Text_WendyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_WendyDefeat) < 0xa
	.space 0xa - (. - Route123_Text_WendyDefeat)
	.endif
	@ data/text/trainers.inc:2402 Route123_Text_WendyPostBattle
	.globl Route123_Text_WendyPostBattle
Route123_Text_WendyPostBattle: @ 0x0825F9B7
	.string "わたしに かつなんて……\nあなたの じつりょくも そうとうな もの!{EOS}"
	.if (. - Route123_Text_WendyPostBattle) > 0x23
	.error "Route123_Text_WendyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_WendyPostBattle) < 0x23
	.space 0x23 - (. - Route123_Text_WendyPostBattle)
	.endif
	@ data/text/trainers.inc:2405 Route123_Text_BraxtonIntro (+1 aliases)
	.globl Route123_Text_BraxtonIntro
Route123_Text_BraxtonIntro: @ 0x0825F9DA
	.string "たくさん ジムの バッジを\nもっている みたいだね!\pほんとうに それだけの ちからが あるか\nたしかめさせて もらうよ!{EOS}"
	.if (. - Route123_Text_BraxtonIntro) > 0x3e
	.error "Route123_Text_BraxtonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_BraxtonIntro) < 0x3e
	.space 0x3e - (. - Route123_Text_BraxtonIntro)
	.endif
	@ data/text/trainers.inc:2408 Route123_Text_BraxtonDefeat (+1 aliases)
	.globl Route123_Text_BraxtonDefeat
Route123_Text_BraxtonDefeat: @ 0x0825FA18
	.string "たしかに ちからは ある!{EOS}"
	.if (. - Route123_Text_BraxtonDefeat) > 0xe
	.error "Route123_Text_BraxtonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_BraxtonDefeat) < 0xe
	.space 0xe - (. - Route123_Text_BraxtonDefeat)
	.endif
	@ data/text/trainers.inc:2411 Route123_Text_BraxtonPostBattle
	.globl gText_Rom_25FA26
gText_Rom_25FA26: @ 0x0825FA26
	.string "ジムバッジに はじない\nたたかい だったよ!{EOS}"
	.if (. - gText_Rom_25FA26) > 0x17
	.error "gText_Rom_25FA26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA26) < 0x17
	.space 0x17 - (. - gText_Rom_25FA26)
	.endif
	@ data/text/trainers.inc:2414 Route123_Text_VioletIntro (+1 aliases)
	.globl Route123_Text_VioletIntro
Route123_Text_VioletIntro: @ 0x0825FA3D
	.string "たのしい ことが あるとき って\nいい においで いっぱいに なってるのね{EOS}"
	.if (. - Route123_Text_VioletIntro) > 0x26
	.error "Route123_Text_VioletIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_VioletIntro) < 0x26
	.space 0x26 - (. - Route123_Text_VioletIntro)
	.endif
	@ data/text/trainers.inc:2417 Route123_Text_VioletDefeat (+1 aliases)
	.globl Route123_Text_VioletDefeat
Route123_Text_VioletDefeat: @ 0x0825FA63
	.string "あぁ\nかなしみの におい だわ……{EOS}"
	.if (. - Route123_Text_VioletDefeat) > 0x12
	.error "Route123_Text_VioletDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_VioletDefeat) < 0x12
	.space 0x12 - (. - Route123_Text_VioletDefeat)
	.endif
	@ data/text/trainers.inc:2420 Route123_Text_VioletPostBattle
	.globl gText_Rom_25FA75
gText_Rom_25FA75: @ 0x0825FA75
	.string "きのみ めいじんの はなばたけ\nすっごく いいかんじの においで いっぱい!{EOS}"
	.if (. - gText_Rom_25FA75) > 0x27
	.error "gText_Rom_25FA75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA75) < 0x27
	.space 0x27 - (. - gText_Rom_25FA75)
	.endif

	@ data/text/trainers.inc:2423 Route123_Text_CameronIntro (+1 aliases)
	.globl gText_Rom_25FA9C
gText_Rom_25FA9C: @ 0x0825FA9C
	.string "サイキックとは きもちの つよさ……\pそう ぼくは だれにも まけないと\nおもっているから つよいよ!{EOS}"
	.if (. - gText_Rom_25FA9C) > 0x34
	.error "gText_Rom_25FA9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA9C) < 0x34
	.space 0x34 - (. - gText_Rom_25FA9C)
	.endif
