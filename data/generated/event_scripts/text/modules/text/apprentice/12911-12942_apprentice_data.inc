	@ data/text/apprentice.inc:283 gText_ApprenticeItemAlreadyRecommended2
	.globl gText_Rom_26ED71
gText_Rom_26ED71: @ 0x0826ED71
	.string "{STR_VAR_1}は\nまえに おしえて もらいましたよ\pそれとは ちがう もちものを\nもたせたいんです\pそれとも {STR_VAR_2}には\nなにも もたせなくて いいんだね?"
	.byte EOS
	.if (. - gText_Rom_26ED71) > 0x49
	.error "gText_Rom_26ED71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ED71) < 0x49
	.space 0x49 - (. - gText_Rom_26ED71)
	.endif

	@ data/text/apprentice.inc:286 gText_ApprenticeWhatHeldItem3
	.globl gText_Rom_26EDBA
gText_Rom_26EDBA: @ 0x0826EDBA
	.string "{PLAYER}さん こんにちは……\nごめんなさい きょうも あたし\lききたい ことが あるんです\pあたしの ちから だけでは\nしょうぶに かてないかも しれないから\lなにか どうぐを {STR_VAR_1}に\lもたせようかと おもって いるんです\lでも なにが いいのか……\p{PLAYER}さん おねがいします\nあたしの かわりに きめてください!"
	.byte EOS
	.if (. - gText_Rom_26EDBA) > 0x9c
	.error "gText_Rom_26EDBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EDBA) < 0x9c
	.space 0x9c - (. - gText_Rom_26EDBA)
	.endif

	@ data/text/apprentice.inc:289 gText_ApprenticeHoldNothing3
	.globl gText_Rom_26EE56
gText_Rom_26EE56: @ 0x0826EE56
	.string "あの あたしなんかの ポケモンには\nなにも もたせないほうが いいんですか?"
	.byte EOS
	.if (. - gText_Rom_26EE56) > 0x27
	.error "gText_Rom_26EE56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EE56) < 0x27
	.space 0x27 - (. - gText_Rom_26EE56)
	.endif

	@ data/text/apprentice.inc:292 gText_ApprenticeThanksNoHeldItem3
	.globl gText_Rom_26EE7D
gText_Rom_26EE7D: @ 0x0826EE7D
	.string "わかりました……\nどうぐに たよるなって ことですね?\lがんばって みます!\pありがとう ございます!"
	.byte EOS
	.if (. - gText_Rom_26EE7D) > 0x34
	.error "gText_Rom_26EE7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EE7D) < 0x34
	.space 0x34 - (. - gText_Rom_26EE7D)
	.endif

	@ data/text/apprentice.inc:295 gText_ApprenticeThanksHeldItem3
	.globl gText_Rom_26EEB1
gText_Rom_26EEB1: @ 0x0826EEB1
	.string "{STR_VAR_1} ですか!\nあたしに みつけられるか……\lいえ! がんばって みます\pありがとう ございます!"
	.byte EOS
	.if (. - gText_Rom_26EEB1) > 0x32
	.error "gText_Rom_26EEB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EEB1) < 0x32
	.space 0x32 - (. - gText_Rom_26EEB1)
	.endif

	@ data/text/apprentice.inc:298 gText_ApprenticeItemAlreadyRecommended3
	.globl gText_Rom_26EEE3
gText_Rom_26EEE3: @ 0x0826EEE3
	.string "え…… それは\nまえに おしえて いただいたと おもいます\pあ もしかして\nあたしが {STR_VAR_1}を\lつかいこなせて いないから ですか?\pそれとも {STR_VAR_2}には なにも\nもたせるなと いう こと でしょうか?"
	.byte EOS
	.if (. - gText_Rom_26EEE3) > 0x64
	.error "gText_Rom_26EEE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EEE3) < 0x64
	.space 0x64 - (. - gText_Rom_26EEE3)
	.endif

	@ data/text/apprentice.inc:301 gText_ApprenticeWhatHeldItem4
	.globl gText_Rom_26EF47
gText_Rom_26EF47: @ 0x0826EF47
	.string "あら {PLAYER}{KUN}\nちょっと ききたい ことが あるのよ!\pわたし ポケモンは きめて もらったけど\nどの どうぐを もたせるか までは\lきめて もらってない じゃない?\pどうせ なら さいごまで\nあなたが きめて くれない?\lねえ なにが いいかしら?\l{STR_VAR_1}に もたせたいの!"
	.byte EOS
	.if (. - gText_Rom_26EF47) > 0x8a
	.error "gText_Rom_26EF47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EF47) < 0x8a
	.space 0x8a - (. - gText_Rom_26EF47)
	.endif

	@ data/text/apprentice.inc:304 gText_ApprenticeHoldNothing4
	.globl gText_Rom_26EFD1
