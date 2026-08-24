	@ data/maps/MtPyre_2F/scripts.inc:45 MtPyre_2F_Text_MemoriesOfSkitty
	.globl MtPyre_2F_Text_MemoriesOfSkitty
MtPyre_2F_Text_MemoriesOfSkitty: @ 0x082162D8
	.string "かわいかった エネコとの おもいで……\nおもいだすだけで なみだが あふれる……{EOS}"
	.if (. - MtPyre_2F_Text_MemoriesOfSkitty) > 0x29
	.error "MtPyre_2F_Text_MemoriesOfSkitty may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_MemoriesOfSkitty) < 0x29
	.space 0x29 - (. - MtPyre_2F_Text_MemoriesOfSkitty)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:49 MtPyre_2F_Text_TumbledFromFloorAbove
	.globl MtPyre_2F_Text_TumbledFromFloorAbove
MtPyre_2F_Text_TumbledFromFloorAbove: @ 0x08216301
	.string "アイタタタ…… ゆかの そこかしこに\nあなが あいているのに きづかないで\lおじさん うえから おちてしまったよ{EOS}"
	.if (. - MtPyre_2F_Text_TumbledFromFloorAbove) > 0x39
	.error "MtPyre_2F_Text_TumbledFromFloorAbove may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_TumbledFromFloorAbove) < 0x39
	.space 0x39 - (. - MtPyre_2F_Text_TumbledFromFloorAbove)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:55 MtPyre_2F_Text_MarkIntro (+1 aliases)
	.globl MtPyre_2F_Text_MarkIntro
MtPyre_2F_Text_MarkIntro: @ 0x0821633A
	.string "おまえも ポケモン さがしに きたのか?\nあとから きた くせに なまいきだ!{EOS}"
	.if (. - MtPyre_2F_Text_MarkIntro) > 0x28
	.error "MtPyre_2F_Text_MarkIntro may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_MarkIntro) < 0x28
	.space 0x28 - (. - MtPyre_2F_Text_MarkIntro)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:59 MtPyre_2F_Text_MarkDefeat (+1 aliases)
	.globl MtPyre_2F_Text_MarkDefeat
MtPyre_2F_Text_MarkDefeat: @ 0x08216362
	.string "ふええええええっ!\nゆるして くださいーっ!{EOS}"
	.if (. - MtPyre_2F_Text_MarkDefeat) > 0x17
	.error "MtPyre_2F_Text_MarkDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_MarkDefeat) < 0x17
	.space 0x17 - (. - MtPyre_2F_Text_MarkDefeat)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:63 MtPyre_2F_Text_MarkPostBattle
	.globl MtPyre_2F_Text_MarkPostBattle
MtPyre_2F_Text_MarkPostBattle: @ 0x08216379
	.string "めったに ひとが はいらない やま だから\nめずらしい ポケモンが いると おもってさ{EOS}"
	.if (. - MtPyre_2F_Text_MarkPostBattle) > 0x2c
	.error "MtPyre_2F_Text_MarkPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_MarkPostBattle) < 0x2c
	.space 0x2c - (. - MtPyre_2F_Text_MarkPostBattle)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:67 MtPyre_2F_Text_LukeIntro (+1 aliases)
	.globl MtPyre_2F_Text_LukeIntro
MtPyre_2F_Text_LukeIntro: @ 0x082163A5
	.string "テル『きもだめし するんだ!\nぼくの かっこいい ところ みれば\lかのじょ もっと ほれるからね!\pそうだ! きみを たおして\nかっこいい ところ みせちゃおう!{EOS}"
	.if (. - MtPyre_2F_Text_LukeIntro) > 0x52
	.error "MtPyre_2F_Text_LukeIntro may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_LukeIntro) < 0x52
	.space 0x52 - (. - MtPyre_2F_Text_LukeIntro)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:74 MtPyre_2F_Text_LukeDefeat (+1 aliases)
	.globl MtPyre_2F_Text_LukeDefeat
MtPyre_2F_Text_LukeDefeat: @ 0x082163F7
	.string "テル『あっちゃー{EOS}"
	.if (. - MtPyre_2F_Text_LukeDefeat) > 0x9
	.error "MtPyre_2F_Text_LukeDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_LukeDefeat) < 0x9
	.space 0x9 - (. - MtPyre_2F_Text_LukeDefeat)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:77 MtPyre_2F_Text_LukePostBattle
	.globl MtPyre_2F_Text_LukePostBattle
