	@ data/text/trainers.inc:2426 Route123_Text_CameronDefeat (+2 aliases)
	.globl gText_Rom_25FAD0
gText_Rom_25FAD0: @ 0x0825FAD0
	.string "しょんぼり……{EOS}"
	.if (. - gText_Rom_25FAD0) > 0x8
	.error "gText_Rom_25FAD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FAD0) < 0x8
	.space 0x8 - (. - gText_Rom_25FAD0)
	.endif
	@ data/text/trainers.inc:2429 Route123_Text_CameronPostBattle
	.globl Route123_Text_CameronPostBattle
Route123_Text_CameronPostBattle: @ 0x0825FAD8
	.string "サイキックとは きもちの つよさ\nきみには まけないと おもっていたのに……{EOS}"
	.if (. - Route123_Text_CameronPostBattle) > 0x27
	.error "Route123_Text_CameronPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_CameronPostBattle) < 0x27
	.space 0x27 - (. - Route123_Text_CameronPostBattle)
	.endif
	@ data/text/trainers.inc:2432 Route123_Text_CameronRegister
	.globl Route123_Text_CameronRegister
Route123_Text_CameronRegister: @ 0x0825FAFF
	.string "ぼくには わかる!\nぼくと きみとは また しょうぶする!\lかてるか わかんない けど……\pポケナビを だして!{EOS}"
	.if (. - Route123_Text_CameronRegister) > 0x39
	.error "Route123_Text_CameronRegister may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_CameronRegister) < 0x39
	.space 0x39 - (. - Route123_Text_CameronRegister)
	.endif
	@ data/text/trainers.inc:2435 Route123_Text_CameronRematchIntro (+1 aliases)
	.globl Route123_Text_CameronRematchIntro
Route123_Text_CameronRematchIntro: @ 0x0825FB38
	.string "ぼくは もう だれにも まけないと\nおもっているから つよいよ!!{EOS}"
	.if (. - Route123_Text_CameronRematchIntro) > 0x22
	.error "Route123_Text_CameronRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_CameronRematchIntro) < 0x22
	.space 0x22 - (. - Route123_Text_CameronRematchIntro)
	.endif
	@ data/text/trainers.inc:2426 Route123_Text_CameronDefeat (+2 aliases)
	.globl gText_Rom_25FB5A
gText_Rom_25FB5A: @ 0x0825FB5A
	.string "しょんぼり……{EOS}"
	.if (. - gText_Rom_25FB5A) > 0x8
	.error "gText_Rom_25FB5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FB5A) < 0x8
	.space 0x8 - (. - gText_Rom_25FB5A)
	.endif
	@ data/text/trainers.inc:2441 Route123_Text_CameronPostRematch
	.globl Route123_Text_CameronPostRematch
Route123_Text_CameronPostRematch: @ 0x0825FB62
	.string "おくりびやまで しゅぎょうでも しようかな\nこのままじゃ ずっと きみに かてないよ{EOS}"
	.if (. - Route123_Text_CameronPostRematch) > 0x2b
	.error "Route123_Text_CameronPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_CameronPostRematch) < 0x2b
	.space 0x2b - (. - Route123_Text_CameronPostRematch)
	.endif
	@ data/text/trainers.inc:2444 Route123_Text_JackiIntro (+1 aliases)
	.globl Route123_Text_JackiIntro
Route123_Text_JackiIntro: @ 0x0825FB8D
	.string "ポケモンも ちょうのうりょくも\nつかえるだけじゃ いみ ないわ\lきたえてこそ ほんものに なるのよ{EOS}"
	.if (. - Route123_Text_JackiIntro) > 0x32
	.error "Route123_Text_JackiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_JackiIntro) < 0x32
	.space 0x32 - (. - Route123_Text_JackiIntro)
	.endif
	@ data/text/trainers.inc:2447 Route123_Text_JackiDefeat (+1 aliases)
	.globl Route123_Text_JackiDefeat
Route123_Text_JackiDefeat: @ 0x0825FBBF
	.string "すごい!{EOS}"
	.if (. - Route123_Text_JackiDefeat) > 0x5
	.error "Route123_Text_JackiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_JackiDefeat) < 0x5
	.space 0x5 - (. - Route123_Text_JackiDefeat)
	.endif
	@ data/text/trainers.inc:2450 Route123_Text_JackiPostBattle
	.globl Route123_Text_JackiPostBattle
Route123_Text_JackiPostBattle: @ 0x0825FBC4
	.string "だれでも ちょうのうりょくを もっているの\nただ つかいかたを わすれている だけよ{EOS}"
	.if (. - Route123_Text_JackiPostBattle) > 0x2b
	.error "Route123_Text_JackiPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_JackiPostBattle) < 0x2b
	.space 0x2b - (. - Route123_Text_JackiPostBattle)
	.endif
	@ data/text/trainers.inc:2453 Route123_Text_JackiRegister
	.globl Route123_Text_JackiRegister
Route123_Text_JackiRegister: @ 0x0825FBEF
	.string "もういちど しょうぶして みたいわ!\nいいでしょう?{EOS}"
	.if (. - Route123_Text_JackiRegister) > 0x1b
	.error "Route123_Text_JackiRegister may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_JackiRegister) < 0x1b
	.space 0x1b - (. - Route123_Text_JackiRegister)
	.endif
	@ data/text/trainers.inc:2456 Route123_Text_JackiRematchIntro (+1 aliases)
	.globl Route123_Text_JackiRematchIntro
Route123_Text_JackiRematchIntro: @ 0x0825FC0A
	.string "どう? あなたの なかの\nちょうのうりょく めばえたり した?{EOS}"
	.if (. - Route123_Text_JackiRematchIntro) > 0x20
	.error "Route123_Text_JackiRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_JackiRematchIntro) < 0x20
	.space 0x20 - (. - Route123_Text_JackiRematchIntro)
	.endif
	@ data/text/trainers.inc:2459 Route123_Text_JackiRematchDefeat (+1 aliases)
	.globl Route123_Text_JackiRematchDefeat
Route123_Text_JackiRematchDefeat: @ 0x0825FC2A
	.string "すごいわ!{EOS}"
	.if (. - Route123_Text_JackiRematchDefeat) > 0x6
	.error "Route123_Text_JackiRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_JackiRematchDefeat) < 0x6
	.space 0x6 - (. - Route123_Text_JackiRematchDefeat)
	.endif
	@ data/text/trainers.inc:2462 Route123_Text_JackiPostRematch
	.globl Route123_Text_JackiPostRematch
Route123_Text_JackiPostRematch: @ 0x0825FC30
	.string "あなたの つよさ\nそれも ちょうのうりょく かもね{EOS}"
	.if (. - Route123_Text_JackiPostRematch) > 0x1a
	.error "Route123_Text_JackiPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_JackiPostRematch) < 0x1a
	.space 0x1a - (. - Route123_Text_JackiPostRematch)
	.endif
	@ data/text/trainers.inc:2465 Route123_Text_MiuIntro (+1 aliases)
	.globl Route123_Text_MiuIntro
Route123_Text_MiuIntro: @ 0x0825FC4A
	.string "ミウ『トレーナーさんの ポケモン\nまけても なかないで くださいね!{EOS}"
	.if (. - Route123_Text_MiuIntro) > 0x23
	.error "Route123_Text_MiuIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_MiuIntro) < 0x23
	.space 0x23 - (. - Route123_Text_MiuIntro)
	.endif
	@ data/text/trainers.inc:2468 Route123_Text_MiuDefeat (+1 aliases)
	.globl Route123_Text_MiuDefeat
Route123_Text_MiuDefeat: @ 0x0825FC6D
	.string "ミウ『まけちゃったね……{EOS}"
	.if (. - Route123_Text_MiuDefeat) > 0xd
	.error "Route123_Text_MiuDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_MiuDefeat) < 0xd
	.space 0xd - (. - Route123_Text_MiuDefeat)
	.endif
	@ data/text/trainers.inc:2471 Route123_Text_MiuPostBattle
	.globl Route123_Text_MiuPostBattle
Route123_Text_MiuPostBattle: @ 0x0825FC7A
	.string "ミウ『トレーナーさんの ポケモン\nなかが いいから つよいんですね!{EOS}"
	.if (. - Route123_Text_MiuPostBattle) > 0x23
	.error "Route123_Text_MiuPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_MiuPostBattle) < 0x23
	.space 0x23 - (. - Route123_Text_MiuPostBattle)
	.endif
	@ data/text/trainers.inc:2474 Route123_Text_MiuNotEnoughMons (+1 aliases)
	.globl Route123_Text_MiuNotEnoughMons
Route123_Text_MiuNotEnoughMons: @ 0x0825FC9D
	.string "ミウ『ポケモンさん 2ひきは いないと\nたたかっても つまらないもん!{EOS}"
	.if (. - Route123_Text_MiuNotEnoughMons) > 0x24
	.error "Route123_Text_MiuNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_MiuNotEnoughMons) < 0x24
	.space 0x24 - (. - Route123_Text_MiuNotEnoughMons)
	.endif
	@ data/text/trainers.inc:2477 Route123_Text_YukiIntro (+1 aliases)
	.globl Route123_Text_YukiIntro
Route123_Text_YukiIntro: @ 0x0825FCC1
	.string "ユキ『よーし!\nトレーナーさんの ポケモン やっつけます!{EOS}"
	.if (. - Route123_Text_YukiIntro) > 0x1e
	.error "Route123_Text_YukiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_YukiIntro) < 0x1e
	.space 0x1e - (. - Route123_Text_YukiIntro)
	.endif
	@ data/text/trainers.inc:2480 Route123_Text_YukiDefeat (+1 aliases)
	.globl Route123_Text_YukiDefeat
Route123_Text_YukiDefeat: @ 0x0825FCDF
	.string "ユキ『まけちゃったね……{EOS}"
	.if (. - Route123_Text_YukiDefeat) > 0xd
	.error "Route123_Text_YukiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_YukiDefeat) < 0xd
	.space 0xd - (. - Route123_Text_YukiDefeat)
	.endif
	@ data/text/trainers.inc:2483 Route123_Text_YukiPostBattle
	.globl Route123_Text_YukiPostBattle
Route123_Text_YukiPostBattle: @ 0x0825FCEC
	.string "ユキ『どーして そんなに つよいの?\nあたちたち たたかって まけたの はじめて!{EOS}"
	.if (. - Route123_Text_YukiPostBattle) > 0x2a
	.error "Route123_Text_YukiPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_YukiPostBattle) < 0x2a
	.space 0x2a - (. - Route123_Text_YukiPostBattle)
	.endif
	@ data/text/trainers.inc:2486 Route123_Text_YukiNotEnoughMons (+1 aliases)
	.globl Route123_Text_YukiNotEnoughMons
Route123_Text_YukiNotEnoughMons: @ 0x0825FD16
	.string "ユキ『ポケモンさん 2ひきは いないと\nたたかっても つまらないもん!{EOS}"
	.if (. - Route123_Text_YukiNotEnoughMons) > 0x24
	.error "Route123_Text_YukiNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_YukiNotEnoughMons) < 0x24
	.space 0x24 - (. - Route123_Text_YukiNotEnoughMons)
	.endif
	@ data/text/trainers.inc:2489 Route123_Text_KindraIntro (+1 aliases)
	.globl Route123_Text_KindraIntro
Route123_Text_KindraIntro: @ 0x0825FD3A
	.string "おくりびやまは……\nポケモンの たましいが ねむるところ……\lあなたの ポケモンも ねむる……?{EOS}"
	.if (. - Route123_Text_KindraIntro) > 0x31
	.error "Route123_Text_KindraIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_KindraIntro) < 0x31
	.space 0x31 - (. - Route123_Text_KindraIntro)
	.endif
	@ data/text/trainers.inc:2492 Route123_Text_KindraDefeat (+1 aliases)
	.globl Route123_Text_KindraDefeat
Route123_Text_KindraDefeat: @ 0x0825FD6B
	.string "げんき いっぱいね……{EOS}"
	.if (. - Route123_Text_KindraDefeat) > 0xc
	.error "Route123_Text_KindraDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_KindraDefeat) < 0xc
	.space 0xc - (. - Route123_Text_KindraDefeat)
	.endif
	@ data/text/trainers.inc:2495 Route123_Text_KindraPostBattle
	.globl Route123_Text_KindraPostBattle
Route123_Text_KindraPostBattle: @ 0x0825FD77
	.string "おくりびやまは……\nポケモンの たましいが ねむるところ……\pきっと たましいを なぐさめる\nちからに あふれてるのよ……{EOS}"
	.if (. - Route123_Text_KindraPostBattle) > 0x3e
	.error "Route123_Text_KindraPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_KindraPostBattle) < 0x3e
	.space 0x3e - (. - Route123_Text_KindraPostBattle)
	.endif
	@ data/text/trainers.inc:2498 Route123_Text_FernandoIntro (+1 aliases)
	.globl Route123_Text_FernandoIntro
Route123_Text_FernandoIntro: @ 0x0825FDB5
	.string "いっきょく かなでる あいだに\nパッと たおしちゃうゼ!{EOS}"
	.if (. - Route123_Text_FernandoIntro) > 0x1d
	.error "Route123_Text_FernandoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_FernandoIntro) < 0x1d
	.space 0x1d - (. - Route123_Text_FernandoIntro)
	.endif
	@ data/text/trainers.inc:2501 Route123_Text_FernandoDefeat (+1 aliases)
	.globl Route123_Text_FernandoDefeat
Route123_Text_FernandoDefeat: @ 0x0825FDD2
	.string "おいおい まだ イントロだゼ!{EOS}"
	.if (. - Route123_Text_FernandoDefeat) > 0x10
	.error "Route123_Text_FernandoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_FernandoDefeat) < 0x10
	.space 0x10 - (. - Route123_Text_FernandoDefeat)
	.endif
	@ data/text/trainers.inc:2504 Route123_Text_FernandoPostBattle
	.globl Route123_Text_FernandoPostBattle
Route123_Text_FernandoPostBattle: @ 0x0825FDE2
	.string "きみ やるじゃん\nきみの きょくを つくって みたいよ{EOS}"
	.if (. - Route123_Text_FernandoPostBattle) > 0x1c
	.error "Route123_Text_FernandoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_FernandoPostBattle) < 0x1c
	.space 0x1c - (. - Route123_Text_FernandoPostBattle)
	.endif
	@ data/text/trainers.inc:2507 Route123_Text_FernandoRegister
	.globl Route123_Text_FernandoRegister
Route123_Text_FernandoRegister: @ 0x0825FDFE
	.string "こんど あった ときには\nフルコーラス きいて くれヨ!{EOS}"
	.if (. - Route123_Text_FernandoRegister) > 0x1d
	.error "Route123_Text_FernandoRegister may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_FernandoRegister) < 0x1d
	.space 0x1d - (. - Route123_Text_FernandoRegister)
	.endif
	@ data/text/trainers.inc:2510 Route123_Text_FernandoRematchIntro (+1 aliases)
	.globl Route123_Text_FernandoRematchIntro
Route123_Text_FernandoRematchIntro: @ 0x0825FE1B
	.string "よし きょうこそ!\n1ばんを うたっている あいだに\lサッと たおしちゃうゼ!{EOS}"
	.if (. - Route123_Text_FernandoRematchIntro) > 0x28
	.error "Route123_Text_FernandoRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_FernandoRematchIntro) < 0x28
	.space 0x28 - (. - Route123_Text_FernandoRematchIntro)
	.endif
	@ data/text/trainers.inc:2513 Route123_Text_FernandoRematchDefeat (+1 aliases)
	.globl Route123_Text_FernandoRematchDefeat
Route123_Text_FernandoRematchDefeat: @ 0x0825FE43
	.string "おいおい まだ サビまで いってないゼ!{EOS}"
	.if (. - Route123_Text_FernandoRematchDefeat) > 0x15
	.error "Route123_Text_FernandoRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_FernandoRematchDefeat) < 0x15
	.space 0x15 - (. - Route123_Text_FernandoRematchDefeat)
	.endif
	@ data/text/trainers.inc:2516 Route123_Text_FernandoPostRematch
	.globl Route123_Text_FernandoPostRematch
Route123_Text_FernandoPostRematch: @ 0x0825FE58
	.string "オレの うたに ききほれて\nまけちゃう って おもってたんだけど{EOS}"
	.if (. - Route123_Text_FernandoPostRematch) > 0x21
	.error "Route123_Text_FernandoPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_FernandoPostRematch) < 0x21
	.space 0x21 - (. - Route123_Text_FernandoPostRematch)
	.endif
	@ data/text/trainers.inc:2519 Route123_Text_DavisIntro (+1 aliases)
	.globl Route123_Text_DavisIntro
Route123_Text_DavisIntro: @ 0x0825FE79
	.string "ぼくの おにいちゃんに とってもらった\nじまんの むしポケモンだよ!{EOS}"
	.if (. - Route123_Text_DavisIntro) > 0x23
	.error "Route123_Text_DavisIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_DavisIntro) < 0x23
	.space 0x23 - (. - Route123_Text_DavisIntro)
	.endif
	@ data/text/trainers.inc:2522 Route123_Text_DavisDefeat (+1 aliases)
	.globl Route123_Text_DavisDefeat
Route123_Text_DavisDefeat: @ 0x0825FE9C
	.string "わーん バカーっ!{EOS}"
	.if (. - Route123_Text_DavisDefeat) > 0xa
	.error "Route123_Text_DavisDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_DavisDefeat) < 0xa
	.space 0xa - (. - Route123_Text_DavisDefeat)
	.endif
	@ data/text/trainers.inc:2525 Route123_Text_DavisPostBattle
	.globl Route123_Text_DavisPostBattle
Route123_Text_DavisPostBattle: @ 0x0825FEA6
	.string "まけちゃった こと\nぼくの おにいちゃんには ひみつ だよ!{EOS}"
	.if (. - Route123_Text_DavisPostBattle) > 0x1f
	.error "Route123_Text_DavisPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_DavisPostBattle) < 0x1f
	.space 0x1f - (. - Route123_Text_DavisPostBattle)
	.endif
	@ data/text/trainers.inc:2528 Route123_Text_JazmynIntro (+1 aliases)
	.globl Route123_Text_JazmynIntro
Route123_Text_JazmynIntro: @ 0x0825FEC5
	.string "みるからに つよそうな あなたを\nたおせば じしんが つくわね!{EOS}"
	.if (. - Route123_Text_JazmynIntro) > 0x21
	.error "Route123_Text_JazmynIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_JazmynIntro) < 0x21
	.space 0x21 - (. - Route123_Text_JazmynIntro)
	.endif
	@ data/text/trainers.inc:2531 Route123_Text_JazmynDefeat (+1 aliases)
	.globl Route123_Text_JazmynDefeat
Route123_Text_JazmynDefeat: @ 0x0825FEE6
	.string "じしん なくしました……{EOS}"
	.if (. - Route123_Text_JazmynDefeat) > 0xd
	.error "Route123_Text_JazmynDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_JazmynDefeat) < 0xd
	.space 0xd - (. - Route123_Text_JazmynDefeat)
	.endif
	@ data/text/trainers.inc:2534 Route123_Text_JazmynPostBattle
	.globl Route123_Text_JazmynPostBattle
Route123_Text_JazmynPostBattle: @ 0x0825FEF3
	.string "ヒトは みためには よらないと いうけど\nけっこう みためどおりの ことも あるわね{EOS}"
	.if (. - Route123_Text_JazmynPostBattle) > 0x2b
	.error "Route123_Text_JazmynPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_JazmynPostBattle) < 0x2b
	.space 0x2b - (. - Route123_Text_JazmynPostBattle)
	.endif
	@ data/text/trainers.inc:2537 Route123_Text_FrederickIntro (+1 aliases)
	.globl Route123_Text_FrederickIntro
Route123_Text_FrederickIntro: @ 0x0825FF1E
	.string "おい きみきみ\nじいちゃんと ちょっと あそぼうか{EOS}"
	.if (. - Route123_Text_FrederickIntro) > 0x1a
	.error "Route123_Text_FrederickIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_FrederickIntro) < 0x1a
	.space 0x1a - (. - Route123_Text_FrederickIntro)
	.endif
	@ data/text/trainers.inc:2540 Route123_Text_FrederickDefeat (+1 aliases)
	.globl Route123_Text_FrederickDefeat
Route123_Text_FrederickDefeat: @ 0x0825FF38
	.string "つよいこ じゃな\nこづかいを やるか{EOS}"
	.if (. - Route123_Text_FrederickDefeat) > 0x13
	.error "Route123_Text_FrederickDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_FrederickDefeat) < 0x13
	.space 0x13 - (. - Route123_Text_FrederickDefeat)
	.endif
	@ data/text/trainers.inc:2543 Route123_Text_FrederickPostBattle
	.globl Route123_Text_FrederickPostBattle
Route123_Text_FrederickPostBattle: @ 0x0825FF4B
	.string "え こづかい?\nしょうきんを もらったから いいじゃろ!{EOS}"
	.if (. - Route123_Text_FrederickPostBattle) > 0x1d
	.error "Route123_Text_FrederickPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_FrederickPostBattle) < 0x1d
	.space 0x1d - (. - Route123_Text_FrederickPostBattle)
	.endif
	@ data/text/trainers.inc:2546 Route123_Text_AlbertoIntro (+1 aliases)
	.globl Route123_Text_AlbertoIntro
Route123_Text_AlbertoIntro: @ 0x0825FF68
	.string "オレ マジ とりポケモンが すき!\nとりイカス! とりサイコー!{EOS}"
	.if (. - Route123_Text_AlbertoIntro) > 0x21
	.error "Route123_Text_AlbertoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_AlbertoIntro) < 0x21
	.space 0x21 - (. - Route123_Text_AlbertoIntro)
	.endif
	@ data/text/trainers.inc:2549 Route123_Text_AlbertoDefeat (+1 aliases)
	.globl Route123_Text_AlbertoDefeat
Route123_Text_AlbertoDefeat: @ 0x0825FF89
	.string "まけた とりポケモンも イカス!{EOS}"
	.if (. - Route123_Text_AlbertoDefeat) > 0x11
	.error "Route123_Text_AlbertoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_AlbertoDefeat) < 0x11
	.space 0x11 - (. - Route123_Text_AlbertoDefeat)
	.endif
	@ data/text/trainers.inc:2552 Route123_Text_AlbertoPostBattle
	.globl Route123_Text_AlbertoPostBattle