gText_Rom_26EFD1: @ 0x0826EFD1
	.string "あら! {STR_VAR_1}は\nてぶらで がんばれ って ことかしら?"
	.byte EOS
	.if (. - gText_Rom_26EFD1) > 0x1c
	.error "gText_Rom_26EFD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EFD1) < 0x1c
	.space 0x1c - (. - gText_Rom_26EFD1)
	.endif

	@ data/text/apprentice.inc:307 gText_ApprenticeThanksNoHeldItem4
	.globl gText_Rom_26EFED
gText_Rom_26EFED: @ 0x0826EFED
	.string "それが よければ そうするわ!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_Rom_26EFED) > 0x44
	.error "gText_Rom_26EFED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EFED) < 0x44
	.space 0x44 - (. - gText_Rom_26EFED)
	.endif

	@ data/text/apprentice.inc:310 gText_ApprenticeThanksHeldItem4
	.globl gText_Rom_26F031
gText_Rom_26F031: @ 0x0826F031
	.string "{STR_VAR_1}か\nわるく ないわね そうするわ!\l{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_Rom_26F031) > 0x48
	.error "gText_Rom_26F031 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F031) < 0x48
	.space 0x48 - (. - gText_Rom_26F031)
	.endif

	@ data/text/apprentice.inc:313 gText_ApprenticeItemAlreadyRecommended4
	.globl gText_Rom_26F079
gText_Rom_26F079: @ 0x0826F079
	.string "えっ なに いってるのよ\n{STR_VAR_1}は もう\lおしえて もらった じゃない!\pそれとも {STR_VAR_2}は\nてぶらで がんばれ って ことかしら?"
	.byte EOS
	.if (. - gText_Rom_26F079) > 0x41
	.error "gText_Rom_26F079 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F079) < 0x41
	.space 0x41 - (. - gText_Rom_26F079)
	.endif

	@ data/text/apprentice.inc:316 gText_ApprenticeWhatHeldItem5
	.globl gText_Rom_26F0BA
gText_Rom_26F0BA: @ 0x0826F0BA
	.string "よっ {PLAYER}{KUN}\nいそがしい わりには よく あうよね!\lオレは きょうは\lウォーキング クリーニング それに\lブラッシングと たいへん そのものさ!\pおかげで だいじな {STR_VAR_1}にも\nどうぐ さえ かって やれなくてねー\pあのさ! じかんも ないから\nなにを {STR_VAR_1}に\lもたせて やったら いいか\lそれだけでも アドバイス してよ!"
	.byte EOS
	.if (. - gText_Rom_26F0BA) > 0xa4
	.error "gText_Rom_26F0BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F0BA) < 0xa4
	.space 0xa4 - (. - gText_Rom_26F0BA)
	.endif

	@ data/text/apprentice.inc:319 gText_ApprenticeHoldNothing5
	.globl gText_Rom_26F15E
gText_Rom_26F15E: @ 0x0826F15E
	.string "おっ それじゃ\nいそがしい オレの {STR_VAR_1}は\lなにも もたなくて イイ ってこと?"
	.byte EOS
	.if (. - gText_Rom_26F15E) > 0x29
	.error "gText_Rom_26F15E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F15E) < 0x29
	.space 0x29 - (. - gText_Rom_26F15E)
	.endif

	@ data/text/apprentice.inc:322 gText_ApprenticeThanksNoHeldItem5
	.globl gText_Rom_26F187
gText_Rom_26F187: @ 0x0826F187
	.string "オーケー わかった!\nそれ なら じかんも いらないぜ\pきょうは サンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_Rom_26F187) > 0x30
	.error "gText_Rom_26F187 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F187) < 0x30
	.space 0x30 - (. - gText_Rom_26F187)
	.endif

	@ data/text/apprentice.inc:325 gText_ApprenticeThanksHeldItem5
	.globl gText_Rom_26F1B7
gText_Rom_26F1B7: @ 0x0826F1B7
	.string "オーケー わかった!\nじゃ なんとか じかん つくって\l{STR_VAR_1}を さがすぜ!\pオレは いい せんせいに であえたよな\nサンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_Rom_26F1B7) > 0x49
	.error "gText_Rom_26F1B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F1B7) < 0x49
	.space 0x49 - (. - gText_Rom_26F1B7)
	.endif

	@ data/text/apprentice.inc:328 gText_ApprenticeItemAlreadyRecommended5
	.globl gText_Rom_26F200
gText_Rom_26F200: @ 0x0826F200
	.string "あれっ {STR_VAR_1}は\nもう しってるよ!\pん? それとも\nいそがしい オレの {STR_VAR_2}は\lなにも もたなくて イイ ってこと?"
	.byte EOS
	.if (. - gText_Rom_26F200) > 0x3b
	.error "gText_Rom_26F200 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F200) < 0x3b
	.space 0x3b - (. - gText_Rom_26F200)
	.endif