MtPyre_2F_Text_LukePostBattle: @ 0x08216400
	.string "テル『まけちゃったけど だいじょうぶ!\nぼくが いるからさ\lきもだめし なんて へっちゃら だよ!{EOS}"
	.if (. - MtPyre_2F_Text_LukePostBattle) > 0x32
	.error "MtPyre_2F_Text_LukePostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_LukePostBattle) < 0x32
	.space 0x32 - (. - MtPyre_2F_Text_LukePostBattle)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:82 MtPyre_2F_Text_LukeNotEnoughMons (+1 aliases)
	.globl MtPyre_2F_Text_LukeNotEnoughMons
MtPyre_2F_Text_LukeNotEnoughMons: @ 0x08216432
	.string "テル『ぼくと しょうぶ するなら\nもっと ポケモン つれてきなよ!\pそうでないと かのじょの まえで\nいいところ みせられない じゃないか!{EOS}"
	.if (. - MtPyre_2F_Text_LukeNotEnoughMons) > 0x47
	.error "MtPyre_2F_Text_LukeNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_LukeNotEnoughMons) < 0x47
	.space 0x47 - (. - MtPyre_2F_Text_LukeNotEnoughMons)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:88 MtPyre_2F_Text_DezIntro (+1 aliases)
	.globl MtPyre_2F_Text_DezIntro
MtPyre_2F_Text_DezIntro: @ 0x08216479
	.string "マコ『かれしと きもだめしに きたの\nすっごく こわいけど\lかれしが いるから だいじょうぶ!\pそうだ! あなたを たおす\nかれしの かっこいい ところ みせて!{EOS}"
	.if (. - MtPyre_2F_Text_DezIntro) > 0x52
	.error "MtPyre_2F_Text_DezIntro may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_DezIntro) < 0x52
	.space 0x52 - (. - MtPyre_2F_Text_DezIntro)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:96 MtPyre_2F_Text_DezDefeat (+1 aliases)
	.globl MtPyre_2F_Text_DezDefeat
MtPyre_2F_Text_DezDefeat: @ 0x082164CB
	.string "マコ『あーん こわーい!{EOS}"
	.if (. - MtPyre_2F_Text_DezDefeat) > 0xd
	.error "MtPyre_2F_Text_DezDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_DezDefeat) < 0xd
	.space 0xd - (. - MtPyre_2F_Text_DezDefeat)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:99 MtPyre_2F_Text_DezPostBattle
	.globl MtPyre_2F_Text_DezPostBattle
MtPyre_2F_Text_DezPostBattle: @ 0x082164D8
	.string "マコ『あたしたち ラブラブだから\nまけても へいき なんだもん!{EOS}"
	.if (. - MtPyre_2F_Text_DezPostBattle) > 0x21
	.error "MtPyre_2F_Text_DezPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_DezPostBattle) < 0x21
	.space 0x21 - (. - MtPyre_2F_Text_DezPostBattle)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:103 MtPyre_2F_Text_DezNotEnoughMons (+1 aliases)
	.globl MtPyre_2F_Text_DezNotEnoughMons
MtPyre_2F_Text_DezNotEnoughMons: @ 0x082164F9
	.string "マコ『あたしたちと たたかいたいなら\nせめて 2ひきは ポケモン いないと\pあたしの かれし つよいんだから\nいっぴきじゃ はなしに ならないわ{EOS}"
	.if (. - MtPyre_2F_Text_DezNotEnoughMons) > 0x49
	.error "MtPyre_2F_Text_DezNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_DezNotEnoughMons) < 0x49
	.space 0x49 - (. - MtPyre_2F_Text_DezNotEnoughMons)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:109 MtPyre_2F_Text_LeahIntro (+1 aliases)
	.globl MtPyre_2F_Text_LeahIntro
MtPyre_2F_Text_LeahIntro: @ 0x08216542
	.string "みかけぬ かおね……\nなにも おきない うちに かえりなさい!{EOS}"
	.if (. - MtPyre_2F_Text_LeahIntro) > 0x20
	.error "MtPyre_2F_Text_LeahIntro may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_LeahIntro) < 0x20
	.space 0x20 - (. - MtPyre_2F_Text_LeahIntro)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:113 MtPyre_2F_Text_LeahDefeat (+1 aliases)
	.globl MtPyre_2F_Text_LeahDefeat
MtPyre_2F_Text_LeahDefeat: @ 0x08216562
	.string "むん…… てごわいのね{EOS}"
	.if (. - MtPyre_2F_Text_LeahDefeat) > 0xc
	.error "MtPyre_2F_Text_LeahDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_LeahDefeat) < 0xc
	.space 0xc - (. - MtPyre_2F_Text_LeahDefeat)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:117 MtPyre_2F_Text_LeahPostBattle
	.globl MtPyre_2F_Text_LeahPostBattle