Route123_Text_AlbertoPostBattle: @ 0x0825FF9A
	.string "しょうぶの あいだに ちらばった\nとりポケモンの ハネを あつめて\lぼうしを つくる つもりなんだ!{EOS}"
	.if (. - Route123_Text_AlbertoPostBattle) > 0x33
	.error "Route123_Text_AlbertoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_AlbertoPostBattle) < 0x33
	.space 0x33 - (. - Route123_Text_AlbertoPostBattle)
	.endif
	@ data/text/trainers.inc:2555 Route123_Text_EdIntro (+1 aliases)
	.globl Route123_Text_EdIntro
Route123_Text_EdIntro: @ 0x0825FFCD
	.string "トレーナーが いない ときは\nじぶんの ポケモンどうしを\lたたかわせて ながめて いるぞぅ{EOS}"
	.if (. - Route123_Text_EdIntro) > 0x2e
	.error "Route123_Text_EdIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_EdIntro) < 0x2e
	.space 0x2e - (. - Route123_Text_EdIntro)
	.endif
	@ data/text/trainers.inc:2558 Route123_Text_EdDefeat (+1 aliases)
	.globl Route123_Text_EdDefeat
Route123_Text_EdDefeat: @ 0x0825FFFB
	.string "きみの ポケモンも いいねぃ{EOS}"
	.if (. - Route123_Text_EdDefeat) > 0xf
	.error "Route123_Text_EdDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_EdDefeat) < 0xf
	.space 0xf - (. - Route123_Text_EdDefeat)
	.endif
	@ data/text/trainers.inc:2561 Route123_Text_EdPostBattle
	.globl Route123_Text_EdPostBattle
Route123_Text_EdPostBattle: @ 0x0826000A
	.string "へへへ きみの たたかいかたの\nアイディア いただき!\lつよく なれそう だよぅ{EOS}"
	.if (. - Route123_Text_EdPostBattle) > 0x29
	.error "Route123_Text_EdPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_EdPostBattle) < 0x29
	.space 0x29 - (. - Route123_Text_EdPostBattle)
	.endif
	@ data/text/trainers.inc:2564 Route123_Text_JonasIntro (+1 aliases)
	.globl Route123_Text_JonasIntro
Route123_Text_JonasIntro: @ 0x08260033
	.string "まちぶせ していたら\nトレーナーが かかったで ござる!{EOS}"
	.if (. - Route123_Text_JonasIntro) > 0x1d
	.error "Route123_Text_JonasIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_JonasIntro) < 0x1d
	.space 0x1d - (. - Route123_Text_JonasIntro)
	.endif
	@ data/text/trainers.inc:2567 Route123_Text_JonasDefeat (+1 aliases)
	.globl Route123_Text_JonasDefeat
Route123_Text_JonasDefeat: @ 0x08260050
	.string "まけて くれなきゃ\nニンジャごっこ できないよ{EOS}"
	.if (. - Route123_Text_JonasDefeat) > 0x18
	.error "Route123_Text_JonasDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_JonasDefeat) < 0x18
	.space 0x18 - (. - Route123_Text_JonasDefeat)
	.endif
	@ data/text/trainers.inc:2570 Route123_Text_JonasPostBattle
	.globl Route123_Text_JonasPostBattle
Route123_Text_JonasPostBattle: @ 0x08260068
	.string "つぎは もっと よわそうな トレーナーを\nまちぶせ してみるで ござるよ{EOS}"
	.if (. - Route123_Text_JonasPostBattle) > 0x25
	.error "Route123_Text_JonasPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_JonasPostBattle) < 0x25
	.space 0x25 - (. - Route123_Text_JonasPostBattle)
	.endif
	@ data/text/trainers.inc:2573 Route123_Text_KayleyIntro (+1 aliases)
	.globl Route123_Text_KayleyIntro
Route123_Text_KayleyIntro: @ 0x0826008D
	.string "かった ばかりの パラソルで\nわたしも 3わりましで かわいい はず!{EOS}"
	.if (. - Route123_Text_KayleyIntro) > 0x24
	.error "Route123_Text_KayleyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_KayleyIntro) < 0x24
	.space 0x24 - (. - Route123_Text_KayleyIntro)
	.endif
	@ data/text/trainers.inc:2576 Route123_Text_KayleyDefeat (+1 aliases)
	.globl Route123_Text_KayleyDefeat
Route123_Text_KayleyDefeat: @ 0x082600B1
	.string "わたしの 5ばい くらい つよいわね{EOS}"
	.if (. - Route123_Text_KayleyDefeat) > 0x13
	.error "Route123_Text_KayleyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_KayleyDefeat) < 0x13
	.space 0x13 - (. - Route123_Text_KayleyDefeat)
	.endif
	@ data/text/trainers.inc:2579 Route123_Text_KayleyPostBattle
	.globl Route123_Text_KayleyPostBattle
Route123_Text_KayleyPostBattle: @ 0x082600C4
	.string "こもの づかいも おしゃれの ひけつよ!{EOS}"
	.if (. - Route123_Text_KayleyPostBattle) > 0x15
	.error "Route123_Text_KayleyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_KayleyPostBattle) < 0x15
	.space 0x15 - (. - Route123_Text_KayleyPostBattle)
	.endif
	@ data/text/trainers.inc:2582 Route124_Text_SpencerIntro (+1 aliases)
	.globl Route124_Text_SpencerIntro
Route124_Text_SpencerIntro: @ 0x082600D9
	.string "おっと みちに まよったのか?\pわたしの ポケモンに かてたら\nみずさき あんないにんに なってあげようか?{EOS}"
	.if (. - Route124_Text_SpencerIntro) > 0x37
	.error "Route124_Text_SpencerIntro may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_SpencerIntro) < 0x37
	.space 0x37 - (. - Route124_Text_SpencerIntro)
	.endif
	@ data/text/trainers.inc:2585 Route124_Text_SpencerDefeat (+1 aliases)
	.globl Route124_Text_SpencerDefeat
Route124_Text_SpencerDefeat: @ 0x08260110
	.string "たたかいかたを まよってしまった……{EOS}"
	.if (. - Route124_Text_SpencerDefeat) > 0x13
	.error "Route124_Text_SpencerDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_SpencerDefeat) < 0x13
	.space 0x13 - (. - Route124_Text_SpencerDefeat)
	.endif
	@ data/text/trainers.inc:2588 Route124_Text_SpencerPostBattle
	.globl Route124_Text_SpencerPostBattle
Route124_Text_SpencerPostBattle: @ 0x08260123
	.string "うみで まよってしまう ひとは おおい!\pそんな ひとは ポケナビで\nマップを たしかめながら すすむと いい!{EOS}"
	.if (. - Route124_Text_SpencerPostBattle) > 0x39
	.error "Route124_Text_SpencerPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_SpencerPostBattle) < 0x39
	.space 0x39 - (. - Route124_Text_SpencerPostBattle)
	.endif
	@ data/text/trainers.inc:2591 Route124_Text_RolandIntro (+1 aliases)
	.globl Route124_Text_RolandIntro
Route124_Text_RolandIntro: @ 0x0826015C
	.string "むっ! じぶんで およがずに\nポケモンに のっている……\pなんて うらやましいんだ!{EOS}"
	.if (. - Route124_Text_RolandIntro) > 0x2b
	.error "Route124_Text_RolandIntro may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_RolandIntro) < 0x2b
	.space 0x2b - (. - Route124_Text_RolandIntro)
	.endif
	@ data/text/trainers.inc:2594 Route124_Text_RolandDefeat (+1 aliases)
	.globl Route124_Text_RolandDefeat
Route124_Text_RolandDefeat: @ 0x08260187
	.string "ああ!\nダメだ……!{EOS}"
	.if (. - Route124_Text_RolandDefeat) > 0xb
	.error "Route124_Text_RolandDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_RolandDefeat) < 0xb
	.space 0xb - (. - Route124_Text_RolandDefeat)
	.endif
	@ data/text/trainers.inc:2597 Route124_Text_RolandPostBattle
	.globl Route124_Text_RolandPostBattle
Route124_Text_RolandPostBattle: @ 0x08260192
	.string "からだが ひえてきた……\nながいこと みずの なかに いるからだ\pきみのように ポケモンに のりたいよ{EOS}"
	.if (. - Route124_Text_RolandPostBattle) > 0x34
	.error "Route124_Text_RolandPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_RolandPostBattle) < 0x34
	.space 0x34 - (. - Route124_Text_RolandPostBattle)
	.endif
	@ data/text/trainers.inc:2600 Route124_Text_JennyIntro (+1 aliases)
	.globl Route124_Text_JennyIntro
Route124_Text_JennyIntro: @ 0x082601C6
	.string "こうして うみに うかんでいると\nポケモンたちが あそびに くるのよ!{EOS}"
	.if (. - Route124_Text_JennyIntro) > 0x24
	.error "Route124_Text_JennyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_JennyIntro) < 0x24
	.space 0x24 - (. - Route124_Text_JennyIntro)
	.endif
	@ data/text/trainers.inc:2603 Route124_Text_JennyDefeat (+1 aliases)
	.globl Route124_Text_JennyDefeat
Route124_Text_JennyDefeat: @ 0x082601EA
	.string "あーあ\nまけちゃった……{EOS}"
	.if (. - Route124_Text_JennyDefeat) > 0xd
	.error "Route124_Text_JennyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_JennyDefeat) < 0xd
	.space 0xd - (. - Route124_Text_JennyDefeat)
	.endif
	@ data/text/trainers.inc:2606 Route124_Text_JennyPostBattle
	.globl Route124_Text_JennyPostBattle
Route124_Text_JennyPostBattle: @ 0x082601F7
	.string "うみを およいでいると\nおそってくる ポケモンと\lただ みているだけの ポケモンが いるの\pポケモンにも こせいが あるのね!{EOS}"
	.if (. - Route124_Text_JennyPostBattle) > 0x40
	.error "Route124_Text_JennyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_JennyPostBattle) < 0x40
	.space 0x40 - (. - Route124_Text_JennyPostBattle)
	.endif
	@ data/text/trainers.inc:2609 Route124_Text_JennyRegister
	.globl Route124_Text_JennyRegister
Route124_Text_JennyRegister: @ 0x08260237
	.string "なんとなく だけど\nポケナビ とうろく してもらおうかな……{EOS}"
	.if (. - Route124_Text_JennyRegister) > 0x1f
	.error "Route124_Text_JennyRegister may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_JennyRegister) < 0x1f
	.space 0x1f - (. - Route124_Text_JennyRegister)
	.endif
	@ data/text/trainers.inc:2612 Route124_Text_JennyRematchIntro (+1 aliases)
	.globl Route124_Text_JennyRematchIntro
Route124_Text_JennyRematchIntro: @ 0x08260256
	.string "こうして うみに うかんでいると\nトレーナーが いどんで くるのよね!{EOS}"
	.if (. - Route124_Text_JennyRematchIntro) > 0x24
	.error "Route124_Text_JennyRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_JennyRematchIntro) < 0x24
	.space 0x24 - (. - Route124_Text_JennyRematchIntro)
	.endif
	@ data/text/trainers.inc:2615 Route124_Text_JennyRematchDefeat (+1 aliases)
	.globl Route124_Text_JennyRematchDefeat
Route124_Text_JennyRematchDefeat: @ 0x0826027A
	.string "おかしいなあ\nまた まけちゃった……{EOS}"
	.if (. - Route124_Text_JennyRematchDefeat) > 0x13
	.error "Route124_Text_JennyRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_JennyRematchDefeat) < 0x13
	.space 0x13 - (. - Route124_Text_JennyRematchDefeat)
	.endif
	@ data/text/trainers.inc:2618 Route124_Text_JennyPostRematch
	.globl Route124_Text_JennyPostRematch
Route124_Text_JennyPostRematch: @ 0x0826028D
	.string "なんとなく だけど\nカラクリやしきに いってみようかな……{EOS}"
	.if (. - Route124_Text_JennyPostRematch) > 0x1e
	.error "Route124_Text_JennyPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_JennyPostRematch) < 0x1e
	.space 0x1e - (. - Route124_Text_JennyPostRematch)
	.endif
	@ data/text/trainers.inc:2621 Route124_Text_GraceIntro (+1 aliases)
	.globl Route124_Text_GraceIntro
Route124_Text_GraceIntro: @ 0x082602AB
	.string "およぐのにも あきた ところだし……\nわたしと しょうぶ しようよ!{EOS}"
	.if (. - Route124_Text_GraceIntro) > 0x23
	.error "Route124_Text_GraceIntro may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_GraceIntro) < 0x23
	.space 0x23 - (. - Route124_Text_GraceIntro)
	.endif
	@ data/text/trainers.inc:2624 Route124_Text_GraceDefeat (+1 aliases)
	.globl Route124_Text_GraceDefeat
Route124_Text_GraceDefeat: @ 0x082602CE
	.string "こんなに つよいなんて\nおもいも しなかったわ!{EOS}"
	.if (. - Route124_Text_GraceDefeat) > 0x19
	.error "Route124_Text_GraceDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_GraceDefeat) < 0x19
	.space 0x19 - (. - Route124_Text_GraceDefeat)
	.endif
	@ data/text/trainers.inc:2627 Route124_Text_GracePostBattle
	.globl Route124_Text_GracePostBattle
Route124_Text_GracePostBattle: @ 0x082602E7
	.string "ずっと がんばって きたことが\nあなたの つよさなのね……!{EOS}"
	.if (. - Route124_Text_GracePostBattle) > 0x1f
	.error "Route124_Text_GracePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_GracePostBattle) < 0x1f
	.space 0x1f - (. - Route124_Text_GracePostBattle)
	.endif
	@ data/text/trainers.inc:2630 Route124_Text_ChadIntro (+1 aliases)
	.globl Route124_Text_ChadIntro
Route124_Text_ChadIntro: @ 0x08260306
	.string "うふふふふ\nオレは モグリの スイマー\lもぐりは とくいちゅうの とくいだぜ!{EOS}"
	.if (. - Route124_Text_ChadIntro) > 0x28
	.error "Route124_Text_ChadIntro may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_ChadIntro) < 0x28
	.space 0x28 - (. - Route124_Text_ChadIntro)
	.endif
	@ data/text/trainers.inc:2633 Route124_Text_ChadDefeat (+1 aliases)
	.globl Route124_Text_ChadDefeat
Route124_Text_ChadDefeat: @ 0x0826032E
	.string "ゴボゴボゴボ……\nしずんでいく……{EOS}"
	.if (. - Route124_Text_ChadDefeat) > 0x12
	.error "Route124_Text_ChadDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_ChadDefeat) < 0x12
	.space 0x12 - (. - Route124_Text_ChadDefeat)
	.endif
	@ data/text/trainers.inc:2636 Route124_Text_ChadPostBattle
	.globl Route124_Text_ChadPostBattle
Route124_Text_ChadPostBattle: @ 0x08260340
	.string "うみの そこに もぐれる ポイントが\nこの あたりには あるらしいぜ!\lモグリの ちが さわぐなあ……{EOS}"
	.if (. - Route124_Text_ChadPostBattle) > 0x34
	.error "Route124_Text_ChadPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_ChadPostBattle) < 0x34
	.space 0x34 - (. - Route124_Text_ChadPostBattle)
	.endif
	@ data/text/trainers.inc:2639 Route124_Text_LilaIntro (+1 aliases)
	.globl Route124_Text_LilaIntro
Route124_Text_LilaIntro: @ 0x08260374
	.string "カコ『はーあ\pせっかくの うみ なのに\nいっしょに いるのが おとうと なんて……\pあなた きばらしに ポケモン しようか!?{EOS}"
	.if (. - Route124_Text_LilaIntro) > 0x40
	.error "Route124_Text_LilaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_LilaIntro) < 0x40
	.space 0x40 - (. - Route124_Text_LilaIntro)
	.endif
	@ data/text/trainers.inc:2642 Route124_Text_LilaDefeat (+1 aliases)
	.globl Route124_Text_LilaDefeat
Route124_Text_LilaDefeat: @ 0x082603B4
	.string "カコ『コウの せいで まけたのよ!\nあとで おしおき だかんね!!{EOS}"
	.if (. - Route124_Text_LilaDefeat) > 0x22
	.error "Route124_Text_LilaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_LilaDefeat) < 0x22
	.space 0x22 - (. - Route124_Text_LilaDefeat)
	.endif
	@ data/text/trainers.inc:2645 Route124_Text_LilaPostBattle
	.globl Route124_Text_LilaPostBattle
Route124_Text_LilaPostBattle: @ 0x082603D6
	.string "カコ『はーあ\pとなりに いるのが おとうと じゃなくて\nすてきな かれし だったら いいのに……{EOS}"
	.if (. - Route124_Text_LilaPostBattle) > 0x31
	.error "Route124_Text_LilaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_LilaPostBattle) < 0x31
	.space 0x31 - (. - Route124_Text_LilaPostBattle)
	.endif
	@ data/text/trainers.inc:2648 Route124_Text_LilaNotEnoughMons (+2 aliases)
	.globl gText_Rom_260407
gText_Rom_260407: @ 0x08260407
	.string "カコ『あたしたちと たたかう つもり?\nポケモン 2ひき いないと ダメよ{EOS}"
	.if (. - gText_Rom_260407) > 0x26
	.error "gText_Rom_260407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260407) < 0x26
	.space 0x26 - (. - gText_Rom_260407)
	.endif
	@ data/text/trainers.inc:2651 Route124_Text_RoyIntro (+1 aliases)
	.globl Route124_Text_RoyIntro
Route124_Text_RoyIntro: @ 0x0826042D
	.string "コウ『オレの ねえちゃん\nポケモン つよいぞ!\lまけて ないたり するなよ!{EOS}"
	.if (. - Route124_Text_RoyIntro) > 0x27
	.error "Route124_Text_RoyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_RoyIntro) < 0x27
	.space 0x27 - (. - Route124_Text_RoyIntro)
	.endif
	@ data/text/trainers.inc:2654 Route124_Text_RoyDefeat (+1 aliases)
	.globl Route124_Text_RoyDefeat
Route124_Text_RoyDefeat: @ 0x08260454
	.string "コウ『うわぁ……\nあとで ねえちゃんに おこられる……{EOS}"
	.if (. - Route124_Text_RoyDefeat) > 0x1c
	.error "Route124_Text_RoyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_RoyDefeat) < 0x1c
	.space 0x1c - (. - Route124_Text_RoyDefeat)
	.endif
	@ data/text/trainers.inc:2657 Route124_Text_RoyPostBattle
	.globl Route124_Text_RoyPostBattle
Route124_Text_RoyPostBattle: @ 0x08260470
	.string "コウ『オレの ねえちゃん\nおこると むちゃくちゃ こわいんだ……\pだから こいびと いないんだぜ……{EOS}"
	.if (. - Route124_Text_RoyPostBattle) > 0x33
	.error "Route124_Text_RoyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_RoyPostBattle) < 0x33
	.space 0x33 - (. - Route124_Text_RoyPostBattle)
	.endif
	@ data/text/trainers.inc:2660 Route124_Text_LilaRoyRegister
	.globl Route124_Text_LilaRoyRegister
Route124_Text_LilaRoyRegister: @ 0x082604A3
	.string "コウ『また こんど しょうぶしてよ\n……そのときは てかげんして くれよ!{EOS}"
	.if (. - Route124_Text_LilaRoyRegister) > 0x26
	.error "Route124_Text_LilaRoyRegister may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_LilaRoyRegister) < 0x26
	.space 0x26 - (. - Route124_Text_LilaRoyRegister)
	.endif
	@ data/text/trainers.inc:2663 Route124_Text_RoyNotEnoughMons (+2 aliases)
	.globl gText_Rom_2604C9
gText_Rom_2604C9: @ 0x082604C9
	.string "コウ『オレらと たたかう つもり?\nポケモン 2ひき つれてきなよ!{EOS}"
	.if (. - gText_Rom_2604C9) > 0x23
	.error "gText_Rom_2604C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2604C9) < 0x23
	.space 0x23 - (. - gText_Rom_2604C9)
	.endif
	@ data/text/trainers.inc:2666 Route124_Text_LilaRematchIntro (+1 aliases)
	.globl Route124_Text_LilaRematchIntro
Route124_Text_LilaRematchIntro: @ 0x082604EC
	.string "カコ『はーあ\pせっかくの うみ なのに\nいっしょに いるのが おとうと なんて……\pあら あなた ひさしぶりね\nきばらしに ポケモン しようか!?{EOS}"
	.if (. - Route124_Text_LilaRematchIntro) > 0x4a
	.error "Route124_Text_LilaRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_LilaRematchIntro) < 0x4a
	.space 0x4a - (. - Route124_Text_LilaRematchIntro)
	.endif
	@ data/text/trainers.inc:2669 Route124_Text_LilaRematchDefeat (+1 aliases)
	.globl Route124_Text_LilaRematchDefeat
Route124_Text_LilaRematchDefeat: @ 0x08260536
	.string "カコ『コウったら!\nあんたの せいで また まけたでしょ!\lあとで とっくん だかんね!!{EOS}"
	.if (. - Route124_Text_LilaRematchDefeat) > 0x2e
	.error "Route124_Text_LilaRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_LilaRematchDefeat) < 0x2e
	.space 0x2e - (. - Route124_Text_LilaRematchDefeat)
	.endif
	@ data/text/trainers.inc:2672 Route124_Text_LilaPostRematch
	.globl Route124_Text_LilaPostRematch
Route124_Text_LilaPostRematch: @ 0x08260564
	.string "カコ『はーあ\pあたしに すてきな かれしが いたらなぁ\nすてきな コンビネーションで\lどんな あいてにでも かっちゃうのに{EOS}"
	.if (. - Route124_Text_LilaPostRematch) > 0x3e
	.error "Route124_Text_LilaPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_LilaPostRematch) < 0x3e
	.space 0x3e - (. - Route124_Text_LilaPostRematch)
	.endif
	@ data/text/trainers.inc:2648 Route124_Text_LilaNotEnoughMons (+2 aliases)
	.globl gText_Rom_2605A2
gText_Rom_2605A2: @ 0x082605A2
	.string "カコ『あたしたちと たたかう つもり?\nポケモン 2ひき いないと ダメよ{EOS}"
	.if (. - gText_Rom_2605A2) > 0x26
	.error "gText_Rom_2605A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2605A2) < 0x26
	.space 0x26 - (. - gText_Rom_2605A2)
	.endif
	@ data/text/trainers.inc:2678 Route124_Text_RoyRematchIntro (+1 aliases)
	.globl Route124_Text_RoyRematchIntro
Route124_Text_RoyRematchIntro: @ 0x082605C8
	.string "コウ『まけたら オレが おこられるから\nむちゃくちゃ ほんきで がんばるぞ!{EOS}"
	.if (. - Route124_Text_RoyRematchIntro) > 0x27
	.error "Route124_Text_RoyRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_RoyRematchIntro) < 0x27
	.space 0x27 - (. - Route124_Text_RoyRematchIntro)
	.endif
	@ data/text/trainers.inc:2681 Route124_Text_RoyRematchDefeat (+1 aliases)
	.globl Route124_Text_RoyRematchDefeat
Route124_Text_RoyRematchDefeat: @ 0x082605EF
	.string "コウ『うわぁ……\nまた ねえちゃんに おこられる……{EOS}"
	.if (. - Route124_Text_RoyRematchDefeat) > 0x1b
	.error "Route124_Text_RoyRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_RoyRematchDefeat) < 0x1b
	.space 0x1b - (. - Route124_Text_RoyRematchDefeat)
	.endif
	@ data/text/trainers.inc:2684 Route124_Text_RoyPostRematch
	.globl Route124_Text_RoyPostRematch
Route124_Text_RoyPostRematch: @ 0x0826060A
	.string "コウ『オレの ねえちゃん\nおこると むちゃくちゃ こわいんだ……\pあとで オレと ポケモン\nもうとっくん だよ……{EOS}"
	.if (. - Route124_Text_RoyPostRematch) > 0x3a
	.error "Route124_Text_RoyPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_RoyPostRematch) < 0x3a
	.space 0x3a - (. - Route124_Text_RoyPostRematch)
	.endif
	@ data/text/trainers.inc:2663 Route124_Text_RoyNotEnoughMons (+2 aliases)
	.globl gText_Rom_260644
gText_Rom_260644: @ 0x08260644
	.string "コウ『オレらと たたかう つもり?\nポケモン 2ひき つれてきなよ!{EOS}"
	.if (. - gText_Rom_260644) > 0x23
	.error "gText_Rom_260644 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260644) < 0x23
	.space 0x23 - (. - gText_Rom_260644)
	.endif
	@ data/text/trainers.inc:2690 Route124_Text_DeclanIntro (+1 aliases)
	.globl Route124_Text_DeclanIntro
Route124_Text_DeclanIntro: @ 0x08260667
	.string "こんな きれいな うみで\nひとりで およいでいる オレ!\lはっきりいって かなしすぎます!{EOS}"
	.if (. - Route124_Text_DeclanIntro) > 0x2e
	.error "Route124_Text_DeclanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_DeclanIntro) < 0x2e
	.space 0x2e - (. - Route124_Text_DeclanIntro)
	.endif
	@ data/text/trainers.inc:2693 Route124_Text_DeclanDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route124_Text_DeclanDefeat
Route124_Text_DeclanDefeat: @ 0x08260695
	.string "かなしい\nそらの あおさが かなしい{EOS}"
	.if (. - Route124_Text_DeclanDefeat) != 0x13
	.error "Route124_Text_DeclanDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:2696 Route124_Text_DeclanPostBattle
	.globl Route124_Text_DeclanPostBattle
Route124_Text_DeclanPostBattle: @ 0x082606A8
	.string "ビキニのおねえさんを さそって\nえんえいと しゃれこんで みようかな?{EOS}"
	.if (. - Route124_Text_DeclanPostBattle) > 0x24
	.error "Route124_Text_DeclanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_DeclanPostBattle) < 0x24
	.space 0x24 - (. - Route124_Text_DeclanPostBattle)
	.endif
	@ data/text/trainers.inc:2699 Route124_Text_IsabellaIntro (+1 aliases)
	.globl Route124_Text_IsabellaIntro
Route124_Text_IsabellaIntro: @ 0x082606CC
	.string "なみのりトレーナー なんかに まけないわ!{EOS}"
	.if (. - Route124_Text_IsabellaIntro) > 0x16
	.error "Route124_Text_IsabellaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_IsabellaIntro) < 0x16
	.space 0x16 - (. - Route124_Text_IsabellaIntro)
	.endif
	@ data/text/trainers.inc:2702 Route124_Text_IsabellaDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route124_Text_IsabellaDefeat
Route124_Text_IsabellaDefeat: @ 0x082606E2
	.string "ううっ ポタポタ\nこ これは すいてきよ! ないてないわよ!{EOS}"
	.if (. - Route124_Text_IsabellaDefeat) != 0x1f
	.error "Route124_Text_IsabellaDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:2705 Route124_Text_IsabellaPostBattle
	.globl Route124_Text_IsabellaPostBattle
Route124_Text_IsabellaPostBattle: @ 0x08260701
	.string "きれいな いろの カケラが\nこの あたりで みつかることが あるわよ{EOS}"
	.if (. - Route124_Text_IsabellaPostBattle) > 0x23
	.error "Route124_Text_IsabellaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route124_Text_IsabellaPostBattle) < 0x23
	.space 0x23 - (. - Route124_Text_IsabellaPostBattle)
	.endif
	@ data/text/trainers.inc:2708 Route125_Text_NolenIntro (+1 aliases)
	.globl Route125_Text_NolenIntro
Route125_Text_NolenIntro: @ 0x08260724
	.string "キミが やってくる おとが\nきこえて いたから まってたよ!{EOS}"
	.if (. - Route125_Text_NolenIntro) > 0x1f
	.error "Route125_Text_NolenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_NolenIntro) < 0x1f
	.space 0x1f - (. - Route125_Text_NolenIntro)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:417 MossdeepCity_Gym_Text_SamanthaDefeat (+2 aliases)
	.globl MossdeepCity_Gym_Text_SamanthaDefeat_Copy_EventScripts
MossdeepCity_Gym_Text_SamanthaDefeat_Copy_EventScripts: @ 0x08260743
	.string "まいりました……!{EOS}"
	.if (. - MossdeepCity_Gym_Text_SamanthaDefeat_Copy_EventScripts) > 0xa
	.error "MossdeepCity_Gym_Text_SamanthaDefeat_Copy_EventScripts may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_SamanthaDefeat_Copy_EventScripts) < 0xa
	.space 0xa - (. - MossdeepCity_Gym_Text_SamanthaDefeat_Copy_EventScripts)
	.endif
	@ data/text/trainers.inc:2714 Route125_Text_NolenPostBattle
	.globl Route125_Text_NolenPostBattle
Route125_Text_NolenPostBattle: @ 0x0826074D
	.string "くうきちゅう よりも\nすいちゅうの ほうが おとの つたわる\lスピードが はやいんだよ!{EOS}"
	.if (. - Route125_Text_NolenPostBattle) > 0x2d
	.error "Route125_Text_NolenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_NolenPostBattle) < 0x2d
	.space 0x2d - (. - Route125_Text_NolenPostBattle)
	.endif
	@ data/text/trainers.inc:2717 Route125_Text_StanIntro (+1 aliases)
	.globl Route125_Text_StanIntro
Route125_Text_StanIntro: @ 0x0826077A
	.string "おらーっ!!\nおれの かわいい ポケモンだー!!{EOS}"
	.if (. - Route125_Text_StanIntro) > 0x19
	.error "Route125_Text_StanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_StanIntro) < 0x19
	.space 0x19 - (. - Route125_Text_StanIntro)
	.endif
	@ data/text/trainers.inc:2720 Route125_Text_StanDefeat (+1 aliases)
	.globl Route125_Text_StanDefeat
Route125_Text_StanDefeat: @ 0x08260793
	.string "まいったぜ……!{EOS}"
	.if (. - Route125_Text_StanDefeat) > 0x9
	.error "Route125_Text_StanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_StanDefeat) < 0x9
	.space 0x9 - (. - Route125_Text_StanDefeat)
	.endif
	@ data/text/trainers.inc:2723 Route125_Text_StanPostBattle
	.globl Route125_Text_StanPostBattle
Route125_Text_StanPostBattle: @ 0x0826079C
	.string "タッツーの みりょくに まいって\nおれも およぐように なったんだー!{EOS}"
	.if (. - Route125_Text_StanPostBattle) > 0x24
	.error "Route125_Text_StanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_StanPostBattle) < 0x24
	.space 0x24 - (. - Route125_Text_StanPostBattle)
	.endif
	@ data/text/trainers.inc:2726 Route125_Text_TanyaIntro (+1 aliases)
	.globl Route125_Text_TanyaIntro
Route125_Text_TanyaIntro: @ 0x082607C0
	.string "およぎ つかれちゃった!\nわたしと ひとしょうぶ どう?{EOS}"
	.if (. - Route125_Text_TanyaIntro) > 0x1d
	.error "Route125_Text_TanyaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_TanyaIntro) < 0x1d
	.space 0x1d - (. - Route125_Text_TanyaIntro)
	.endif
	@ data/text/trainers.inc:2729 Route125_Text_TanyaDefeat (+1 aliases)
	.globl Route125_Text_TanyaDefeat
Route125_Text_TanyaDefeat: @ 0x082607DD
	.string "あんた つよすぎ!{EOS}"
	.if (. - Route125_Text_TanyaDefeat) > 0xa
	.error "Route125_Text_TanyaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_TanyaDefeat) < 0xa
	.space 0xa - (. - Route125_Text_TanyaDefeat)
	.endif
	@ data/text/trainers.inc:2732 Route125_Text_TanyaPostBattle
	.globl Route125_Text_TanyaPostBattle
Route125_Text_TanyaPostBattle: @ 0x082607E7
	.string "ふう ふう……\nトクサネシティは どっち だったっけ?{EOS}"
	.if (. - Route125_Text_TanyaPostBattle) > 0x1c
	.error "Route125_Text_TanyaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_TanyaPostBattle) < 0x1c
	.space 0x1c - (. - Route125_Text_TanyaPostBattle)
	.endif
	@ data/text/trainers.inc:2735 Route125_Text_SharonIntro (+1 aliases)
	.globl Route125_Text_SharonIntro
Route125_Text_SharonIntro: @ 0x08260803
	.string "わたしの そだてた みずポケモンと\nたたかって みない?{EOS}"
	.if (. - Route125_Text_SharonIntro) > 0x1d
	.error "Route125_Text_SharonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_SharonIntro) < 0x1d
	.space 0x1d - (. - Route125_Text_SharonIntro)
	.endif
	@ data/text/trainers.inc:2738 Route125_Text_SharonDefeat (+1 aliases)
	.globl Route125_Text_SharonDefeat
Route125_Text_SharonDefeat: @ 0x08260820
	.string "まけた……{EOS}"
	.if (. - Route125_Text_SharonDefeat) > 0x6
	.error "Route125_Text_SharonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_SharonDefeat) < 0x6
	.space 0x6 - (. - Route125_Text_SharonDefeat)
	.endif
	@ data/text/trainers.inc:2741 Route125_Text_SharonPostBattle
	.globl Route125_Text_SharonPostBattle
Route125_Text_SharonPostBattle: @ 0x08260826
	.string "あなたの つよさは ホンモノね!\nおどろいたわ!{EOS}"
	.if (. - Route125_Text_SharonPostBattle) > 0x19
	.error "Route125_Text_SharonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_SharonPostBattle) < 0x19
	.space 0x19 - (. - Route125_Text_SharonPostBattle)
	.endif
	@ data/text/trainers.inc:2744 Route125_Text_ErnestIntro (+1 aliases)
	.globl Route125_Text_ErnestIntro
Route125_Text_ErnestIntro: @ 0x0826083F
	.string "オレさまは たくましい ふなのり!\nせかいの うみを わたりあるく おとこ!{EOS}"
	.if (. - Route125_Text_ErnestIntro) > 0x27
	.error "Route125_Text_ErnestIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestIntro) < 0x27
	.space 0x27 - (. - Route125_Text_ErnestIntro)
	.endif
	@ data/text/trainers.inc:2747 Route125_Text_ErnestDefeat (+1 aliases)
	.globl Route125_Text_ErnestDefeat
Route125_Text_ErnestDefeat: @ 0x08260866
	.string "ぐおおおーっ!\nかてねえ……!{EOS}"
	.if (. - Route125_Text_ErnestDefeat) > 0x10
	.error "Route125_Text_ErnestDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestDefeat) < 0x10
	.space 0x10 - (. - Route125_Text_ErnestDefeat)
	.endif
	@ data/text/trainers.inc:2750 Route125_Text_ErnestPostBattle
	.globl Route125_Text_ErnestPostBattle
Route125_Text_ErnestPostBattle: @ 0x08260876
	.string "あさせのほらあな は じかんによって\nしおが みちたり ひいたり するんだ!\pちなみに みちしお から ひきしお まで\nおよそ 6じかんだぞ! しっていたか?{EOS}"
	.if (. - Route125_Text_ErnestPostBattle) > 0x50
	.error "Route125_Text_ErnestPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestPostBattle) < 0x50
	.space 0x50 - (. - Route125_Text_ErnestPostBattle)
	.endif
	@ data/text/trainers.inc:2753 Route125_Text_ErnestRegister
	.globl Route125_Text_ErnestRegister
Route125_Text_ErnestRegister: @ 0x082608C6
	.string "ポケナビ とうろく して くれたら\nいいことを おしえて やるよ!{EOS}"
	.if (. - Route125_Text_ErnestRegister) > 0x22
	.error "Route125_Text_ErnestRegister may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestRegister) < 0x22
	.space 0x22 - (. - Route125_Text_ErnestRegister)
	.endif
	@ data/text/trainers.inc:2756 Route125_Text_ErnestRematchIntro (+1 aliases)
	.globl Route125_Text_ErnestRematchIntro
Route125_Text_ErnestRematchIntro: @ 0x082608E8
	.string "おっと ここで あったが 100ねんめ!\nとにかく ポケモンしょうぶ だっ!{EOS}"
	.if (. - Route125_Text_ErnestRematchIntro) > 0x27
	.error "Route125_Text_ErnestRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestRematchIntro) < 0x27
	.space 0x27 - (. - Route125_Text_ErnestRematchIntro)
	.endif
	@ data/text/trainers.inc:2759 Route125_Text_ErnestRematchDefeat (+1 aliases)
	.globl Route125_Text_ErnestRematchDefeat
Route125_Text_ErnestRematchDefeat: @ 0x0826090F
	.string "かてねえ\nちっとも かてねえよ!{EOS}"
	.if (. - Route125_Text_ErnestRematchDefeat) > 0x11
	.error "Route125_Text_ErnestRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestRematchDefeat) < 0x11
	.space 0x11 - (. - Route125_Text_ErnestRematchDefeat)
	.endif
	@ data/text/trainers.inc:2762 Route125_Text_ErnestRematchPostBattle
	.globl Route125_Text_ErnestRematchPostBattle
Route125_Text_ErnestRematchPostBattle: @ 0x08260920
	.string "あさせのほらあな……\pしおの みちひきに よって\nいけたり いけなかったり する\lばしょが あるんだよな\pちなみに みちしお から ひきしお まで\nおよそ 6じかんだぞ! おぼえておけよ!{EOS}"
	.if (. - Route125_Text_ErnestRematchPostBattle) > 0x5f
	.error "Route125_Text_ErnestRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestRematchPostBattle) < 0x5f
	.space 0x5f - (. - Route125_Text_ErnestRematchPostBattle)
	.endif
	@ data/text/trainers.inc:2765 Route125_Text_KimIntro (+1 aliases)
	.globl Route125_Text_KimIntro
Route125_Text_KimIntro: @ 0x0826097F
	.string "マホ『あさせのほらあなに\nへんな じいさんが いるんだって!\lあなたも あいにいく とちゅう?{EOS}"
	.if (. - Route125_Text_KimIntro) > 0x30
	.error "Route125_Text_KimIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_KimIntro) < 0x30
	.space 0x30 - (. - Route125_Text_KimIntro)
	.endif
	@ data/text/trainers.inc:2768 Route125_Text_KimDefeat (+1 aliases)
	.globl Route125_Text_KimDefeat
Route125_Text_KimDefeat: @ 0x082609AF
	.string "マホ『かてると おもったのに{EOS}"
	.if (. - Route125_Text_KimDefeat) > 0xf
	.error "Route125_Text_KimDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_KimDefeat) < 0xf
	.space 0xf - (. - Route125_Text_KimDefeat)
	.endif
	@ data/text/trainers.inc:2771 Route125_Text_KimPostBattle
	.globl Route125_Text_KimPostBattle
Route125_Text_KimPostBattle: @ 0x082609BE
	.string "マホ『あさせのほらあなに\nへんな じいさんが いるんでしょ?\pさっ ナホちゃん あいに いくよ!{EOS}"
	.if (. - Route125_Text_KimPostBattle) > 0x31
	.error "Route125_Text_KimPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_KimPostBattle) < 0x31
	.space 0x31 - (. - Route125_Text_KimPostBattle)
	.endif
	@ data/text/trainers.inc:2774 Route125_Text_KimNotEnoughMons (+1 aliases)
	.globl Route125_Text_KimNotEnoughMons
Route125_Text_KimNotEnoughMons: @ 0x082609EF
	.string "マホ『ダメだって!\nポケモン 2ひき いないと ダメだって!{EOS}"
	.if (. - Route125_Text_KimNotEnoughMons) > 0x1f
	.error "Route125_Text_KimNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_KimNotEnoughMons) < 0x1f
	.space 0x1f - (. - Route125_Text_KimNotEnoughMons)
	.endif
	@ data/text/trainers.inc:2777 Route125_Text_IrisIntro (+1 aliases)
	.globl Route125_Text_IrisIntro
Route125_Text_IrisIntro: @ 0x08260A0E
	.string "ナホ『センパイ\nこんな ところに なにが あるんですかぁ?{EOS}"
	.if (. - Route125_Text_IrisIntro) > 0x1e
	.error "Route125_Text_IrisIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_IrisIntro) < 0x1e
	.space 0x1e - (. - Route125_Text_IrisIntro)
	.endif
	@ data/text/trainers.inc:2780 Route125_Text_IrisDefeat (+1 aliases)
	.globl Route125_Text_IrisDefeat
Route125_Text_IrisDefeat: @ 0x08260A2C
	.string "ナホ『とちゅう おしいところ あったのに{EOS}"
	.if (. - Route125_Text_IrisDefeat) > 0x15
	.error "Route125_Text_IrisDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_IrisDefeat) < 0x15
	.space 0x15 - (. - Route125_Text_IrisDefeat)
	.endif
	@ data/text/trainers.inc:2783 Route125_Text_IrisPostBattle
	.globl Route125_Text_IrisPostBattle
Route125_Text_IrisPostBattle: @ 0x08260A41
	.string "ナホ『センパイ…… ほんとに\nあさせのほらあなに はいりますぅ?\lぬれちゃいますよぉ?{EOS}"
	.if (. - Route125_Text_IrisPostBattle) > 0x2c
	.error "Route125_Text_IrisPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_IrisPostBattle) < 0x2c
	.space 0x2c - (. - Route125_Text_IrisPostBattle)
	.endif
	@ data/text/trainers.inc:2786 Route125_Text_IrisNotEnoughMons (+1 aliases)
	.globl Route125_Text_IrisNotEnoughMons
Route125_Text_IrisNotEnoughMons: @ 0x08260A6D
	.string "ナホ『2たい1で しょうぶ なんて\nそんな まね あたしたちに できないわ{EOS}"
	.if (. - Route125_Text_IrisNotEnoughMons) > 0x26
	.error "Route125_Text_IrisNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_IrisNotEnoughMons) < 0x26
	.space 0x26 - (. - Route125_Text_IrisNotEnoughMons)
	.endif
	@ data/text/trainers.inc:2789 Route125_Text_PresleyIntro (+1 aliases)
	.globl Route125_Text_PresleyIntro
Route125_Text_PresleyIntro: @ 0x08260A93
	.string "とりつかいの ボクが\nなぜ うみにまで きているかと いうと……{EOS}"
	.if (. - Route125_Text_PresleyIntro) > 0x21
	.error "Route125_Text_PresleyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_PresleyIntro) < 0x21
	.space 0x21 - (. - Route125_Text_PresleyIntro)
	.endif
	@ data/text/trainers.inc:2792 Route125_Text_PresleyDefeat (+1 aliases)
	.globl Route125_Text_PresleyDefeat
Route125_Text_PresleyDefeat: @ 0x08260AB4
	.string "わかった\nなんで ここに いるか おしえてやるよ{EOS}"
	.if (. - Route125_Text_PresleyDefeat) > 0x19
	.error "Route125_Text_PresleyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_PresleyDefeat) < 0x19
	.space 0x19 - (. - Route125_Text_PresleyDefeat)
	.endif
	@ data/text/trainers.inc:2795 Route125_Text_PresleyPostBattle
	.globl Route125_Text_PresleyPostBattle
Route125_Text_PresleyPostBattle: @ 0x08260ACD
	.string "あきビンに メールを いれて\nさっき うみに ながしたんだ!\pきっと かわいい ビキニの おんなのコが\nひろって くれるぜ!{EOS}"
	.if (. - Route125_Text_PresleyPostBattle) > 0x3f
	.error "Route125_Text_PresleyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_PresleyPostBattle) < 0x3f
	.space 0x3f - (. - Route125_Text_PresleyPostBattle)
	.endif
	@ data/text/trainers.inc:2798 Route125_Text_AuronIntro (+1 aliases)
	.globl Route125_Text_AuronIntro
Route125_Text_AuronIntro: @ 0x08260B0C
	.string "こらーッ! おぬしかッ\nうみに ゴミを すてたのは!{EOS}"
	.if (. - Route125_Text_AuronIntro) > 0x1b
	.error "Route125_Text_AuronIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_AuronIntro) < 0x1b
	.space 0x1b - (. - Route125_Text_AuronIntro)
	.endif
	@ data/text/trainers.inc:2801 Route125_Text_AuronDefeat (+1 aliases)
	.globl Route125_Text_AuronDefeat
Route125_Text_AuronDefeat: @ 0x08260B27
	.string "おぬしでは なかったか{EOS}"
	.if (. - Route125_Text_AuronDefeat) > 0xc
	.error "Route125_Text_AuronDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_AuronDefeat) < 0xc
	.space 0xc - (. - Route125_Text_AuronDefeat)
	.endif
	@ data/text/trainers.inc:2804 Route125_Text_AuronPostBattle
	.globl Route125_Text_AuronPostBattle