MtPyre_2F_Text_LeahPostBattle: @ 0x0821656E
	.string "ひい おばあさまの だい から\nここで トレーナーを やっているの……\lこの やまを まもっていくわ……{EOS}"
	.if (. - MtPyre_2F_Text_LeahPostBattle) > 0x35
	.error "MtPyre_2F_Text_LeahPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_LeahPostBattle) < 0x35
	.space 0x35 - (. - MtPyre_2F_Text_LeahPostBattle)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:123 MtPyre_2F_Text_ZanderIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MtPyre_2F_Text_ZanderIntro
MtPyre_2F_Text_ZanderIntro: @ 0x082165A3
	.string "ぎっ ぎゃああああっ!\nでたあああっ!{EOS}"
	.if (. - MtPyre_2F_Text_ZanderIntro) != 0x14
	.error "MtPyre_2F_Text_ZanderIntro must retain its original byte length"
	.endif
	.globl gText_Rom_2165B2
	.set gText_Rom_2165B2, MtPyre_2F_Text_ZanderIntro + 0xf
	.globl gText_Rom_2165B3
	.set gText_Rom_2165B3, MtPyre_2F_Text_ZanderIntro + 0x10
	@ data/maps/MtPyre_2F/scripts.inc:127 MtPyre_2F_Text_ZanderDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MtPyre_2F_Text_ZanderDefeat
MtPyre_2F_Text_ZanderDefeat: @ 0x082165B7
	.string "ま まけたああああっ!{EOS}"
	.if (. - MtPyre_2F_Text_ZanderDefeat) != 0xc
	.error "MtPyre_2F_Text_ZanderDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_2165BE
	.set gText_Rom_2165BE, MtPyre_2F_Text_ZanderDefeat + 0x7
	.globl gText_Rom_2165BF
	.set gText_Rom_2165BF, MtPyre_2F_Text_ZanderDefeat + 0x8
	@ data/maps/MtPyre_2F/scripts.inc:131 MtPyre_2F_Text_ZanderPostBattle
	.globl MtPyre_2F_Text_ZanderPostBattle
MtPyre_2F_Text_ZanderPostBattle: @ 0x082165C3
	.string "な なにかが うごく たびに\nビクっと するよ\lここで しゅぎょう するんじゃ なかったよ{EOS}"
	.if (. - MtPyre_2F_Text_ZanderPostBattle) > 0x2e
	.error "MtPyre_2F_Text_ZanderPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_2F_Text_ZanderPostBattle) < 0x2e
	.space 0x2e - (. - MtPyre_2F_Text_ZanderPostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x2165F1, size 0x91
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x5C, 0x00, 0xEC, 0x00, 0x00, 0x00
	.4byte gText_Rom_216682 @ ROM pointer 0x08216682
	.4byte MtPyre_3F_Text_WilliamDefeat @ ROM pointer 0x082166BB
	.byte 0x0F, 0x00
	.4byte MtPyre_3F_Text_WilliamPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xF7, 0x00, 0x00, 0x00
	.4byte MtPyre_3F_Text_KaylaIntro
	.4byte MtPyre_3F_Text_KaylaDefeat
	.byte 0x0F, 0x00
	.4byte MtPyre_3F_Text_KaylaPostBattle
	.byte 0x09, 0x06, 0x02
	.byte 0x5C, 0x02, 0x09, 0x00, 0x00, 0x00
	.4byte MtPyre_3F_Text_GabrielleIntro
	.4byte MtPyre_3F_Text_GabrielleDefeat
	.byte 0x4C, 0x66
	.byte 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x6B, 0x66
	.byte 0x21, 0x08, 0x0F, 0x00
	.4byte MtPyre_3F_Text_GabriellePostBattle @ ROM pointer 0x0821677B
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte MtPyre_3F_Text_GabrielleRegister @ ROM pointer 0x082167D1
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0x09, 0x00, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x09, 0x00, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x05, 0x09, 0x00, 0x00, 0x00
	.4byte MtPyre_3F_Text_GabrielleRematchIntro @ ROM pointer 0x082167F8
	.4byte MtPyre_3F_Text_GabrielleRematchDefeat @ ROM pointer 0x08216815
	.byte 0x0F, 0x00, 0x2B, 0x68, 0x21, 0x08, 0x09, 0x06, 0x02