Route125_Text_AuronPostBattle: @ 0x08260B33
	.string "さっき この あたりで\nこきたない ビンを ひろったんじゃ!\lうみに ゴミを すてるとは なっとらん!{EOS}"
	.if (. - Route125_Text_AuronPostBattle) > 0x34
	.error "Route125_Text_AuronPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_AuronPostBattle) < 0x34
	.space 0x34 - (. - Route125_Text_AuronPostBattle)
	.endif
	@ data/text/trainers.inc:2807 Route126_Text_BarryIntro (+1 aliases)
	.globl Route126_Text_BarryIntro
Route126_Text_BarryIntro: @ 0x08260B67
	.string "すいえいは ぜんしん うんどう!\nたいりょくが つくぞー!{EOS}"
	.if (. - Route126_Text_BarryIntro) > 0x1e
	.error "Route126_Text_BarryIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_BarryIntro) < 0x1e
	.space 0x1e - (. - Route126_Text_BarryIntro)
	.endif
	@ data/text/trainers.inc:2810 Route126_Text_BarryDefeat (+1 aliases)
	.globl Route126_Text_BarryDefeat
Route126_Text_BarryDefeat: @ 0x08260B85
	.string "まけましたーっ!{EOS}"
	.if (. - Route126_Text_BarryDefeat) > 0x9
	.error "Route126_Text_BarryDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_BarryDefeat) < 0x9
	.space 0x9 - (. - Route126_Text_BarryDefeat)
	.endif
	@ data/text/trainers.inc:2813 Route126_Text_BarryPostBattle
	.globl Route126_Text_BarryPostBattle
Route126_Text_BarryPostBattle: @ 0x08260B8E
	.string "まいにち およいでる おかげで\nみよ! この きんにくっ!!{EOS}"
	.if (. - Route126_Text_BarryPostBattle) > 0x1f
	.error "Route126_Text_BarryPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_BarryPostBattle) < 0x1f
	.space 0x1f - (. - Route126_Text_BarryPostBattle)
	.endif
	@ data/text/trainers.inc:2816 Route126_Text_DeanIntro (+1 aliases)
	.globl Route126_Text_DeanIntro
Route126_Text_DeanIntro: @ 0x08260BAD
	.string "この しろく そびえる いわやまが\nルネシティ なんだぜー!{EOS}"
	.if (. - Route126_Text_DeanIntro) > 0x1f
	.error "Route126_Text_DeanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_DeanIntro) < 0x1f
	.space 0x1f - (. - Route126_Text_DeanIntro)
	.endif
	@ data/text/trainers.inc:2819 Route126_Text_DeanDefeat (+1 aliases)
	.globl Route126_Text_DeanDefeat
Route126_Text_DeanDefeat: @ 0x08260BCC
	.string "やられたか!?{EOS}"
	.if (. - Route126_Text_DeanDefeat) > 0x8
	.error "Route126_Text_DeanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_DeanDefeat) < 0x8
	.space 0x8 - (. - Route126_Text_DeanDefeat)
	.endif
	@ data/text/trainers.inc:2822 Route126_Text_DeanPostBattle
	.globl Route126_Text_DeanPostBattle
Route126_Text_DeanPostBattle: @ 0x08260BD4
	.string "ルネシティの いりぐちが みつからん!\nどこに あるんだ?{EOS}"
	.if (. - Route126_Text_DeanPostBattle) > 0x1e
	.error "Route126_Text_DeanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_DeanPostBattle) < 0x1e
	.space 0x1e - (. - Route126_Text_DeanPostBattle)
	.endif
	@ data/text/trainers.inc:2825 Route126_Text_NikkiIntro (+1 aliases)
	.globl Route126_Text_NikkiIntro
Route126_Text_NikkiIntro: @ 0x08260BF2
	.string "おほほほっ\nわたしは にんぎょ!{EOS}"
	.if (. - Route126_Text_NikkiIntro) > 0x11
	.error "Route126_Text_NikkiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_NikkiIntro) < 0x11
	.space 0x11 - (. - Route126_Text_NikkiIntro)
	.endif
	@ data/text/trainers.inc:2828 Route126_Text_NikkiDefeat (+1 aliases)
	.globl Route126_Text_NikkiDefeat
Route126_Text_NikkiDefeat: @ 0x08260C03
	.string "アワと なって きえていく……\nぶくぶくぶく……{EOS}"
	.if (. - Route126_Text_NikkiDefeat) > 0x19
	.error "Route126_Text_NikkiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_NikkiDefeat) < 0x19
	.space 0x19 - (. - Route126_Text_NikkiDefeat)
	.endif
	@ data/text/trainers.inc:2831 Route126_Text_NikkiPostBattle
	.globl Route126_Text_NikkiPostBattle
Route126_Text_NikkiPostBattle: @ 0x08260C1C
	.string "こっぴどく やられちゃったわ……\nアワくって にげだしたい きぶん……{EOS}"
	.if (. - Route126_Text_NikkiPostBattle) > 0x24
	.error "Route126_Text_NikkiPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_NikkiPostBattle) < 0x24
	.space 0x24 - (. - Route126_Text_NikkiPostBattle)
	.endif
	@ data/text/trainers.inc:2834 Route126_Text_BrendaIntro (+1 aliases)
	.globl Route126_Text_BrendaIntro
Route126_Text_BrendaIntro: @ 0x08260C40
	.string "ねえ ねえ\nおねえさんと しょうぶ しない?{EOS}"
	.if (. - Route126_Text_BrendaIntro) > 0x17
	.error "Route126_Text_BrendaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_BrendaIntro) < 0x17
	.space 0x17 - (. - Route126_Text_BrendaIntro)
	.endif
	@ data/text/trainers.inc:2837 Route126_Text_BrendaDefeat (+1 aliases)
	.globl Route126_Text_BrendaDefeat
Route126_Text_BrendaDefeat: @ 0x08260C57
	.string "いやーんっ!{EOS}"
	.if (. - Route126_Text_BrendaDefeat) > 0x7
	.error "Route126_Text_BrendaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_BrendaDefeat) < 0x7
	.space 0x7 - (. - Route126_Text_BrendaDefeat)
	.endif
	@ data/text/trainers.inc:2840 Route126_Text_BrendaPostBattle
	.globl Route126_Text_BrendaPostBattle
Route126_Text_BrendaPostBattle: @ 0x08260C5E
	.string "こうして ポケモンと\nうみで あそぶのが だいすきなの!{EOS}"
	.if (. - Route126_Text_BrendaPostBattle) > 0x1d
	.error "Route126_Text_BrendaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_BrendaPostBattle) < 0x1d
	.space 0x1d - (. - Route126_Text_BrendaPostBattle)
	.endif
	@ data/text/trainers.inc:2843 Route126_Text_PabloIntro (+1 aliases)
	.globl Route126_Text_PabloIntro
Route126_Text_PabloIntro: @ 0x08260C7B
	.string "からておう より たくましい\nこの にくたいびを みよ!{EOS}"
	.if (. - Route126_Text_PabloIntro) > 0x1d
	.error "Route126_Text_PabloIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloIntro) < 0x1d
	.space 0x1d - (. - Route126_Text_PabloIntro)
	.endif
	@ data/text/trainers.inc:2846 Route126_Text_PabloDefeat (+1 aliases)
	.globl Route126_Text_PabloDefeat
Route126_Text_PabloDefeat: @ 0x08260C98
	.string "おわっ つよいな\nいいね! いいね!{EOS}"
	.if (. - Route126_Text_PabloDefeat) > 0x13
	.error "Route126_Text_PabloDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloDefeat) < 0x13
	.space 0x13 - (. - Route126_Text_PabloDefeat)
	.endif
	@ data/text/trainers.inc:2849 Route126_Text_PabloPostBattle
	.globl Route126_Text_PabloPostBattle
Route126_Text_PabloPostBattle: @ 0x08260CAB
	.string "まけて いい しげきに なったよ!\nからだも ポケモンも もっと きたえるぜ{EOS}"
	.if (. - Route126_Text_PabloPostBattle) > 0x27
	.error "Route126_Text_PabloPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloPostBattle) < 0x27
	.space 0x27 - (. - Route126_Text_PabloPostBattle)
	.endif
	@ data/text/trainers.inc:2852 Route126_Text_PabloRegister
	.globl Route126_Text_PabloRegister
Route126_Text_PabloRegister: @ 0x08260CD2
	.string "いやー いいね!\nぜひとも おちかづきに なっておきたいね!{EOS}"
	.if (. - Route126_Text_PabloRegister) > 0x1f
	.error "Route126_Text_PabloRegister may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloRegister) < 0x1f
	.space 0x1f - (. - Route126_Text_PabloRegister)
	.endif
	@ data/text/trainers.inc:2855 Route126_Text_PabloRematchIntro (+1 aliases)
	.globl Route126_Text_PabloRematchIntro
Route126_Text_PabloRematchIntro: @ 0x08260CF1
	.string "ビキニのおねえさん より うつくしい\nこの にくたいびを みよ!{EOS}"
	.if (. - Route126_Text_PabloRematchIntro) > 0x21
	.error "Route126_Text_PabloRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloRematchIntro) < 0x21
	.space 0x21 - (. - Route126_Text_PabloRematchIntro)
	.endif
	@ data/text/trainers.inc:2858 Route126_Text_PabloRematchDefeat (+1 aliases)
	.globl Route126_Text_PabloRematchDefeat
Route126_Text_PabloRematchDefeat: @ 0x08260D12
	.string "おわっ ほんと つよいな\nいいね! いいね!{EOS}"
	.if (. - Route126_Text_PabloRematchDefeat) > 0x17
	.error "Route126_Text_PabloRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloRematchDefeat) < 0x17
	.space 0x17 - (. - Route126_Text_PabloRematchDefeat)
	.endif
	@ data/text/trainers.inc:2861 Route126_Text_PabloPostRematch
	.globl Route126_Text_PabloPostRematch
Route126_Text_PabloPostRematch: @ 0x08260D29
	.string "よし もっともっと きたえるぜ!\nきみは いい しげきに なるから\lまた きてくれよ!{EOS}"
	.if (. - Route126_Text_PabloPostRematch) > 0x2c
	.error "Route126_Text_PabloPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloPostRematch) < 0x2c
	.space 0x2c - (. - Route126_Text_PabloPostRematch)
	.endif
	@ data/text/trainers.inc:2864 Route126_Text_LeonardoIntro (+1 aliases)
	.globl Route126_Text_LeonardoIntro
Route126_Text_LeonardoIntro: @ 0x08260D55
	.string "きょねん まで およげなかった オレも\nかいパンやろうに なれたんだ\lいまなら なんでも できる きがする!{EOS}"
	.if (. - Route126_Text_LeonardoIntro) > 0x37
	.error "Route126_Text_LeonardoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_LeonardoIntro) < 0x37
	.space 0x37 - (. - Route126_Text_LeonardoIntro)
	.endif
	@ data/text/trainers.inc:2867 Route126_Text_LeonardoDefeat (+1 aliases)
	.globl Route126_Text_LeonardoDefeat
Route126_Text_LeonardoDefeat: @ 0x08260D8C
	.string "てへっ よくばりすぎちゃ ダメだよな{EOS}"
	.if (. - Route126_Text_LeonardoDefeat) > 0x13
	.error "Route126_Text_LeonardoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_LeonardoDefeat) < 0x13
	.space 0x13 - (. - Route126_Text_LeonardoDefeat)
	.endif
	@ data/text/trainers.inc:2870 Route126_Text_LeonardoPostBattle
	.globl Route126_Text_LeonardoPostBattle
Route126_Text_LeonardoPostBattle: @ 0x08260D9F
	.string "なんでも れんしゅう すれば\nうまく なるんだ!\pキミも わかい うちから\nいろいろ やっておけよ!{EOS}"
	.if (. - Route126_Text_LeonardoPostBattle) > 0x33
	.error "Route126_Text_LeonardoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_LeonardoPostBattle) < 0x33
	.space 0x33 - (. - Route126_Text_LeonardoPostBattle)
	.endif
	@ data/text/trainers.inc:2873 Route126_Text_IsobelIntro (+1 aliases)
	.globl Route126_Text_IsobelIntro
Route126_Text_IsobelIntro: @ 0x08260DD2
	.string "はなに かいすいが はいると\nすっごく つらいよね?{EOS}"
	.if (. - Route126_Text_IsobelIntro) > 0x1b
	.error "Route126_Text_IsobelIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_IsobelIntro) < 0x1b
	.space 0x1b - (. - Route126_Text_IsobelIntro)
	.endif
	@ data/text/trainers.inc:2876 Route126_Text_IsobelDefeat (+1 aliases)
	.globl Route126_Text_IsobelDefeat
Route126_Text_IsobelDefeat: @ 0x08260DED
	.string "ああっ!\nく くやし……ごほッ!{EOS}"
	.if (. - Route126_Text_IsobelDefeat) > 0x11
	.error "Route126_Text_IsobelDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_IsobelDefeat) < 0x11
	.space 0x11 - (. - Route126_Text_IsobelDefeat)
	.endif
	@ data/text/trainers.inc:2879 Route126_Text_IsobelPostBattle
	.globl Route126_Text_IsobelPostBattle
Route126_Text_IsobelPostBattle: @ 0x08260DFE
	.string "かいすいを ちょっと のんじゃった……!\nからいーッ にがいーッ!{EOS}"
	.if (. - Route126_Text_IsobelPostBattle) > 0x22
	.error "Route126_Text_IsobelPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_IsobelPostBattle) < 0x22
	.space 0x22 - (. - Route126_Text_IsobelPostBattle)
	.endif
	@ data/text/trainers.inc:2882 Route126_Text_SiennaIntro (+1 aliases)
	.globl Route126_Text_SiennaIntro
Route126_Text_SiennaIntro: @ 0x08260E20
	.string "わたしの ハートを ぶつけるわ!{EOS}"
	.if (. - Route126_Text_SiennaIntro) > 0x11
	.error "Route126_Text_SiennaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_SiennaIntro) < 0x11
	.space 0x11 - (. - Route126_Text_SiennaIntro)
	.endif
	@ data/text/trainers.inc:2885 Route126_Text_SiennaDefeat (+1 aliases)
	.globl Route126_Text_SiennaDefeat
Route126_Text_SiennaDefeat: @ 0x08260E31
	.string "ハートで まけたわ!{EOS}"
	.if (. - Route126_Text_SiennaDefeat) > 0xb
	.error "Route126_Text_SiennaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_SiennaDefeat) < 0xb
	.space 0xb - (. - Route126_Text_SiennaDefeat)
	.endif
	@ data/text/trainers.inc:2888 Route126_Text_SiennaPostBattle
	.globl Route126_Text_SiennaPostBattle
Route126_Text_SiennaPostBattle: @ 0x08260E3C
	.string "あつく なっちゃった\nちょっと もぐって こようかな{EOS}"
	.if (. - Route126_Text_SiennaPostBattle) > 0x1b
	.error "Route126_Text_SiennaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_SiennaPostBattle) < 0x1b
	.space 0x1b - (. - Route126_Text_SiennaPostBattle)
	.endif
	@ data/text/trainers.inc:2891 Route127_Text_CamdenIntro (+1 aliases)
	.globl Route127_Text_CamdenIntro
Route127_Text_CamdenIntro: @ 0x08260E57
	.string "オレと しょうぶ したいって\nかおに かいてあるぜ!{EOS}"
	.if (. - Route127_Text_CamdenIntro) > 0x1b
	.error "Route127_Text_CamdenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_CamdenIntro) < 0x1b
	.space 0x1b - (. - Route127_Text_CamdenIntro)
	.endif
	@ data/text/trainers.inc:2894 Route127_Text_CamdenDefeat (+1 aliases)
	.globl Route127_Text_CamdenDefeat
Route127_Text_CamdenDefeat: @ 0x08260E72
	.string "あわわわわ……{EOS}"
	.if (. - Route127_Text_CamdenDefeat) > 0x8
	.error "Route127_Text_CamdenDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_CamdenDefeat) < 0x8
	.space 0x8 - (. - Route127_Text_CamdenDefeat)
	.endif
	@ data/text/trainers.inc:2897 Route127_Text_CamdenPostBattle
	.globl Route127_Text_CamdenPostBattle
Route127_Text_CamdenPostBattle: @ 0x08260E7A
	.string "いい しょうぶを した あとは\nすがすがしい きもちに なるなー{EOS}"
	.if (. - Route127_Text_CamdenPostBattle) > 0x21
	.error "Route127_Text_CamdenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_CamdenPostBattle) < 0x21
	.space 0x21 - (. - Route127_Text_CamdenPostBattle)
	.endif
	@ data/text/trainers.inc:2900 Route127_Text_DonnyIntro (+1 aliases)
	.globl Route127_Text_DonnyIntro
Route127_Text_DonnyIntro: @ 0x08260E9B
	.string "あいつには まけたくない って\nライバル きみには いるの?{EOS}"
	.if (. - Route127_Text_DonnyIntro) > 0x1f
	.error "Route127_Text_DonnyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_DonnyIntro) < 0x1f
	.space 0x1f - (. - Route127_Text_DonnyIntro)
	.endif
	@ data/text/trainers.inc:2903 Route127_Text_DonnyDefeat (+1 aliases)
	.globl Route127_Text_DonnyDefeat
Route127_Text_DonnyDefeat: @ 0x08260EBA
	.string "あぁ すっごく くやしい!{EOS}"
	.if (. - Route127_Text_DonnyDefeat) > 0xe
	.error "Route127_Text_DonnyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_DonnyDefeat) < 0xe
	.space 0xe - (. - Route127_Text_DonnyDefeat)
	.endif
	@ data/text/trainers.inc:2906 Route127_Text_DonnyPostBattle
	.globl Route127_Text_DonnyPostBattle
Route127_Text_DonnyPostBattle: @ 0x08260EC8
	.string "ライバルが いると\nつよくなりたい って きもちが\lどんどん あふれて くるよね{EOS}"
	.if (. - Route127_Text_DonnyPostBattle) > 0x29
	.error "Route127_Text_DonnyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_DonnyPostBattle) < 0x29
	.space 0x29 - (. - Route127_Text_DonnyPostBattle)
	.endif
	@ data/text/trainers.inc:2909 Route127_Text_JonahIntro (+1 aliases)
	.globl Route127_Text_JonahIntro
Route127_Text_JonahIntro: @ 0x08260EF1
	.string "つりを することで てにいれた\nおだやかな こころ……\lそれを みせて あげましょう……{EOS}"
	.if (. - Route127_Text_JonahIntro) > 0x2d
	.error "Route127_Text_JonahIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_JonahIntro) < 0x2d
	.space 0x2d - (. - Route127_Text_JonahIntro)
	.endif
	@ data/text/trainers.inc:2912 Route127_Text_JonahDefeat (+1 aliases)
	.globl Route127_Text_JonahDefeat
Route127_Text_JonahDefeat: @ 0x08260F1E
	.string "…… まけても\nこころは おだやかです{EOS}"
	.if (. - Route127_Text_JonahDefeat) > 0x14
	.error "Route127_Text_JonahDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_JonahDefeat) < 0x14
	.space 0x14 - (. - Route127_Text_JonahDefeat)
	.endif
	@ data/text/trainers.inc:2915 Route127_Text_JonahPostBattle
	.globl Route127_Text_JonahPostBattle
Route127_Text_JonahPostBattle: @ 0x08260F32
	.string "つれなくても かまいません\nずっと いとを たらしているのです……{EOS}"
	.if (. - Route127_Text_JonahPostBattle) > 0x22
	.error "Route127_Text_JonahPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_JonahPostBattle) < 0x22
	.space 0x22 - (. - Route127_Text_JonahPostBattle)
	.endif
	@ data/text/trainers.inc:2918 Route127_Text_HenryIntro (+1 aliases)
	.globl Route127_Text_HenryIntro
Route127_Text_HenryIntro: @ 0x08260F54
	.string "おっと!? なみのり している\nポケモンを つりあげて しまったか?{EOS}"
	.if (. - Route127_Text_HenryIntro) > 0x23
	.error "Route127_Text_HenryIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_HenryIntro) < 0x23
	.space 0x23 - (. - Route127_Text_HenryIntro)
	.endif
	@ data/text/trainers.inc:2921 Route127_Text_HenryDefeat (+1 aliases)
	.globl Route127_Text_HenryDefeat
Route127_Text_HenryDefeat: @ 0x08260F77
	.string "かなわん!{EOS}"
	.if (. - Route127_Text_HenryDefeat) > 0x6
	.error "Route127_Text_HenryDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_HenryDefeat) < 0x6
	.space 0x6 - (. - Route127_Text_HenryDefeat)
	.endif
	@ data/text/trainers.inc:2924 Route127_Text_HenryPostBattle
	.globl Route127_Text_HenryPostBattle
Route127_Text_HenryPostBattle: @ 0x08260F7D
	.string "きみの ポケモン つよそうだから\nつりあげたら かなりの てごたえ だろうな!{EOS}"
	.if (. - Route127_Text_HenryPostBattle) > 0x28
	.error "Route127_Text_HenryPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_HenryPostBattle) < 0x28
	.space 0x28 - (. - Route127_Text_HenryPostBattle)
	.endif
	@ data/text/trainers.inc:2927 Route127_Text_RogerIntro (+1 aliases)
	.globl Route127_Text_RogerIntro
Route127_Text_RogerIntro: @ 0x08260FA5
	.string "よーし!\nポケモンずきと つりずきの たいけつだ!{EOS}"
	.if (. - Route127_Text_RogerIntro) > 0x1a
	.error "Route127_Text_RogerIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_RogerIntro) < 0x1a
	.space 0x1a - (. - Route127_Text_RogerIntro)
	.endif
	@ data/text/trainers.inc:2930 Route127_Text_RogerDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route127_Text_RogerDefeat
Route127_Text_RogerDefeat: @ 0x08260FBF
	.string "わあ! いとが からまった!\nまさに あとの まつり{EOS}"
	.if (. - Route127_Text_RogerDefeat) != 0x1b
	.error "Route127_Text_RogerDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:2933 Route127_Text_RogerPostBattle
	.globl Route127_Text_RogerPostBattle
Route127_Text_RogerPostBattle: @ 0x08260FDA
	.string "つりでは いとが からまることを\nマツリ と いうんだよ{EOS}"
	.if (. - Route127_Text_RogerPostBattle) > 0x1d
	.error "Route127_Text_RogerPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_RogerPostBattle) < 0x1d
	.space 0x1d - (. - Route127_Text_RogerPostBattle)
	.endif
	@ data/text/trainers.inc:2936 Route127_Text_AidanIntro (+1 aliases)
	.globl Route127_Text_AidanIntro
Route127_Text_AidanIntro: @ 0x08260FF7
	.string "とりポケモンは すごく めが いい!\nおおぞら たかくから えものを みつけるぜ!{EOS}"
	.if (. - Route127_Text_AidanIntro) > 0x2a
	.error "Route127_Text_AidanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_AidanIntro) < 0x2a
	.space 0x2a - (. - Route127_Text_AidanIntro)
	.endif
	@ data/text/trainers.inc:2939 Route127_Text_AidanDefeat (+1 aliases)
	.globl Route127_Text_AidanDefeat
Route127_Text_AidanDefeat: @ 0x08261021
	.string "ふぅ…… まいったぜ{EOS}"
	.if (. - Route127_Text_AidanDefeat) > 0xb
	.error "Route127_Text_AidanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_AidanDefeat) < 0xb
	.space 0xb - (. - Route127_Text_AidanDefeat)
	.endif
	@ data/text/trainers.inc:2942 Route127_Text_AidanPostBattle
	.globl Route127_Text_AidanPostBattle
Route127_Text_AidanPostBattle: @ 0x0826102C
	.string "この ちかくには いっぱい\nもぐれそうな ところが あるな!\pそらから みてると\nうみの いろが ちがうから よくわかる!{EOS}"
	.if (. - Route127_Text_AidanPostBattle) > 0x3e
	.error "Route127_Text_AidanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_AidanPostBattle) < 0x3e
	.space 0x3e - (. - Route127_Text_AidanPostBattle)
	.endif
	@ data/text/trainers.inc:2945 Route127_Text_KojiIntro (+1 aliases)
	.globl Route127_Text_KojiIntro
Route127_Text_KojiIntro: @ 0x0826106A
	.string "はだしで かけまわると\nあしの うらが きたえられるぞ!{EOS}"
	.if (. - Route127_Text_KojiIntro) > 0x1d
	.error "Route127_Text_KojiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiIntro) < 0x1d
	.space 0x1d - (. - Route127_Text_KojiIntro)
	.endif
	@ data/text/trainers.inc:2948 Route127_Text_KojiDefeat (+1 aliases)
	.globl Route127_Text_KojiDefeat
Route127_Text_KojiDefeat: @ 0x08261087
	.string "いってェ!\nツメの あいだに こいしが……{EOS}"
	.if (. - Route127_Text_KojiDefeat) > 0x16
	.error "Route127_Text_KojiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiDefeat) < 0x16
	.space 0x16 - (. - Route127_Text_KojiDefeat)
	.endif
	@ data/text/trainers.inc:2951 Route127_Text_KojiPostBattle
	.globl Route127_Text_KojiPostBattle
Route127_Text_KojiPostBattle: @ 0x0826109D
	.string "はだし さいこう!\nだが おまえの その ズックも いいな!{EOS}"
	.if (. - Route127_Text_KojiPostBattle) > 0x1f
	.error "Route127_Text_KojiPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiPostBattle) < 0x1f
	.space 0x1f - (. - Route127_Text_KojiPostBattle)
	.endif
	@ data/text/trainers.inc:2954 Route127_Text_KojiRegister
	.globl Route127_Text_KojiRegister
Route127_Text_KojiRegister: @ 0x082610BC
	.string "おれに かったり するやつは こうだーっ!\nまた よろしくおねがいします!{EOS}"
	.if (. - Route127_Text_KojiRegister) > 0x26
	.error "Route127_Text_KojiRegister may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiRegister) < 0x26
	.space 0x26 - (. - Route127_Text_KojiRegister)
	.endif
	@ data/text/trainers.inc:2957 Route127_Text_KojiRematchIntro (+1 aliases)
	.globl Route127_Text_KojiRematchIntro
Route127_Text_KojiRematchIntro: @ 0x082610E2
	.string "きょうも はだしで かけまわって\nあしの うらを きたえまくりだ!{EOS}"
	.if (. - Route127_Text_KojiRematchIntro) > 0x22
	.error "Route127_Text_KojiRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiRematchIntro) < 0x22
	.space 0x22 - (. - Route127_Text_KojiRematchIntro)
	.endif
	@ data/text/trainers.inc:2960 Route127_Text_KojiRematchDefeat (+1 aliases)
	.globl Route127_Text_KojiRematchDefeat
Route127_Text_KojiRematchDefeat: @ 0x08261104
	.string "いってェ!\nつちふまずに ジャリが……{EOS}"
	.if (. - Route127_Text_KojiRematchDefeat) > 0x14
	.error "Route127_Text_KojiRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiRematchDefeat) < 0x14
	.space 0x14 - (. - Route127_Text_KojiRematchDefeat)
	.endif
	@ data/text/trainers.inc:2963 Route127_Text_KojiPostRematch
	.globl Route127_Text_KojiPostRematch
Route127_Text_KojiPostRematch: @ 0x08261118
	.string "しばらく おまえの ズックと\nおれの はだし こうかん してみないか?{EOS}"
	.if (. - Route127_Text_KojiPostRematch) > 0x24
	.error "Route127_Text_KojiPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiPostRematch) < 0x24
	.space 0x24 - (. - Route127_Text_KojiPostRematch)
	.endif
	@ data/text/trainers.inc:2966 Route127_Text_AthenaIntro (+1 aliases)
	.globl Route127_Text_AthenaIntro
Route127_Text_AthenaIntro: @ 0x0826113C
	.string "じっくり ゆっくり しょうぶしましょう\nよろしくね!{EOS}"
	.if (. - Route127_Text_AthenaIntro) > 0x1b
	.error "Route127_Text_AthenaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_AthenaIntro) < 0x1b
	.space 0x1b - (. - Route127_Text_AthenaIntro)
	.endif
	@ data/text/trainers.inc:2969 Route127_Text_AthenaDefeat (+1 aliases)
	.globl Route127_Text_AthenaDefeat
Route127_Text_AthenaDefeat: @ 0x08261157
	.string "せんりゃくを ねる ひまも なかったわ{EOS}"
	.if (. - Route127_Text_AthenaDefeat) > 0x14
	.error "Route127_Text_AthenaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_AthenaDefeat) < 0x14
	.space 0x14 - (. - Route127_Text_AthenaDefeat)
	.endif
	@ data/text/trainers.inc:2972 Route127_Text_AthenaPostBattle
	.globl Route127_Text_AthenaPostBattle
Route127_Text_AthenaPostBattle: @ 0x0826116B
	.string "あおい いろに かこまれていると\nじかんが すぎるのが\lゆっくりに かんじられる のよ{EOS}"
	.if (. - Route127_Text_AthenaPostBattle) > 0x2c
	.error "Route127_Text_AthenaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_AthenaPostBattle) < 0x2c
	.space 0x2c - (. - Route127_Text_AthenaPostBattle)
	.endif
	@ data/text/trainers.inc:2975 Route128_Text_IsaiahIntro (+1 aliases)
	.globl Route128_Text_IsaiahIntro
Route128_Text_IsaiahIntro: @ 0x08261197
	.string "サイユウシティは まだ とおい……{EOS}"
	.if (. - Route128_Text_IsaiahIntro) > 0x12
	.error "Route128_Text_IsaiahIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahIntro) < 0x12
	.space 0x12 - (. - Route128_Text_IsaiahIntro)
	.endif
	@ data/text/trainers.inc:2978 Route128_Text_IsaiahDefeat (+1 aliases)
	.globl Route128_Text_IsaiahDefeat
Route128_Text_IsaiahDefeat: @ 0x082611A9
	.string "ボクの はつしょうりも とおい……{EOS}"
	.if (. - Route128_Text_IsaiahDefeat) > 0x12
	.error "Route128_Text_IsaiahDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahDefeat) < 0x12
	.space 0x12 - (. - Route128_Text_IsaiahDefeat)
	.endif
	@ data/text/trainers.inc:2981 Route128_Text_IsaiahPostBattle
	.globl Route128_Text_IsaiahPostBattle
Route128_Text_IsaiahPostBattle: @ 0x082611BB
	.string "まけつづけている じんせい ですが\nけっして あきらめませんよ……!{EOS}"
	.if (. - Route128_Text_IsaiahPostBattle) > 0x23
	.error "Route128_Text_IsaiahPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahPostBattle) < 0x23
	.space 0x23 - (. - Route128_Text_IsaiahPostBattle)
	.endif
	@ data/text/trainers.inc:2984 Route128_Text_IsaiahRegister
	.globl Route128_Text_IsaiahRegister
Route128_Text_IsaiahRegister: @ 0x082611DE
	.string "こんな ボク ですけど\nいつかは かてると おもうんです\lポケナビの とうろくを してください……!{EOS}"
	.if (. - Route128_Text_IsaiahRegister) > 0x33
	.error "Route128_Text_IsaiahRegister may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahRegister) < 0x33
	.space 0x33 - (. - Route128_Text_IsaiahRegister)
	.endif
	@ data/text/trainers.inc:2987 Route128_Text_IsaiahRematchIntro (+1 aliases)
	.globl Route128_Text_IsaiahRematchIntro
Route128_Text_IsaiahRematchIntro: @ 0x08261211
	.string "まだまだ げんき ですからね\nサイユウシティ めざして およぎますよ!{EOS}"
	.if (. - Route128_Text_IsaiahRematchIntro) > 0x24
	.error "Route128_Text_IsaiahRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahRematchIntro) < 0x24
	.space 0x24 - (. - Route128_Text_IsaiahRematchIntro)
	.endif
	@ data/text/trainers.inc:2990 Route128_Text_IsaiahRematchDefeat (+1 aliases)
	.globl Route128_Text_IsaiahRematchDefeat
Route128_Text_IsaiahRematchDefeat: @ 0x08261235
	.string "また はつしょうり ならず……{EOS}"
	.if (. - Route128_Text_IsaiahRematchDefeat) > 0x10
	.error "Route128_Text_IsaiahRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahRematchDefeat) < 0x10
	.space 0x10 - (. - Route128_Text_IsaiahRematchDefeat)
	.endif
	@ data/text/trainers.inc:2993 Route128_Text_IsaiahPostRematch
	.globl Route128_Text_IsaiahPostRematch
Route128_Text_IsaiahPostRematch: @ 0x08261245
	.string "あきらめなきゃ いつかは かてる\nサイユウシティにも たどりつく……!{EOS}"
	.if (. - Route128_Text_IsaiahPostRematch) > 0x24
	.error "Route128_Text_IsaiahPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahPostRematch) < 0x24
	.space 0x24 - (. - Route128_Text_IsaiahPostRematch)
	.endif
	@ data/text/trainers.inc:2996 Route128_Text_KatelynIntro (+1 aliases)
	.globl Route128_Text_KatelynIntro
Route128_Text_KatelynIntro: @ 0x08261269
	.string "トライアスロンは\nすいえい じてんしゃ マラソン\p3つの しゅもくを つづけて こなす\nかこくな レースなの!{EOS}"
	.if (. - Route128_Text_KatelynIntro) > 0x38
	.error "Route128_Text_KatelynIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynIntro) < 0x38
	.space 0x38 - (. - Route128_Text_KatelynIntro)
	.endif
	@ data/text/trainers.inc:2999 Route128_Text_KatelynDefeat (+1 aliases)
	.globl Route128_Text_KatelynDefeat
Route128_Text_KatelynDefeat: @ 0x082612A1
	.string "ポケモンしょうぶも かこく よね……{EOS}"
	.if (. - Route128_Text_KatelynDefeat) > 0x13
	.error "Route128_Text_KatelynDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynDefeat) < 0x13
	.space 0x13 - (. - Route128_Text_KatelynDefeat)
	.endif
	@ data/text/trainers.inc:3002 Route128_Text_KatelynPostBattle
	.globl Route128_Text_KatelynPostBattle
Route128_Text_KatelynPostBattle: @ 0x082612B4
	.string "つぎは じてんしゃ だけど……\nくじけそうだわ……{EOS}"
	.if (. - Route128_Text_KatelynPostBattle) > 0x1a
	.error "Route128_Text_KatelynPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynPostBattle) < 0x1a
	.space 0x1a - (. - Route128_Text_KatelynPostBattle)
	.endif
	@ data/text/trainers.inc:3005 Route128_Text_KatelynRegister
	.globl Route128_Text_KatelynRegister
Route128_Text_KatelynRegister: @ 0x082612CE
	.string "まあ せっかく だし\nまたいつか しょうぶを しましょうよ!{EOS}"
	.if (. - Route128_Text_KatelynRegister) > 0x1f
	.error "Route128_Text_KatelynRegister may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynRegister) < 0x1f
	.space 0x1f - (. - Route128_Text_KatelynRegister)
	.endif
	@ data/text/trainers.inc:3008 Route128_Text_KatelynRematchIntro (+1 aliases)
	.globl Route128_Text_KatelynRematchIntro
Route128_Text_KatelynRematchIntro: @ 0x082612ED
	.string "トライアスロンも ながいけど\nポケモン チャンピオンを めざすのも\lながい みちのり なのね!{EOS}"
	.if (. - Route128_Text_KatelynRematchIntro) > 0x30
	.error "Route128_Text_KatelynRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynRematchIntro) < 0x30
	.space 0x30 - (. - Route128_Text_KatelynRematchIntro)
	.endif
	@ data/text/trainers.inc:3011 Route128_Text_KatelynRematchDefeat (+1 aliases)
	.globl Route128_Text_KatelynRematchDefeat
Route128_Text_KatelynRematchDefeat: @ 0x0826131D
	.string "ほんとっ\nポケモンしょうぶ って きびしい……{EOS}"
	.if (. - Route128_Text_KatelynRematchDefeat) > 0x18
	.error "Route128_Text_KatelynRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynRematchDefeat) < 0x18
	.space 0x18 - (. - Route128_Text_KatelynRematchDefeat)
	.endif
	@ data/text/trainers.inc:3014 Route128_Text_KatelynPostRematch
	.globl Route128_Text_KatelynPostRematch
Route128_Text_KatelynPostRematch: @ 0x08261335
	.string "そろそろ チャンピオンロードに\nちょうせん してみるのも あり かな?{EOS}"
	.if (. - Route128_Text_KatelynPostRematch) > 0x24
	.error "Route128_Text_KatelynPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynPostRematch) < 0x24
	.space 0x24 - (. - Route128_Text_KatelynPostRematch)
	.endif
	@ data/text/trainers.inc:3017 Route128_Text_AlexaIntro (+1 aliases)
	.globl Route128_Text_AlexaIntro
Route128_Text_AlexaIntro: @ 0x08261359
	.string "ポケモンリーグに ちょうせん するため\nいままで がんばって きた……\pここで まけるわけには いかないわ!{EOS}"
	.if (. - Route128_Text_AlexaIntro) > 0x37
	.error "Route128_Text_AlexaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_AlexaIntro) < 0x37
	.space 0x37 - (. - Route128_Text_AlexaIntro)
	.endif
	@ data/text/trainers.inc:3020 Route128_Text_AlexaDefeat (+1 aliases)
	.globl Route128_Text_AlexaDefeat
Route128_Text_AlexaDefeat: @ 0x08261390
	.string "ああっ!\nなんてこと{EOS}"
	.if (. - Route128_Text_AlexaDefeat) > 0xb
	.error "Route128_Text_AlexaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_AlexaDefeat) < 0xb
	.space 0xb - (. - Route128_Text_AlexaDefeat)
	.endif
	@ data/text/trainers.inc:3023 Route128_Text_AlexaPostBattle
	.globl Route128_Text_AlexaPostBattle
Route128_Text_AlexaPostBattle: @ 0x0826139B
	.string "ここまで きたんですもの\nいちど まけたからって あきらめない{EOS}"
	.if (. - Route128_Text_AlexaPostBattle) > 0x20
	.error "Route128_Text_AlexaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_AlexaPostBattle) < 0x20
	.space 0x20 - (. - Route128_Text_AlexaPostBattle)
	.endif
	@ data/text/trainers.inc:3026 Route128_Text_RubenIntro (+1 aliases)
	.globl Route128_Text_RubenIntro
Route128_Text_RubenIntro: @ 0x082613BB
	.string "わたしの ように つよい\nポケモントレーナーは ほかに いない!{EOS}"
	.if (. - Route128_Text_RubenIntro) > 0x21
	.error "Route128_Text_RubenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_RubenIntro) < 0x21
	.space 0x21 - (. - Route128_Text_RubenIntro)
	.endif
	@ data/text/trainers.inc:3029 Route128_Text_RubenDefeat (+1 aliases)
	.globl Route128_Text_RubenDefeat
Route128_Text_RubenDefeat: @ 0x082613DC
	.string "なんて ことだ……!{EOS}"
	.if (. - Route128_Text_RubenDefeat) > 0xb
	.error "Route128_Text_RubenDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_RubenDefeat) < 0xb
	.space 0xb - (. - Route128_Text_RubenDefeat)
	.endif
	@ data/text/trainers.inc:3032 Route128_Text_RubenPostBattle
	.globl Route128_Text_RubenPostBattle
Route128_Text_RubenPostBattle: @ 0x082613E7
	.string "きみの ように つよい\nポケモントレーナーは ほかに いないだろう!{EOS}"
	.if (. - Route128_Text_RubenPostBattle) > 0x23
	.error "Route128_Text_RubenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_RubenPostBattle) < 0x23
	.space 0x23 - (. - Route128_Text_RubenPostBattle)
	.endif
	@ data/text/trainers.inc:3035 Route128_Text_WayneIntro (+1 aliases)
	.globl Route128_Text_WayneIntro
Route128_Text_WayneIntro: @ 0x0826140A
	.string "サイユウに いってみたいから\nたきのぼりを おぼえた\lポケモンを つりあげたんだよ!{EOS}"
	.if (. - Route128_Text_WayneIntro) > 0x2b
	.error "Route128_Text_WayneIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_WayneIntro) < 0x2b
	.space 0x2b - (. - Route128_Text_WayneIntro)
	.endif
	@ data/text/trainers.inc:3038 Route128_Text_WayneDefeat (+1 aliases)
	.globl Route128_Text_WayneDefeat
Route128_Text_WayneDefeat: @ 0x08261435
	.string "その いきおい\nまさに たきのぼり!{EOS}"
	.if (. - Route128_Text_WayneDefeat) > 0x13
	.error "Route128_Text_WayneDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_WayneDefeat) < 0x13
	.space 0x13 - (. - Route128_Text_WayneDefeat)
	.endif
	@ data/text/trainers.inc:3041 Route128_Text_WaynePostBattle
	.globl Route128_Text_WaynePostBattle
Route128_Text_WaynePostBattle: @ 0x08261448
	.string "しまった!\pたきのぼりを おぼえた ポケモン つっても\nルネの ジムバッジ もってない!{EOS}"
	.if (. - Route128_Text_WaynePostBattle) > 0x2d
	.error "Route128_Text_WaynePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_WaynePostBattle) < 0x2d
	.space 0x2d - (. - Route128_Text_WaynePostBattle)
	.endif
	@ data/text/trainers.inc:3044 Route128_Text_HarrisonIntro (+1 aliases)
	.globl Route128_Text_HarrisonIntro
Route128_Text_HarrisonIntro: @ 0x08261475
	.string "きみが また つよそーだもんね!\nオレ かてっかな?{EOS}"
	.if (. - Route128_Text_HarrisonIntro) > 0x1b
	.error "Route128_Text_HarrisonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_HarrisonIntro) < 0x1b
	.space 0x1b - (. - Route128_Text_HarrisonIntro)
	.endif
	@ data/text/trainers.inc:3047 Route128_Text_HarrisonDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route128_Text_HarrisonDefeat
Route128_Text_HarrisonDefeat: @ 0x08261490
	.string "あっひゃ\nやっぱ かてんわな{EOS}"
	.if (. - Route128_Text_HarrisonDefeat) != 0xf
	.error "Route128_Text_HarrisonDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:3050 Route128_Text_HarrisonPostBattle
	.globl Route128_Text_HarrisonPostBattle
Route128_Text_HarrisonPostBattle: @ 0x0826149F
	.string "サイユウシティの まわりは\nつよそーな トレーナーが いっぱいだぜ!\lオレ ばちがいじゃ ないよな?{EOS}"
	.if (. - Route128_Text_HarrisonPostBattle) > 0x33
	.error "Route128_Text_HarrisonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_HarrisonPostBattle) < 0x33
	.space 0x33 - (. - Route128_Text_HarrisonPostBattle)
	.endif
	@ data/text/trainers.inc:3053 Route128_Text_CarleeIntro (+1 aliases)
	.globl Route128_Text_CarleeIntro
Route128_Text_CarleeIntro: @ 0x082614D2
	.string "この へんは ひざしが\nいちだんと つよいわねえ!{EOS}"
	.if (. - Route128_Text_CarleeIntro) > 0x1a
	.error "Route128_Text_CarleeIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_CarleeIntro) < 0x1a
	.space 0x1a - (. - Route128_Text_CarleeIntro)
	.endif
	@ data/text/trainers.inc:3056 Route128_Text_CarleeDefeat (+1 aliases)
	.globl Route128_Text_CarleeDefeat
Route128_Text_CarleeDefeat: @ 0x082614EC
	.string "まぶしくて よく みえなかったの!{EOS}"
	.if (. - Route128_Text_CarleeDefeat) > 0x12
	.error "Route128_Text_CarleeDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_CarleeDefeat) < 0x12
	.space 0x12 - (. - Route128_Text_CarleeDefeat)
	.endif
	@ data/text/trainers.inc:3059 Route128_Text_CarleePostBattle
	.globl Route128_Text_CarleePostBattle
Route128_Text_CarleePostBattle: @ 0x082614FE
	.string "そろそろ もどって\nひやけどめ ぬりなおさなきゃ{EOS}"
	.if (. - Route128_Text_CarleePostBattle) > 0x19
	.error "Route128_Text_CarleePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_CarleePostBattle) < 0x19
	.space 0x19 - (. - Route128_Text_CarleePostBattle)
	.endif
	@ data/text/trainers.inc:3062 Route129_Text_ChaseIntro (+1 aliases)
	.globl Route129_Text_ChaseIntro
Route129_Text_ChaseIntro: @ 0x08261517
	.string "オレは しょしんしゃ トライアスリート\nはじめての レースで きんちょう!{EOS}"
	.if (. - Route129_Text_ChaseIntro) > 0x26
	.error "Route129_Text_ChaseIntro may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ChaseIntro) < 0x26
	.space 0x26 - (. - Route129_Text_ChaseIntro)
	.endif
	@ data/text/trainers.inc:3065 Route129_Text_ChaseDefeat (+1 aliases)
	.globl Route129_Text_ChaseDefeat
Route129_Text_ChaseDefeat: @ 0x0826153D
	.string "うおー!\nまけてしまったーっ!{EOS}"
	.if (. - Route129_Text_ChaseDefeat) > 0x10
	.error "Route129_Text_ChaseDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ChaseDefeat) < 0x10
	.space 0x10 - (. - Route129_Text_ChaseDefeat)
	.endif
	@ data/text/trainers.inc:3068 Route129_Text_ChasePostBattle
	.globl Route129_Text_ChasePostBattle
Route129_Text_ChasePostBattle: @ 0x0826154D
	.string "きんちょう していたら\nじつりょくが だせないよな!{EOS}"
	.if (. - Route129_Text_ChasePostBattle) > 0x1b
	.error "Route129_Text_ChasePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ChasePostBattle) < 0x1b
	.space 0x1b - (. - Route129_Text_ChasePostBattle)
	.endif
	@ data/text/trainers.inc:3071 Route129_Text_AllisonIntro (+1 aliases)
	.globl Route129_Text_AllisonIntro
Route129_Text_AllisonIntro: @ 0x08261568
	.string "トライアスロンの とちゅう だけど……\nポケモンしょうぶを しようよ!{EOS}"
	.if (. - Route129_Text_AllisonIntro) > 0x24
	.error "Route129_Text_AllisonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_AllisonIntro) < 0x24
	.space 0x24 - (. - Route129_Text_AllisonIntro)
	.endif
	@ data/text/trainers.inc:3074 Route129_Text_AllisonDefeat (+1 aliases)
	.globl Route129_Text_AllisonDefeat
Route129_Text_AllisonDefeat: @ 0x0826158C
	.string "かてると おもったのにーっ!{EOS}"
	.if (. - Route129_Text_AllisonDefeat) > 0xf
	.error "Route129_Text_AllisonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_AllisonDefeat) < 0xf
	.space 0xf - (. - Route129_Text_AllisonDefeat)
	.endif
	@ data/text/trainers.inc:3077 Route129_Text_AllisonPostBattle
	.globl Route129_Text_AllisonPostBattle
Route129_Text_AllisonPostBattle: @ 0x0826159B
	.string "だいしぜんを あいてに\nじぶんの ちからを ためす ことも\lトライアスロンの だいごみ!{EOS}"
	.if (. - Route129_Text_AllisonPostBattle) > 0x2d
	.error "Route129_Text_AllisonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_AllisonPostBattle) < 0x2d
	.space 0x2d - (. - Route129_Text_AllisonPostBattle)
	.endif
	@ data/text/trainers.inc:3080 Route129_Text_ReedIntro (+1 aliases)
	.globl Route129_Text_ReedIntro
Route129_Text_ReedIntro: @ 0x082615C8
	.string "ホラホラ!\nとっとと しょうぶ しようぜ!{EOS}"
	.if (. - Route129_Text_ReedIntro) > 0x16
	.error "Route129_Text_ReedIntro may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ReedIntro) < 0x16
	.space 0x16 - (. - Route129_Text_ReedIntro)
	.endif
	@ data/text/trainers.inc:3083 Route129_Text_ReedDefeat (+1 aliases)
	.globl Route129_Text_ReedDefeat
Route129_Text_ReedDefeat: @ 0x082615DE
	.string "まけた まけたよ\nとっとと おわろうぜ!{EOS}"
	.if (. - Route129_Text_ReedDefeat) > 0x15
	.error "Route129_Text_ReedDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ReedDefeat) < 0x15
	.space 0x15 - (. - Route129_Text_ReedDefeat)
	.endif
	@ data/text/trainers.inc:3086 Route129_Text_ReedPostBattle
	.globl Route129_Text_ReedPostBattle
Route129_Text_ReedPostBattle: @ 0x082615F3
	.string "まけたら なにも ないさ\nとっとと かえると するか!{EOS}"
	.if (. - Route129_Text_ReedPostBattle) > 0x1c
	.error "Route129_Text_ReedPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ReedPostBattle) < 0x1c
	.space 0x1c - (. - Route129_Text_ReedPostBattle)
	.endif
	@ data/text/trainers.inc:3089 Route129_Text_TishaIntro (+1 aliases)
	.globl Route129_Text_TishaIntro
Route129_Text_TishaIntro: @ 0x0826160F
	.string "のーんびり のーんびり やりましょうか?{EOS}"
	.if (. - Route129_Text_TishaIntro) > 0x15
	.error "Route129_Text_TishaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_TishaIntro) < 0x15
	.space 0x15 - (. - Route129_Text_TishaIntro)
	.endif
	@ data/text/trainers.inc:3092 Route129_Text_TishaDefeat (+1 aliases)
	.globl Route129_Text_TishaDefeat
Route129_Text_TishaDefeat: @ 0x08261624
	.string "あらら\nもっと のんびり したかったなあ{EOS}"
	.if (. - Route129_Text_TishaDefeat) > 0x15
	.error "Route129_Text_TishaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_TishaDefeat) < 0x15
	.space 0x15 - (. - Route129_Text_TishaDefeat)
	.endif
	@ data/text/trainers.inc:3095 Route129_Text_TishaPostBattle
	.globl Route129_Text_TishaPostBattle
Route129_Text_TishaPostBattle: @ 0x08261639
	.string "あせって ミスを するのって イヤでしょ?\nのんびり やることに してるのよ{EOS}"
	.if (. - Route129_Text_TishaPostBattle) > 0x27
	.error "Route129_Text_TishaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_TishaPostBattle) < 0x27
	.space 0x27 - (. - Route129_Text_TishaPostBattle)
	.endif
	@ data/text/trainers.inc:3098 Route129_Text_ClarenceIntro (+1 aliases)
	.globl Route129_Text_ClarenceIntro
Route129_Text_ClarenceIntro: @ 0x08261660
	.string "なみのりも けっこう たいへんだろ?{EOS}"
	.if (. - Route129_Text_ClarenceIntro) > 0x13
	.error "Route129_Text_ClarenceIntro may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ClarenceIntro) < 0x13
	.space 0x13 - (. - Route129_Text_ClarenceIntro)
	.endif
	@ data/text/trainers.inc:3101 Route129_Text_ClarenceDefeat (+1 aliases)
	.globl Route129_Text_ClarenceDefeat
Route129_Text_ClarenceDefeat: @ 0x08261673
	.string "かつのって むずかしいなあ{EOS}"
	.if (. - Route129_Text_ClarenceDefeat) > 0xe
	.error "Route129_Text_ClarenceDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ClarenceDefeat) < 0xe
	.space 0xe - (. - Route129_Text_ClarenceDefeat)
	.endif
	@ data/text/trainers.inc:3104 Route129_Text_ClarencePostBattle
	.globl Route129_Text_ClarencePostBattle
Route129_Text_ClarencePostBattle: @ 0x08261681
	.string "ポケモンリーグを めざしてるのか?\nがんばれ がんばれよ!{EOS}"
	.if (. - Route129_Text_ClarencePostBattle) > 0x1e
	.error "Route129_Text_ClarencePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ClarencePostBattle) < 0x1e
	.space 0x1e - (. - Route129_Text_ClarencePostBattle)
	.endif
	@ data/text/trainers.inc:3107 Route130_Text_RodneyIntro (+1 aliases)
	.globl Route130_Text_RodneyIntro
Route130_Text_RodneyIntro: @ 0x0826169F
	.string "うみの ドまんなかで\nトレーナーに であうとは めずらしいな\lイッパツ しょうぶ するか!?{EOS}"
	.if (. - Route130_Text_RodneyIntro) > 0x2f
	.error "Route130_Text_RodneyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_RodneyIntro) < 0x2f
	.space 0x2f - (. - Route130_Text_RodneyIntro)
	.endif
	@ data/text/trainers.inc:3110 Route130_Text_RodneyDefeat (+1 aliases)
	.globl Route130_Text_RodneyDefeat
Route130_Text_RodneyDefeat: @ 0x082616CE
	.string "なんて つよい こどもだ……{EOS}"
	.if (. - Route130_Text_RodneyDefeat) > 0xf
	.error "Route130_Text_RodneyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_RodneyDefeat) < 0xf
	.space 0xf - (. - Route130_Text_RodneyDefeat)
	.endif
	@ data/text/trainers.inc:3113 Route130_Text_RodneyPostBattle
	.globl Route130_Text_RodneyPostBattle
Route130_Text_RodneyPostBattle: @ 0x082616DD
	.string "きびしい たたかいを くぐりぬけてきた\nいい めを しているぜ!{EOS}"
	.if (. - Route130_Text_RodneyPostBattle) > 0x21
	.error "Route130_Text_RodneyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_RodneyPostBattle) < 0x21
	.space 0x21 - (. - Route130_Text_RodneyPostBattle)
	.endif
	@ data/text/trainers.inc:3116 Route130_Text_KatieIntro (+1 aliases)
	.globl Route130_Text_KatieIntro
Route130_Text_KatieIntro: @ 0x082616FE
	.string "あおい うみ\nブルーな こころ\lいやされる……{EOS}"
	.if (. - Route130_Text_KatieIntro) > 0x18
	.error "Route130_Text_KatieIntro may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_KatieIntro) < 0x18
	.space 0x18 - (. - Route130_Text_KatieIntro)
	.endif
	@ data/text/trainers.inc:3119 Route130_Text_KatieDefeat (+1 aliases)
	.globl Route130_Text_KatieDefeat
Route130_Text_KatieDefeat: @ 0x08261716
	.string "うみ ひろく\nポケモン せかい\lまた ひろし……{EOS}"
	.if (. - Route130_Text_KatieDefeat) > 0x19
	.error "Route130_Text_KatieDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_KatieDefeat) < 0x19
	.space 0x19 - (. - Route130_Text_KatieDefeat)
	.endif
	@ data/text/trainers.inc:3122 Route130_Text_KatiePostBattle
	.globl Route130_Text_KatiePostBattle
Route130_Text_KatiePostBattle: @ 0x0826172F
	.string "こどもたち\nポケモン チャンプ\lめざしてる……{EOS}"
	.if (. - Route130_Text_KatiePostBattle) > 0x18
	.error "Route130_Text_KatiePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_KatiePostBattle) < 0x18
	.space 0x18 - (. - Route130_Text_KatiePostBattle)
	.endif
	@ data/text/trainers.inc:3125 Route130_Text_SantiagoIntro (+1 aliases)
	.globl Route130_Text_SantiagoIntro
Route130_Text_SantiagoIntro: @ 0x08261747
	.string "なにも ない うみに うかんでると……\nへいわだなあー……{EOS}"
	.if (. - Route130_Text_SantiagoIntro) > 0x1e
	.error "Route130_Text_SantiagoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_SantiagoIntro) < 0x1e
	.space 0x1e - (. - Route130_Text_SantiagoIntro)
	.endif
	@ data/text/trainers.inc:3128 Route130_Text_SantiagoDefeat (+1 aliases)
	.globl Route130_Text_SantiagoDefeat
Route130_Text_SantiagoDefeat: @ 0x08261765
	.string "へいわボケ してて まけました!{EOS}"
	.if (. - Route130_Text_SantiagoDefeat) > 0x11
	.error "Route130_Text_SantiagoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_SantiagoDefeat) < 0x11
	.space 0x11 - (. - Route130_Text_SantiagoDefeat)
	.endif
	@ data/text/trainers.inc:3131 Route130_Text_SantiagoPostBattle
	.globl Route130_Text_SantiagoPostBattle
Route130_Text_SantiagoPostBattle: @ 0x08261776
	.string "こうして およいだり しょうぶしたり……\nオレ しあわせだなあー……{EOS}"
	.if (. - Route130_Text_SantiagoPostBattle) > 0x23
	.error "Route130_Text_SantiagoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_SantiagoPostBattle) < 0x23
	.space 0x23 - (. - Route130_Text_SantiagoPostBattle)
	.endif
	@ data/text/trainers.inc:3134 Route131_Text_RichardIntro (+1 aliases)
	.globl Route131_Text_RichardIntro
Route131_Text_RichardIntro: @ 0x08261799
	.string "うみには ポケモンが たくさん いるからね\nおよいで わたるのも くろう するよ!{EOS}"
	.if (. - Route131_Text_RichardIntro) > 0x2a
	.error "Route131_Text_RichardIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_RichardIntro) < 0x2a
	.space 0x2a - (. - Route131_Text_RichardIntro)
	.endif
	@ data/text/trainers.inc:3137 Route131_Text_RichardDefeat (+1 aliases)
	.globl Route131_Text_RichardDefeat
Route131_Text_RichardDefeat: @ 0x082617C3
	.string "トレーナーの そだてた ポケモンは\nホントに つよいなぁ……{EOS}"
	.if (. - Route131_Text_RichardDefeat) > 0x1f
	.error "Route131_Text_RichardDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_RichardDefeat) < 0x1f
	.space 0x1f - (. - Route131_Text_RichardDefeat)
	.endif
	@ data/text/trainers.inc:3140 Route131_Text_RichardPostBattle
	.globl Route131_Text_RichardPostBattle
Route131_Text_RichardPostBattle: @ 0x082617E2
	.string "ひいひい…… つかれた……\nいきは よいよい かえりは こわい……\lかえりの たいりょく のこってるかなあ……{EOS}"
	.if (. - Route131_Text_RichardPostBattle) > 0x38
	.error "Route131_Text_RichardPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_RichardPostBattle) < 0x38
	.space 0x38 - (. - Route131_Text_RichardPostBattle)
	.endif
	@ data/text/trainers.inc:3143 Route131_Text_HermanIntro (+1 aliases)
	.globl Route131_Text_HermanIntro
Route131_Text_HermanIntro: @ 0x0826181A
	.string "うみ うみ うみ……\nみわたす かぎり うみ……\lうみは もう あきたぞーっ!{EOS}"
	.if (. - Route131_Text_HermanIntro) > 0x28
	.error "Route131_Text_HermanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_HermanIntro) < 0x28
	.space 0x28 - (. - Route131_Text_HermanIntro)
	.endif
	@ data/text/trainers.inc:3146 Route131_Text_HermanDefeat (+1 aliases)
	.globl Route131_Text_HermanDefeat
Route131_Text_HermanDefeat: @ 0x08261842
	.string "ひょえええええっ!{EOS}"
	.if (. - Route131_Text_HermanDefeat) > 0xa
	.error "Route131_Text_HermanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_HermanDefeat) < 0xa
	.space 0xa - (. - Route131_Text_HermanDefeat)
	.endif
	@ data/text/trainers.inc:3149 Route131_Text_HermanPostBattle
	.globl Route131_Text_HermanPostBattle
Route131_Text_HermanPostBattle: @ 0x0826184C
	.string "うみに あきても\nおよぎ つづけるしか ないのか\pそんな オレは\nねっからの スイマー……{EOS}"
	.if (. - Route131_Text_HermanPostBattle) > 0x2e
	.error "Route131_Text_HermanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_HermanPostBattle) < 0x2e
	.space 0x2e - (. - Route131_Text_HermanPostBattle)
	.endif
	@ data/text/trainers.inc:3152 Route131_Text_SusieIntro (+1 aliases)
	.globl Route131_Text_SusieIntro
Route131_Text_SusieIntro: @ 0x0826187A
	.string "ちょっと あんた\nわたしと しょうぶ しましょ!{EOS}"
	.if (. - Route131_Text_SusieIntro) > 0x19
	.error "Route131_Text_SusieIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_SusieIntro) < 0x19
	.space 0x19 - (. - Route131_Text_SusieIntro)
	.endif
	@ data/text/trainers.inc:3155 Route131_Text_SusieDefeat (+1 aliases)
	.globl Route131_Text_SusieDefeat
Route131_Text_SusieDefeat: @ 0x08261893
	.string "みかけに よらず\nつよいわねーっ!{EOS}"
	.if (. - Route131_Text_SusieDefeat) > 0x12
	.error "Route131_Text_SusieDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_SusieDefeat) < 0x12
	.space 0x12 - (. - Route131_Text_SusieDefeat)
	.endif
	@ data/text/trainers.inc:3158 Route131_Text_SusiePostBattle
	.globl Route131_Text_SusiePostBattle
Route131_Text_SusiePostBattle: @ 0x082618A5
	.string "あっちで うみは あきた とか いってる\nおとこが いるでしょ?\pアレ くちだけ なのよ\nホントは うみが すきで しょうがないの!{EOS}"
	.if (. - Route131_Text_SusiePostBattle) > 0x43
	.error "Route131_Text_SusiePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_SusiePostBattle) < 0x43
	.space 0x43 - (. - Route131_Text_SusiePostBattle)
	.endif
	@ data/text/trainers.inc:3161 Route131_Text_KaraIntro (+1 aliases)
	.globl Route131_Text_KaraIntro
Route131_Text_KaraIntro: @ 0x082618E8
	.string "なんで オトコって\nビキニが すき なのかしらね!\pみんな わたしの こと\nジロジロ みるのよ!{EOS}"
	.if (. - Route131_Text_KaraIntro) > 0x31
	.error "Route131_Text_KaraIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_KaraIntro) < 0x31
	.space 0x31 - (. - Route131_Text_KaraIntro)
	.endif
	@ data/text/trainers.inc:3164 Route131_Text_KaraDefeat (+1 aliases)
	.globl Route131_Text_KaraDefeat
Route131_Text_KaraDefeat: @ 0x08261919
	.string "じつりょくが ちがい すぎるわ……!{EOS}"
	.if (. - Route131_Text_KaraDefeat) > 0x13
	.error "Route131_Text_KaraDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_KaraDefeat) < 0x13
	.space 0x13 - (. - Route131_Text_KaraDefeat)
	.endif
	@ data/text/trainers.inc:3167 Route131_Text_KaraPostBattle
	.globl Route131_Text_KaraPostBattle
Route131_Text_KaraPostBattle: @ 0x0826192C
	.string "みんな ビキニを みてるんじゃなくて\nわたしの びぼうが げんいん かしら……?{EOS}"
	.if (. - Route131_Text_KaraPostBattle) > 0x29
	.error "Route131_Text_KaraPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_KaraPostBattle) < 0x29
	.space 0x29 - (. - Route131_Text_KaraPostBattle)
	.endif
	@ data/text/trainers.inc:3170 Route131_Text_ReliIntro (+1 aliases)
	.globl Route131_Text_ReliIntro
Route131_Text_ReliIntro: @ 0x08261955
	.string "アミ『きょうだい ちからを あわせて\nがんばっちゃおうかな!?{EOS}"
	.if (. - Route131_Text_ReliIntro) > 0x20
	.error "Route131_Text_ReliIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_ReliIntro) < 0x20
	.space 0x20 - (. - Route131_Text_ReliIntro)
	.endif
	@ data/text/trainers.inc:3173 Route131_Text_ReliDefeat (+1 aliases)
	.globl Route131_Text_ReliDefeat
Route131_Text_ReliDefeat: @ 0x08261975
	.string "アミ『きょうだいで ちからを あわせても\nかてなかったわ{EOS}"
	.if (. - Route131_Text_ReliDefeat) > 0x1d
	.error "Route131_Text_ReliDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_ReliDefeat) < 0x1d
	.space 0x1d - (. - Route131_Text_ReliDefeat)
	.endif
	@ data/text/trainers.inc:3176 Route131_Text_ReliPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route131_Text_ReliPostBattle
Route131_Text_ReliPostBattle: @ 0x08261992
	.string "アミ『キナギの にんげんは\nうまれた ときから\lうみと ポケモンと いっしょ なんだ{EOS}"
	.if (. - Route131_Text_ReliPostBattle) != 0x2b
	.error "Route131_Text_ReliPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:3179 Route131_Text_ReliNotEnoughMons (+1 aliases)
	.globl Route131_Text_ReliNotEnoughMons
Route131_Text_ReliNotEnoughMons: @ 0x082619BD
	.string "アミ『ポケモン 2ひき いないの?\nポケモンしょうぶ たのしめないわね{EOS}"
	.if (. - Route131_Text_ReliNotEnoughMons) > 0x24
	.error "Route131_Text_ReliNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_ReliNotEnoughMons) < 0x24
	.space 0x24 - (. - Route131_Text_ReliNotEnoughMons)
	.endif
	@ data/text/trainers.inc:3182 Route131_Text_IanIntro (+1 aliases)
	.globl Route131_Text_IanIntro
Route131_Text_IanIntro: @ 0x082619E1
	.string "カツ『きょうだい ちからを あわせて\nがんばりまーす!!{EOS}"
	.if (. - Route131_Text_IanIntro) > 0x1d
	.error "Route131_Text_IanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_IanIntro) < 0x1d
	.space 0x1d - (. - Route131_Text_IanIntro)
	.endif
	@ data/text/trainers.inc:3185 Route131_Text_IanDefeat (+1 aliases)
	.globl Route131_Text_IanDefeat
Route131_Text_IanDefeat: @ 0x082619FE
	.string "カツ『あねきと がんばったのに\nかてなかったよ……{EOS}"
	.if (. - Route131_Text_IanDefeat) > 0x1a
	.error "Route131_Text_IanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_IanDefeat) < 0x1a
	.space 0x1a - (. - Route131_Text_IanDefeat)
	.endif
	@ data/text/trainers.inc:3188 Route131_Text_IanPostBattle
	.globl Route131_Text_IanPostBattle
Route131_Text_IanPostBattle: @ 0x08261A18
	.string "カツ『キナギって うみの うえに\nうかんでる まち だろ?\pだから うみが つづくかぎり\nそこは キナギ なんだよ!{EOS}"
	.if (. - Route131_Text_IanPostBattle) > 0x3b
	.error "Route131_Text_IanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_IanPostBattle) < 0x3b
	.space 0x3b - (. - Route131_Text_IanPostBattle)
	.endif
	@ data/text/trainers.inc:3191 Route131_Text_IanNotEnoughMons (+1 aliases)
	.globl Route131_Text_IanNotEnoughMons
Route131_Text_IanNotEnoughMons: @ 0x08261A53
	.string "カツ『ポケモン 2ひき いたら\nポケモンしょうぶ してやるよ!{EOS}"
	.if (. - Route131_Text_IanNotEnoughMons) > 0x20
	.error "Route131_Text_IanNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_IanNotEnoughMons) < 0x20
	.space 0x20 - (. - Route131_Text_IanNotEnoughMons)
	.endif
	@ data/text/trainers.inc:3194 Route131_Text_TaliaIntro (+1 aliases)
	.globl Route131_Text_TaliaIntro
Route131_Text_TaliaIntro: @ 0x08261A73
	.string "わたしに かてたら\nすごい じょうほう おしえてあげる!{EOS}"
	.if (. - Route131_Text_TaliaIntro) > 0x1d
	.error "Route131_Text_TaliaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_TaliaIntro) < 0x1d
	.space 0x1d - (. - Route131_Text_TaliaIntro)
	.endif
	@ data/text/trainers.inc:3197 Route131_Text_TaliaDefeat (+1 aliases)
	.globl Route131_Text_TaliaDefeat
Route131_Text_TaliaDefeat: @ 0x08261A90
	.string "あら まけちゃったのね{EOS}"
	.if (. - Route131_Text_TaliaDefeat) > 0xc
	.error "Route131_Text_TaliaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_TaliaDefeat) < 0xc
	.space 0xc - (. - Route131_Text_TaliaDefeat)
	.endif
	@ data/text/trainers.inc:3200 Route131_Text_TaliaPostBattle
	.globl Route131_Text_TaliaPostBattle
Route131_Text_TaliaPostBattle: @ 0x08261A9C
	.string "この そばに ふしぎな ばしょが あるわよ\nたかい とうが そびえているの!\lみてきたら どうかしら?{EOS}"
	.if (. - Route131_Text_TaliaPostBattle) > 0x34
	.error "Route131_Text_TaliaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_TaliaPostBattle) < 0x34
	.space 0x34 - (. - Route131_Text_TaliaPostBattle)
	.endif
	@ data/text/trainers.inc:3203 Route131_Text_KevinIntro (+1 aliases)
	.globl Route131_Text_KevinIntro
Route131_Text_KevinIntro: @ 0x08261AD0
	.string "キナギには おおらかな やつ ばかりだぜ!\nぜったい おこったり しないんだ\lもちろん オレもな{EOS}"
	.if (. - Route131_Text_KevinIntro) > 0x31
	.error "Route131_Text_KevinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_KevinIntro) < 0x31
	.space 0x31 - (. - Route131_Text_KevinIntro)
	.endif
	@ data/text/trainers.inc:3206 Route131_Text_KevinDefeat (+1 aliases)
	.globl Route131_Text_KevinDefeat
Route131_Text_KevinDefeat: @ 0x08261B01
	.string "あ……っ{EOS}"
	.if (. - Route131_Text_KevinDefeat) > 0x5
	.error "Route131_Text_KevinDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_KevinDefeat) < 0x5
	.space 0x5 - (. - Route131_Text_KevinDefeat)
	.endif
	@ data/text/trainers.inc:3209 Route131_Text_KevinPostBattle
	.globl Route131_Text_KevinPostBattle
Route131_Text_KevinPostBattle: @ 0x08261B06
	.string "ちっ! ……じゃ なかった\nお おこってない おこってないよ!\p……ハハ つよいね きみは!\nはっハッは!{EOS}"
	.if (. - Route131_Text_KevinPostBattle) > 0x36
	.error "Route131_Text_KevinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_KevinPostBattle) < 0x36
	.space 0x36 - (. - Route131_Text_KevinPostBattle)
	.endif
	@ data/text/trainers.inc:3212 Route132_Text_GilbertIntro (+1 aliases)
	.globl Route132_Text_GilbertIntro
Route132_Text_GilbertIntro: @ 0x08261B3C
	.string "ちいさい ころは よく カゼを ひいたけど\nすいえいを はじめて こんなに じょうぶ!{EOS}"
	.if (. - Route132_Text_GilbertIntro) > 0x2c
	.error "Route132_Text_GilbertIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_GilbertIntro) < 0x2c
	.space 0x2c - (. - Route132_Text_GilbertIntro)
	.endif
	@ data/text/trainers.inc:3215 Route132_Text_GilbertDefeat (+1 aliases)
	.globl Route132_Text_GilbertDefeat
Route132_Text_GilbertDefeat: @ 0x08261B68
	.string "もっと つよくなりたい……!{EOS}"
	.if (. - Route132_Text_GilbertDefeat) > 0xf
	.error "Route132_Text_GilbertDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_GilbertDefeat) < 0xf
	.space 0xf - (. - Route132_Text_GilbertDefeat)
	.endif
	@ data/text/trainers.inc:3218 Route132_Text_GilbertPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route132_Text_GilbertPostBattle
Route132_Text_GilbertPostBattle: @ 0x08261B77
	.string "ポケモン トレーナーも\nのやまを あるき まわるから\lとっても けんこうてき だよねー!{EOS}"
	.if (. - Route132_Text_GilbertPostBattle) != 0x2d
	.error "Route132_Text_GilbertPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:3221 Route132_Text_DanaIntro (+1 aliases)
	.globl Route132_Text_DanaIntro
Route132_Text_DanaIntro: @ 0x08261BA4
	.string "ながれの つよい ところでは\nおよがないように しているのよ{EOS}"
	.if (. - Route132_Text_DanaIntro) > 0x1f
	.error "Route132_Text_DanaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_DanaIntro) < 0x1f
	.space 0x1f - (. - Route132_Text_DanaIntro)
	.endif
	@ data/text/trainers.inc:3224 Route132_Text_DanaDefeat (+1 aliases)
	.globl Route132_Text_DanaDefeat
Route132_Text_DanaDefeat: @ 0x08261BC3
	.string "いやああああんっ!{EOS}"
	.if (. - Route132_Text_DanaDefeat) > 0xa
	.error "Route132_Text_DanaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_DanaDefeat) < 0xa
	.space 0xa - (. - Route132_Text_DanaDefeat)
	.endif
	@ data/text/trainers.inc:3227 Route132_Text_DanaPostBattle
	.globl Route132_Text_DanaPostBattle
Route132_Text_DanaPostBattle: @ 0x08261BCD
	.string "ながされると じぶんが どこに いるのか\nわからなく なっちゃうの……{EOS}"
	.if (. - Route132_Text_DanaPostBattle) > 0x24
	.error "Route132_Text_DanaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_DanaPostBattle) < 0x24
	.space 0x24 - (. - Route132_Text_DanaPostBattle)
	.endif
	@ data/text/trainers.inc:3230 Route132_Text_RonaldIntro (+1 aliases)
	.globl Route132_Text_RonaldIntro
Route132_Text_RonaldIntro: @ 0x08261BF1
	.string "かつか まけるか\nやれば わかることだろ!{EOS}"
	.if (. - Route132_Text_RonaldIntro) > 0x16
	.error "Route132_Text_RonaldIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_RonaldIntro) < 0x16
	.space 0x16 - (. - Route132_Text_RonaldIntro)
	.endif
	@ data/text/trainers.inc:3233 Route132_Text_RonaldDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route132_Text_RonaldDefeat
Route132_Text_RonaldDefeat: @ 0x08261C07
	.string "わーん\nまけて しまった{EOS}"
	.if (. - Route132_Text_RonaldDefeat) != 0xd
	.error "Route132_Text_RonaldDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:3236 Route132_Text_RonaldPostBattle
	.globl Route132_Text_RonaldPostBattle
Route132_Text_RonaldPostBattle: @ 0x08261C14
	.string "かてると わかる しょうぶは しない!\nかつか まけるか\lその ギリギリの かんじが いいんだ!{EOS}"
	.if (. - Route132_Text_RonaldPostBattle) > 0x31
	.error "Route132_Text_RonaldPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_RonaldPostBattle) < 0x31
	.space 0x31 - (. - Route132_Text_RonaldPostBattle)
	.endif
	@ data/text/trainers.inc:3239 Route132_Text_KiyoIntro (+1 aliases)
	.globl Route132_Text_KiyoIntro
Route132_Text_KiyoIntro: @ 0x08261C45
	.string "24じかん ポケモンのこと かんがえてる\nそんな おれに かてると おもうか!?{EOS}"
	.if (. - Route132_Text_KiyoIntro) > 0x29
	.error "Route132_Text_KiyoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_KiyoIntro) < 0x29
	.space 0x29 - (. - Route132_Text_KiyoIntro)
	.endif
	@ data/text/trainers.inc:3242 Route132_Text_KiyoDefeat (+1 aliases)
	.globl Route132_Text_KiyoDefeat
Route132_Text_KiyoDefeat: @ 0x08261C6E
	.string "まけた\nおまえさんには まけたわ{EOS}"
	.if (. - Route132_Text_KiyoDefeat) > 0x11
	.error "Route132_Text_KiyoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_KiyoDefeat) < 0x11
	.space 0x11 - (. - Route132_Text_KiyoDefeat)
	.endif
	@ data/text/trainers.inc:3245 Route132_Text_KiyoPostBattle
	.globl Route132_Text_KiyoPostBattle
Route132_Text_KiyoPostBattle: @ 0x08261C7F
	.string "くう……\nおまえも ポケモンばか だな!\p24じかん ポケモンのこと ばかり\nかんがえて いるんだろ!{EOS}"
	.if (. - Route132_Text_KiyoPostBattle) > 0x34
	.error "Route132_Text_KiyoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_KiyoPostBattle) < 0x34
	.space 0x34 - (. - Route132_Text_KiyoPostBattle)
	.endif
	@ data/text/trainers.inc:3248 Route132_Text_MakaylaIntro (+1 aliases)
	.globl Route132_Text_MakaylaIntro
Route132_Text_MakaylaIntro: @ 0x08261CB3
	.string "いつも いっしょの じいさんが\nいなくても かてるわい!{EOS}"
	.if (. - Route132_Text_MakaylaIntro) > 0x1d
	.error "Route132_Text_MakaylaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_MakaylaIntro) < 0x1d
	.space 0x1d - (. - Route132_Text_MakaylaIntro)
	.endif
	@ data/text/trainers.inc:3251 Route132_Text_MakaylaDefeat (+1 aliases)
	.globl Route132_Text_MakaylaDefeat
Route132_Text_MakaylaDefeat: @ 0x08261CD0
	.string "あら やっぱり ダメかね{EOS}"
	.if (. - Route132_Text_MakaylaDefeat) > 0xd
	.error "Route132_Text_MakaylaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_MakaylaDefeat) < 0xd
	.space 0xd - (. - Route132_Text_MakaylaDefeat)
	.endif
	@ data/text/trainers.inc:3254 Route132_Text_MakaylaPostBattle
	.globl Route132_Text_MakaylaPostBattle
Route132_Text_MakaylaPostBattle: @ 0x08261CDD
	.string "あの わかい おとこのこ\nじいさんの わかい ころに そっくりじゃ\lポッ……{EOS}"
	.if (. - Route132_Text_MakaylaPostBattle) > 0x27
	.error "Route132_Text_MakaylaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_MakaylaPostBattle) < 0x27
	.space 0x27 - (. - Route132_Text_MakaylaPostBattle)
	.endif
	@ data/text/trainers.inc:3257 Route132_Text_JonathanIntro (+1 aliases)
	.globl Route132_Text_JonathanIntro
Route132_Text_JonathanIntro: @ 0x08261D04
	.string "さっき から へんな しせんを\nかんじると おもったら キミか?{EOS}"
	.if (. - Route132_Text_JonathanIntro) > 0x21
	.error "Route132_Text_JonathanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_JonathanIntro) < 0x21
	.space 0x21 - (. - Route132_Text_JonathanIntro)
	.endif
	@ data/text/trainers.inc:3260 Route132_Text_JonathanDefeat (+1 aliases)
	.globl Route132_Text_JonathanDefeat
Route132_Text_JonathanDefeat: @ 0x08261D25
	.string "へえ! つよいね!{EOS}"
	.if (. - Route132_Text_JonathanDefeat) > 0xa
	.error "Route132_Text_JonathanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_JonathanDefeat) < 0xa
	.space 0xa - (. - Route132_Text_JonathanDefeat)
	.endif
	@ data/text/trainers.inc:3263 Route132_Text_JonathanPostBattle
	.globl Route132_Text_JonathanPostBattle
Route132_Text_JonathanPostBattle: @ 0x08261D2F
	.string "だれかが ぼくの ことを\nみているきが して おちつかないっ!{EOS}"
	.if (. - Route132_Text_JonathanPostBattle) > 0x20
	.error "Route132_Text_JonathanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_JonathanPostBattle) < 0x20
	.space 0x20 - (. - Route132_Text_JonathanPostBattle)
	.endif
	@ data/text/trainers.inc:3266 Route132_Text_PaxtonIntro (+1 aliases)
	.globl Route132_Text_PaxtonIntro
Route132_Text_PaxtonIntro: @ 0x08261D4F
	.string "いつも いっしょの ばあさんは どこかな?\nひとりで かてるじゃろか{EOS}"
	.if (. - Route132_Text_PaxtonIntro) > 0x23
	.error "Route132_Text_PaxtonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_PaxtonIntro) < 0x23
	.space 0x23 - (. - Route132_Text_PaxtonIntro)
	.endif
	@ data/text/trainers.inc:3269 Route132_Text_PaxtonDefeat (+1 aliases)
	.globl Route132_Text_PaxtonDefeat
Route132_Text_PaxtonDefeat: @ 0x08261D72
	.string "ああ やっぱり ダメかね{EOS}"
	.if (. - Route132_Text_PaxtonDefeat) > 0xd
	.error "Route132_Text_PaxtonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_PaxtonDefeat) < 0xd
	.space 0xd - (. - Route132_Text_PaxtonDefeat)
	.endif
	@ data/text/trainers.inc:3272 Route132_Text_PaxtonPostBattle
	.globl Route132_Text_PaxtonPostBattle
Route132_Text_PaxtonPostBattle: @ 0x08261D7F
	.string "ばあさんも わしを さがしてるじゃろ\nはよう みつけて やらんと{EOS}"
	.if (. - Route132_Text_PaxtonPostBattle) > 0x21
	.error "Route132_Text_PaxtonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_PaxtonPostBattle) < 0x21
	.space 0x21 - (. - Route132_Text_PaxtonPostBattle)
	.endif
	@ data/text/trainers.inc:3275 Route132_Text_DarcyIntro (+1 aliases)
	.globl Route132_Text_DarcyIntro
Route132_Text_DarcyIntro: @ 0x08261DA0
	.string "ひとりで この ばしょで\nしゅぎょう するのが すきだったのに!\lおおぜい やって くるんだもの ひどい!{EOS}"
	.if (. - Route132_Text_DarcyIntro) > 0x36
	.error "Route132_Text_DarcyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_DarcyIntro) < 0x36
	.space 0x36 - (. - Route132_Text_DarcyIntro)
	.endif
	@ data/text/trainers.inc:3278 Route132_Text_DarcyDefeat (+1 aliases)
	.globl Route132_Text_DarcyDefeat
Route132_Text_DarcyDefeat: @ 0x08261DD6
	.string "わかったわよ\nみんなで つかえば いいんでしょ{EOS}"
	.if (. - Route132_Text_DarcyDefeat) > 0x18
	.error "Route132_Text_DarcyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_DarcyDefeat) < 0x18
	.space 0x18 - (. - Route132_Text_DarcyDefeat)
	.endif
	@ data/text/trainers.inc:3281 Route132_Text_DarcyPostBattle
	.globl Route132_Text_DarcyPostBattle
Route132_Text_DarcyPostBattle: @ 0x08261DEE
	.string "とりあえず そこの おじいさんと くんで\nむこうの チームに いどんで みようかな?{EOS}"
	.if (. - Route132_Text_DarcyPostBattle) > 0x2b
	.error "Route132_Text_DarcyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_DarcyPostBattle) < 0x2b
	.space 0x2b - (. - Route132_Text_DarcyPostBattle)
	.endif
	@ data/text/trainers.inc:3284 Route133_Text_FranklinIntro (+1 aliases)
	.globl Route133_Text_FranklinIntro
Route133_Text_FranklinIntro: @ 0x08261E19
	.string "キミも しおに ながされて きたの?\nこれも なにかの えんだね\lしょうぶ しようよ!{EOS}"
	.if (. - Route133_Text_FranklinIntro) > 0x2c
	.error "Route133_Text_FranklinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_FranklinIntro) < 0x2c
	.space 0x2c - (. - Route133_Text_FranklinIntro)
	.endif
	@ data/text/trainers.inc:3287 Route133_Text_FranklinDefeat (+1 aliases)
	.globl Route133_Text_FranklinDefeat
Route133_Text_FranklinDefeat: @ 0x08261E45
	.string "つよい!\nつよすぎっ!{EOS}"
	.if (. - Route133_Text_FranklinDefeat) > 0xc
	.error "Route133_Text_FranklinDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_FranklinDefeat) < 0xc
	.space 0xc - (. - Route133_Text_FranklinDefeat)
	.endif
	@ data/text/trainers.inc:3290 Route133_Text_FranklinPostBattle
	.globl Route133_Text_FranklinPostBattle
Route133_Text_FranklinPostBattle: @ 0x08261E51
	.string "キミみたいな つよい トレーナーが\nながされて くるなんて……\lオレも ツキが ないなぁ……{EOS}"
	.if (. - Route133_Text_FranklinPostBattle) > 0x2f
	.error "Route133_Text_FranklinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_FranklinPostBattle) < 0x2f
	.space 0x2f - (. - Route133_Text_FranklinPostBattle)
	.endif
	@ data/text/trainers.inc:3293 Route133_Text_DebraIntro (+1 aliases)
	.globl Route133_Text_DebraIntro
Route133_Text_DebraIntro: @ 0x08261E80
	.string "わたしは かなしい おんな……\nながれ ながれて ここまで きたの……{EOS}"
	.if (. - Route133_Text_DebraIntro) > 0x24
	.error "Route133_Text_DebraIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_DebraIntro) < 0x24
	.space 0x24 - (. - Route133_Text_DebraIntro)
	.endif
	@ data/text/trainers.inc:3296 Route133_Text_DebraDefeat (+1 aliases)
	.globl Route133_Text_DebraDefeat
Route133_Text_DebraDefeat: @ 0x08261EA4
	.string "まけたぁ……{EOS}"
	.if (. - Route133_Text_DebraDefeat) > 0x7
	.error "Route133_Text_DebraDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_DebraDefeat) < 0x7
	.space 0x7 - (. - Route133_Text_DebraDefeat)
	.endif
	@ data/text/trainers.inc:3299 Route133_Text_DebraPostBattle
	.globl Route133_Text_DebraPostBattle
Route133_Text_DebraPostBattle: @ 0x08261EAB
	.string "ながされる だけの じんせい なんて……\nもう イヤっ!{EOS}"
	.if (. - Route133_Text_DebraPostBattle) > 0x1d
	.error "Route133_Text_DebraPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_DebraPostBattle) < 0x1d
	.space 0x1d - (. - Route133_Text_DebraPostBattle)
	.endif
	@ data/text/trainers.inc:3302 Route133_Text_LindaIntro (+1 aliases)
	.globl Route133_Text_LindaIntro
Route133_Text_LindaIntro: @ 0x08261EC8
	.string "いらっしゃーい!\nおまち してましたわ!{EOS}"
	.if (. - Route133_Text_LindaIntro) > 0x15
	.error "Route133_Text_LindaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_LindaIntro) < 0x15
	.space 0x15 - (. - Route133_Text_LindaIntro)
	.endif
	@ data/text/trainers.inc:3305 Route133_Text_LindaDefeat (+1 aliases)
	.globl Route133_Text_LindaDefeat
Route133_Text_LindaDefeat: @ 0x08261EDD
	.string "いやーん!{EOS}"
	.if (. - Route133_Text_LindaDefeat) > 0x6
	.error "Route133_Text_LindaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_LindaDefeat) < 0x6
	.space 0x6 - (. - Route133_Text_LindaDefeat)
	.endif
	@ data/text/trainers.inc:3308 Route133_Text_LindaPostBattle
	.globl Route133_Text_LindaPostBattle
Route133_Text_LindaPostBattle: @ 0x08261EE3
	.string "つよい こどもの トレーナーなんて……\nおねえさん こまっちゃうぅ!{EOS}"
	.if (. - Route133_Text_LindaPostBattle) > 0x23
	.error "Route133_Text_LindaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_LindaPostBattle) < 0x23
	.space 0x23 - (. - Route133_Text_LindaPostBattle)
	.endif
	@ data/text/trainers.inc:3311 Route133_Text_WarrenIntro (+1 aliases)
	.globl Route133_Text_WarrenIntro
Route133_Text_WarrenIntro: @ 0x08261F06
	.string "かちたいから って\nひとと おなじように そだては しないぜ!{EOS}"
	.if (. - Route133_Text_WarrenIntro) > 0x20
	.error "Route133_Text_WarrenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_WarrenIntro) < 0x20
	.space 0x20 - (. - Route133_Text_WarrenIntro)
	.endif
	@ data/text/trainers.inc:3314 Route133_Text_WarrenDefeat (+1 aliases)
	.globl Route133_Text_WarrenDefeat
Route133_Text_WarrenDefeat: @ 0x08261F26
	.string "くそー!\nおれの やりかたは まだまだ あまい!{EOS}"
	.if (. - Route133_Text_WarrenDefeat) > 0x19
	.error "Route133_Text_WarrenDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_WarrenDefeat) < 0x19
	.space 0x19 - (. - Route133_Text_WarrenDefeat)
	.endif
	@ data/text/trainers.inc:3317 Route133_Text_WarrenPostBattle
	.globl Route133_Text_WarrenPostBattle
Route133_Text_WarrenPostBattle: @ 0x08261F3F
	.string "ひとと おなじこと するより\nじぶんの したいこと したほうが\lたのしいに きまってるだろ!{EOS}"
	.if (. - Route133_Text_WarrenPostBattle) > 0x2f
	.error "Route133_Text_WarrenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_WarrenPostBattle) < 0x2f
	.space 0x2f - (. - Route133_Text_WarrenPostBattle)
	.endif
	@ data/text/trainers.inc:3320 Route133_Text_BeckIntro (+1 aliases)
	.globl Route133_Text_BeckIntro
Route133_Text_BeckIntro: @ 0x08261F6E
	.string "とりポケモンと いっしょに\nこんな ところまで きました{EOS}"
	.if (. - Route133_Text_BeckIntro) > 0x1d
	.error "Route133_Text_BeckIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_BeckIntro) < 0x1d
	.space 0x1d - (. - Route133_Text_BeckIntro)
	.endif
	@ data/text/trainers.inc:3323 Route133_Text_BeckDefeat (+1 aliases)
	.globl Route133_Text_BeckDefeat
Route133_Text_BeckDefeat: @ 0x08261F8B
	.string "きみ……\nなんて かっこいいんだ!{EOS}"
	.if (. - Route133_Text_BeckDefeat) > 0x12
	.error "Route133_Text_BeckDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_BeckDefeat) < 0x12
	.space 0x12 - (. - Route133_Text_BeckDefeat)
	.endif
	@ data/text/trainers.inc:3326 Route133_Text_BeckPostBattle
	.globl Route133_Text_BeckPostBattle
Route133_Text_BeckPostBattle: @ 0x08261F9D
	.string "そろそろ ヒワマキに かえりたいけど\nなんとなく ここ すきに なっちゃったぞ!?{EOS}"
	.if (. - Route133_Text_BeckPostBattle) > 0x2a
	.error "Route133_Text_BeckPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_BeckPostBattle) < 0x2a
	.space 0x2a - (. - Route133_Text_BeckPostBattle)
	.endif
	@ data/text/trainers.inc:3329 Route133_Text_MollieIntro (+1 aliases)
	.globl Route133_Text_MollieIntro
Route133_Text_MollieIntro: @ 0x08261FC7
	.string "いままでに なんぜんかい\nポケモン しょうぶを したかねえ{EOS}"
	.if (. - Route133_Text_MollieIntro) > 0x1e
	.error "Route133_Text_MollieIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_MollieIntro) < 0x1e
	.space 0x1e - (. - Route133_Text_MollieIntro)
	.endif
	@ data/text/trainers.inc:3332 Route133_Text_MollieDefeat (+1 aliases)
	.globl Route133_Text_MollieDefeat
Route133_Text_MollieDefeat: @ 0x08261FE5
	.string "なんぜんかい まけても\nくやしい もんは くやしいでね{EOS}"
	.if (. - Route133_Text_MollieDefeat) > 0x1c
	.error "Route133_Text_MollieDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_MollieDefeat) < 0x1c
	.space 0x1c - (. - Route133_Text_MollieDefeat)
	.endif
	@ data/text/trainers.inc:3335 Route133_Text_MolliePostBattle
	.globl Route133_Text_MolliePostBattle
Route133_Text_MolliePostBattle: @ 0x08262001
	.string "わたいや じいさんのような\nたつじんを めざして がんばんなせえ{EOS}"
	.if (. - Route133_Text_MolliePostBattle) > 0x21
	.error "Route133_Text_MolliePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_MolliePostBattle) < 0x21
	.space 0x21 - (. - Route133_Text_MolliePostBattle)
	.endif
	@ data/text/trainers.inc:3338 Route133_Text_ConorIntro (+1 aliases)
	.globl Route133_Text_ConorIntro
Route133_Text_ConorIntro: @ 0x08262022
	.string "わかい やつらは\nながされて ばっかりで なさけねぇ!{EOS}"
	.if (. - Route133_Text_ConorIntro) > 0x1c
	.error "Route133_Text_ConorIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_ConorIntro) < 0x1c
	.space 0x1c - (. - Route133_Text_ConorIntro)
	.endif
	@ data/text/trainers.inc:3341 Route133_Text_ConorDefeat (+1 aliases)
	.globl Route133_Text_ConorDefeat
Route133_Text_ConorDefeat: @ 0x0826203E
	.string "きみは しっかりしとるな{EOS}"
	.if (. - Route133_Text_ConorDefeat) > 0xd
	.error "Route133_Text_ConorDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_ConorDefeat) < 0xd
	.space 0xd - (. - Route133_Text_ConorDefeat)
	.endif
	@ data/text/trainers.inc:3344 Route133_Text_ConorPostBattle
	.globl Route133_Text_ConorPostBattle
Route133_Text_ConorPostBattle: @ 0x0826204B
	.string "まわりに ながされず\nしっかりした おとなに なんなさい!{EOS}"
	.if (. - Route133_Text_ConorPostBattle) > 0x1e
	.error "Route133_Text_ConorPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_ConorPostBattle) < 0x1e
	.space 0x1e - (. - Route133_Text_ConorPostBattle)
	.endif
	@ data/text/trainers.inc:3347 Route134_Text_JackIntro (+1 aliases)
	.globl Route134_Text_JackIntro
Route134_Text_JackIntro: @ 0x08262069
	.string "およぎの とくいな ポケモンだって\nながされる しおの ながれだ!{EOS}"
	.if (. - Route134_Text_JackIntro) > 0x22
	.error "Route134_Text_JackIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_JackIntro) < 0x22
	.space 0x22 - (. - Route134_Text_JackIntro)
	.endif
	@ data/text/trainers.inc:3350 Route134_Text_JackDefeat (+1 aliases)
	.globl Route134_Text_JackDefeat
Route134_Text_JackDefeat: @ 0x0826208B
	.string "ひえーっ!{EOS}"
	.if (. - Route134_Text_JackDefeat) > 0x6
	.error "Route134_Text_JackDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_JackDefeat) < 0x6
	.space 0x6 - (. - Route134_Text_JackDefeat)
	.endif
	@ data/text/trainers.inc:3353 Route134_Text_JackPostBattle
	.globl Route134_Text_JackPostBattle
Route134_Text_JackPostBattle: @ 0x08262091
	.string "ポケモンたちは この ながれを\nたのしんでる みたいだよ!{EOS}"
	.if (. - Route134_Text_JackPostBattle) > 0x1e
	.error "Route134_Text_JackPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_JackPostBattle) < 0x1e
	.space 0x1e - (. - Route134_Text_JackPostBattle)
	.endif
	@ data/text/trainers.inc:3356 Route134_Text_LaurelIntro (+1 aliases)
	.globl Route134_Text_LaurelIntro
Route134_Text_LaurelIntro: @ 0x082620AF
	.string "わたしの ラブカスたちと\nたのしく しょうぶ しましょうよ!{EOS}"
	.if (. - Route134_Text_LaurelIntro) > 0x1f
	.error "Route134_Text_LaurelIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_LaurelIntro) < 0x1f
	.space 0x1f - (. - Route134_Text_LaurelIntro)
	.endif
	@ data/text/trainers.inc:3359 Route134_Text_LaurelDefeat (+1 aliases)
	.globl Route134_Text_LaurelDefeat
Route134_Text_LaurelDefeat: @ 0x082620CE
	.string "あらららららっ!{EOS}"
	.if (. - Route134_Text_LaurelDefeat) > 0x9
	.error "Route134_Text_LaurelDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_LaurelDefeat) < 0x9
	.space 0x9 - (. - Route134_Text_LaurelDefeat)
	.endif
	@ data/text/trainers.inc:3362 Route134_Text_LaurelPostBattle
	.globl Route134_Text_LaurelPostBattle
Route134_Text_LaurelPostBattle: @ 0x082620D7
	.string "どこかの マニアが\nラブカスの ウロコを あつめてるのよねー{EOS}"
	.if (. - Route134_Text_LaurelPostBattle) > 0x1f
	.error "Route134_Text_LaurelPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_LaurelPostBattle) < 0x1f
	.space 0x1f - (. - Route134_Text_LaurelPostBattle)
	.endif
	@ data/text/trainers.inc:3365 Route134_Text_AlexIntro (+1 aliases)
	.globl Route134_Text_AlexIntro
Route134_Text_AlexIntro: @ 0x082620F6
	.string "よーしっ! きゅうけい おわり!\nポケモンしょうぶ しようぜ!{EOS}"
	.if (. - Route134_Text_AlexIntro) > 0x20
	.error "Route134_Text_AlexIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_AlexIntro) < 0x20
	.space 0x20 - (. - Route134_Text_AlexIntro)
	.endif
	@ data/text/trainers.inc:3368 Route134_Text_AlexDefeat (+1 aliases)
	.globl Route134_Text_AlexDefeat
Route134_Text_AlexDefeat: @ 0x08262116
	.string "また バテた……{EOS}"
	.if (. - Route134_Text_AlexDefeat) > 0x9
	.error "Route134_Text_AlexDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_AlexDefeat) < 0x9
	.space 0x9 - (. - Route134_Text_AlexDefeat)
	.endif
	@ data/text/trainers.inc:3371 Route134_Text_AlexPostBattle
	.globl Route134_Text_AlexPostBattle
Route134_Text_AlexPostBattle: @ 0x0826211F
	.string "オレの とりポケモンたち……\nながいあいだ とぶと すぐに バテるんだ{EOS}"
	.if (. - Route134_Text_AlexPostBattle) > 0x24
	.error "Route134_Text_AlexPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_AlexPostBattle) < 0x24
	.space 0x24 - (. - Route134_Text_AlexPostBattle)
	.endif
	@ data/text/trainers.inc:3374 Route134_Text_HitoshiIntro (+1 aliases)
	.globl Route134_Text_HitoshiIntro
Route134_Text_HitoshiIntro: @ 0x08262143
	.string "ポケモントレーナーなら\nだまって ポケモンしょうぶ!{EOS}"
	.if (. - Route134_Text_HitoshiIntro) > 0x1b
	.error "Route134_Text_HitoshiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_HitoshiIntro) < 0x1b
	.space 0x1b - (. - Route134_Text_HitoshiIntro)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:736 BattleFrontier_BattlePikeRoomNormal_Text_Silence (+2 aliases)
	.globl BattleFrontier_BattlePikeRoomNormal_Text_Silence_Copy_EventScripts
BattleFrontier_BattlePikeRoomNormal_Text_Silence_Copy_EventScripts: @ 0x0826215E
	.string "…… …… ……\n…… …… ……{EOS}"
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_Silence_Copy_EventScripts) > 0x12
	.error "BattleFrontier_BattlePikeRoomNormal_Text_Silence_Copy_EventScripts may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_Silence_Copy_EventScripts) < 0x12
	.space 0x12 - (. - BattleFrontier_BattlePikeRoomNormal_Text_Silence_Copy_EventScripts)
	.endif
	@ data/text/trainers.inc:3380 Route134_Text_HitoshiPostBattle
	.globl Route134_Text_HitoshiPostBattle
Route134_Text_HitoshiPostBattle: @ 0x08262170
	.string "じぶんから しょうぶを いどんでおいて\nまけるとは…… はずかしすぎる……{EOS}"
	.if (. - Route134_Text_HitoshiPostBattle) > 0x26
	.error "Route134_Text_HitoshiPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_HitoshiPostBattle) < 0x26
	.space 0x26 - (. - Route134_Text_HitoshiPostBattle)
	.endif
	@ data/text/trainers.inc:3383 Route134_Text_AaronIntro (+1 aliases)
	.globl Route134_Text_AaronIntro
Route134_Text_AaronIntro: @ 0x08262196
	.string "このあたりの はげしい しおの ながれ!\nそれもまた おれたちを きたえてくれる!{EOS}"
	.if (. - Route134_Text_AaronIntro) > 0x2a
	.error "Route134_Text_AaronIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_AaronIntro) < 0x2a
	.space 0x2a - (. - Route134_Text_AaronIntro)
	.endif
	@ data/text/trainers.inc:3386 Route134_Text_AaronDefeat (+1 aliases)
	.globl Route134_Text_AaronDefeat
Route134_Text_AaronDefeat: @ 0x082621C0
	.string "すなおに まけを みとめよう{EOS}"
	.if (. - Route134_Text_AaronDefeat) > 0xf
	.error "Route134_Text_AaronDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_AaronDefeat) < 0xf
	.space 0xf - (. - Route134_Text_AaronDefeat)
	.endif
	@ data/text/trainers.inc:3389 Route134_Text_AaronPostBattle
	.globl Route134_Text_AaronPostBattle
Route134_Text_AaronPostBattle: @ 0x082621CF
	.string "りゅうせいのたきで\nしゅぎょう しなおすと しよう!\pよければ きみも いってみたまえ\nきっと いまより つよくなる!{EOS}"
	.if (. - Route134_Text_AaronPostBattle) > 0x3c
	.error "Route134_Text_AaronPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_AaronPostBattle) < 0x3c
	.space 0x3c - (. - Route134_Text_AaronPostBattle)
	.endif
	@ data/text/trainers.inc:3392 Route134_Text_KelvinIntro (+1 aliases)
	.globl Route134_Text_KelvinIntro
Route134_Text_KelvinIntro: @ 0x0826220B
	.string "ふ ふねが\nながされて しまったんです{EOS}"
	.if (. - Route134_Text_KelvinIntro) > 0x14
	.error "Route134_Text_KelvinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_KelvinIntro) < 0x14
	.space 0x14 - (. - Route134_Text_KelvinIntro)
	.endif
	@ data/text/trainers.inc:3395 Route134_Text_KelvinDefeat (+1 aliases)
	.globl Route134_Text_KelvinDefeat
Route134_Text_KelvinDefeat: @ 0x0826221F
	.string "あわわわわ\nやめてください やめてくださいよ!{EOS}"
	.if (. - Route134_Text_KelvinDefeat) > 0x18
	.error "Route134_Text_KelvinDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_KelvinDefeat) < 0x18
	.space 0x18 - (. - Route134_Text_KelvinDefeat)
	.endif
	@ data/text/trainers.inc:3398 Route134_Text_KelvinPostBattle
	.globl Route134_Text_KelvinPostBattle
Route134_Text_KelvinPostBattle: @ 0x08262237
	.string "このうえ なみのり まで できなかったら\nかえれないじゃ ないですか!\p……まあ ひんしでも なみのり できますけど\nきぶんてきに よろしくなくて{EOS}"
	.if (. - Route134_Text_KelvinPostBattle) > 0x4a
	.error "Route134_Text_KelvinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_KelvinPostBattle) < 0x4a
	.space 0x4a - (. - Route134_Text_KelvinPostBattle)
	.endif
	@ data/text/trainers.inc:3401 Route134_Text_MarleyIntro (+1 aliases)
	.globl Route134_Text_MarleyIntro
Route134_Text_MarleyIntro: @ 0x08262281
	.string "すばやい こうげきを かわせますこと?{EOS}"
	.if (. - Route134_Text_MarleyIntro) > 0x14
	.error "Route134_Text_MarleyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_MarleyIntro) < 0x14
	.space 0x14 - (. - Route134_Text_MarleyIntro)
	.endif
	@ data/text/trainers.inc:3404 Route134_Text_MarleyDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route134_Text_MarleyDefeat
Route134_Text_MarleyDefeat: @ 0x08262295
	.string "そんな てが あるなんて……!\nかんぱい ですわ{EOS}"
	.if (. - Route134_Text_MarleyDefeat) != 0x19
	.error "Route134_Text_MarleyDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:3407 Route134_Text_MarleyPostBattle
	.globl Route134_Text_MarleyPostBattle
Route134_Text_MarleyPostBattle: @ 0x082622AE
	.string "すばやさへの こだわりは すてきれないの\nもっと がんばって みますわ!{EOS}"
	.if (. - Route134_Text_MarleyPostBattle) > 0x25
	.error "Route134_Text_MarleyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_MarleyPostBattle) < 0x25
	.space 0x25 - (. - Route134_Text_MarleyPostBattle)
	.endif
	@ data/text/trainers.inc:3410 Route134_Text_ReynaIntro (+1 aliases)
	.globl Route134_Text_ReynaIntro
Route134_Text_ReynaIntro: @ 0x082622D3
	.string "あたいの ポケモンは\nちょっとや そっとじゃ たおせないよ!{EOS}"
	.if (. - Route134_Text_ReynaIntro) > 0x1f
	.error "Route134_Text_ReynaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_ReynaIntro) < 0x1f
	.space 0x1f - (. - Route134_Text_ReynaIntro)
	.endif
	@ data/text/trainers.inc:3413 Route134_Text_ReynaDefeat (+1 aliases)
	.globl Route134_Text_ReynaDefeat
Route134_Text_ReynaDefeat: @ 0x082622F2
	.string "うっそだろ!\nあたいが まけるなんて!{EOS}"
	.if (. - Route134_Text_ReynaDefeat) > 0x14
	.error "Route134_Text_ReynaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_ReynaDefeat) < 0x14
	.space 0x14 - (. - Route134_Text_ReynaDefeat)
	.endif
	@ data/text/trainers.inc:3416 Route134_Text_ReynaPostBattle
	.globl Route134_Text_ReynaPostBattle
Route134_Text_ReynaPostBattle: @ 0x08262306
	.string "ははっ あんたにゃ まけたよ!\pそこらへんの トレーナーでも たおして\nいちから しゅぎょう しなおすよ!{EOS}"
	.if (. - Route134_Text_ReynaPostBattle) > 0x36
	.error "Route134_Text_ReynaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_ReynaPostBattle) < 0x36
	.space 0x36 - (. - Route134_Text_ReynaPostBattle)
	.endif
	@ data/text/trainers.inc:3419 Route134_Text_HudsonIntro (+1 aliases)
	.globl Route134_Text_HudsonIntro
Route134_Text_HudsonIntro: @ 0x0826233C
	.string "なあ このへんで\nもうひとり ふなのりを みなかった?{EOS}"
	.if (. - Route134_Text_HudsonIntro) > 0x1c
	.error "Route134_Text_HudsonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_HudsonIntro) < 0x1c
	.space 0x1c - (. - Route134_Text_HudsonIntro)
	.endif
	@ data/text/trainers.inc:3422 Route134_Text_HudsonDefeat (+1 aliases)
	.globl Route134_Text_HudsonDefeat
Route134_Text_HudsonDefeat: @ 0x08262358
	.string "おー すごいな{EOS}"
	.if (. - Route134_Text_HudsonDefeat) > 0x8
	.error "Route134_Text_HudsonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_HudsonDefeat) < 0x8
	.space 0x8 - (. - Route134_Text_HudsonDefeat)
	.endif
	@ data/text/trainers.inc:3425 Route134_Text_HudsonPostBattle
	.globl Route134_Text_HudsonPostBattle
Route134_Text_HudsonPostBattle: @ 0x08262360
	.string "おれたちの ふねが ながされちゃってさ!\pあいぼうが きの よわい やつだから\nしんぱい してるんだ{EOS}"
	.if (. - Route134_Text_HudsonPostBattle) > 0x33
	.error "Route134_Text_HudsonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_HudsonPostBattle) < 0x33
	.space 0x33 - (. - Route134_Text_HudsonPostBattle)
	.endif
	@ analyzed canonical ROM range 0x08262393-0x0826239B
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08262393: @ 0x08262393
.globl EventScript_JP_08262393
EventScript_JP_08262393: @ 0x08262393
	loadword 0x00, FieldScriptText_26239C
	callstd 0x03
	end
	@ field-script:0x262395 FieldScriptText_26239C
	.globl FieldScriptText_26239C
FieldScriptText_26239C: @ 0x0826239C
	.string "スプレーのこうかが　きれた{EOS}"
	.if (. - FieldScriptText_26239C) > 0xe
	.error "FieldScriptText_26239C may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_26239C) < 0xe
	.space 0xe - (. - FieldScriptText_26239C)
	.endif
	.globl EventScript_JP_082623AA
	@ analyzed canonical ROM range 0x082623AA-0x082623CC
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_082623AA: @ 0x082623AA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x40A4, 0x0001
	@ event command: special
	special ExitSafariMode
	@ event command: setwarp
	setwarp MAP_ID_ROUTE121_SAFARI_ZONE_ENTRANCE, 0xFF, 0x0002, 0x0005
	.byte 0x02
EventScript_JP_082623BB: @ 0x082623BB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x40A4, 0x0001
	@ event command: special
	special ExitSafariMode
	@ event command: warp
	warp MAP_ID_ROUTE121_SAFARI_ZONE_ENTRANCE, 0xFF, 0x0002, 0x0005
	.byte 0x27, 0x02
	@ analyzed canonical ROM range 0x082623CD-0x082623E7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082623CD: @ 0x082623CD
.globl EventScript_JP_082623CD
EventScript_JP_082623CD: @ 0x082623CD
	lockall
	loadword 0x00, FieldScriptText_262452
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082623E3
	releaseall
	end
EventScript_082623E3: @ 0x082623E3
EventScript_JP_082623E3: @ 0x082623E3
	goto EventScript_JP_082623BB
	@ analyzed canonical ROM range 0x082623E8-0x082623F8
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082623E8: @ 0x082623E8
.globl EventScript_JP_082623E8
EventScript_JP_082623E8: @ 0x082623E8
	lockall
	playse 0x0049
	message FieldScriptText_26246D
	waitmessage
	waitbuttonpress
	releaseall
	goto EventScript_JP_082623BB
	@ analyzed canonical ROM range 0x082623F9-0x08262409
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082623F9: @ 0x082623F9
.globl EventScript_JP_082623F9
EventScript_JP_082623F9: @ 0x082623F9
	lockall
	playse 0x0049
	message FieldScriptText_262491
	waitmessage
	waitbuttonpress
	releaseall
	goto EventScript_JP_082623BB
	.globl EventScript_JP_0826240A
	@ analyzed canonical ROM range 0x0826240A-0x08262451
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_0826240A: @ 0x0826240A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: special
	special GetPokeblockFeederInFront
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_08262449
	loadword 0x00, FieldScriptText_2624B7
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0826242E
	releaseall
	end
EventScript_JP_0826242E: @ 0x0826242E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	fadescreen 0x01
	@ event command: special
	special OpenPokeblockCaseOnFeeder
	waitstate
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_08262440
	end
EventScript_JP_08262440: @ 0x08262440
	message FieldScriptText_2624DC
	waitmessage
	waitbuttonpress
	releaseall
	end
EventScript_JP_08262449: @ 0x08262449
	message FieldScriptText_2624CD
	waitmessage
	waitbuttonpress
	releaseall
	end
