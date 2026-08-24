	@ data/maps/MtPyre_2F/scripts.inc:45 MtPyre_2F_Text_MemoriesOfSkitty
	.globl gText_Rom_2162D8
gText_Rom_2162D8: @ 0x082162D8
	.string "かわいかった エネコとの おもいで……\nおもいだすだけで なみだが あふれる……{EOS}"
	.if (. - gText_Rom_2162D8) > 0x29
	.error "gText_Rom_2162D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2162D8) < 0x29
	.space 0x29 - (. - gText_Rom_2162D8)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:49 MtPyre_2F_Text_TumbledFromFloorAbove
	.globl gText_Rom_216301
gText_Rom_216301: @ 0x08216301
	.string "アイタタタ…… ゆかの そこかしこに\nあなが あいているのに きづかないで\lおじさん うえから おちてしまったよ{EOS}"
	.if (. - gText_Rom_216301) > 0x39
	.error "gText_Rom_216301 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216301) < 0x39
	.space 0x39 - (. - gText_Rom_216301)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:55 MtPyre_2F_Text_MarkIntro (+1 aliases)
	.globl gText_Rom_21633A
gText_Rom_21633A: @ 0x0821633A
	.string "おまえも ポケモン さがしに きたのか?\nあとから きた くせに なまいきだ!{EOS}"
	.if (. - gText_Rom_21633A) > 0x28
	.error "gText_Rom_21633A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21633A) < 0x28
	.space 0x28 - (. - gText_Rom_21633A)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:59 MtPyre_2F_Text_MarkDefeat (+1 aliases)
	.globl gText_Rom_216362
gText_Rom_216362: @ 0x08216362
	.string "ふええええええっ!\nゆるして くださいーっ!{EOS}"
	.if (. - gText_Rom_216362) > 0x17
	.error "gText_Rom_216362 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216362) < 0x17
	.space 0x17 - (. - gText_Rom_216362)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:63 MtPyre_2F_Text_MarkPostBattle
	.globl gText_Rom_216379
gText_Rom_216379: @ 0x08216379
	.string "めったに ひとが はいらない やま だから\nめずらしい ポケモンが いると おもってさ{EOS}"
	.if (. - gText_Rom_216379) > 0x2c
	.error "gText_Rom_216379 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216379) < 0x2c
	.space 0x2c - (. - gText_Rom_216379)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:67 MtPyre_2F_Text_LukeIntro (+1 aliases)
	.globl gText_Rom_2163A5
gText_Rom_2163A5: @ 0x082163A5
	.string "テル『きもだめし するんだ!\nぼくの かっこいい ところ みれば\lかのじょ もっと ほれるからね!\pそうだ! きみを たおして\nかっこいい ところ みせちゃおう!{EOS}"
	.if (. - gText_Rom_2163A5) > 0x52
	.error "gText_Rom_2163A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2163A5) < 0x52
	.space 0x52 - (. - gText_Rom_2163A5)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:74 MtPyre_2F_Text_LukeDefeat (+1 aliases)
	.globl gText_Rom_2163F7
gText_Rom_2163F7: @ 0x082163F7
	.string "テル『あっちゃー{EOS}"
	.if (. - gText_Rom_2163F7) > 0x9
	.error "gText_Rom_2163F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2163F7) < 0x9
	.space 0x9 - (. - gText_Rom_2163F7)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:77 MtPyre_2F_Text_LukePostBattle
	.globl gText_Rom_216400
gText_Rom_216400: @ 0x08216400
	.string "テル『まけちゃったけど だいじょうぶ!\nぼくが いるからさ\lきもだめし なんて へっちゃら だよ!{EOS}"
	.if (. - gText_Rom_216400) > 0x32
	.error "gText_Rom_216400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216400) < 0x32
	.space 0x32 - (. - gText_Rom_216400)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:82 MtPyre_2F_Text_LukeNotEnoughMons (+1 aliases)
	.globl gText_Rom_216432
gText_Rom_216432: @ 0x08216432
	.string "テル『ぼくと しょうぶ するなら\nもっと ポケモン つれてきなよ!\pそうでないと かのじょの まえで\nいいところ みせられない じゃないか!{EOS}"
	.if (. - gText_Rom_216432) > 0x47
	.error "gText_Rom_216432 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216432) < 0x47
	.space 0x47 - (. - gText_Rom_216432)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:88 MtPyre_2F_Text_DezIntro (+1 aliases)
	.globl gText_Rom_216479
gText_Rom_216479: @ 0x08216479
	.string "マコ『かれしと きもだめしに きたの\nすっごく こわいけど\lかれしが いるから だいじょうぶ!\pそうだ! あなたを たおす\nかれしの かっこいい ところ みせて!{EOS}"
	.if (. - gText_Rom_216479) > 0x52
	.error "gText_Rom_216479 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216479) < 0x52
	.space 0x52 - (. - gText_Rom_216479)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:96 MtPyre_2F_Text_DezDefeat (+1 aliases)
	.globl gText_Rom_2164CB
gText_Rom_2164CB: @ 0x082164CB
	.string "マコ『あーん こわーい!{EOS}"
	.if (. - gText_Rom_2164CB) > 0xd
	.error "gText_Rom_2164CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2164CB) < 0xd
	.space 0xd - (. - gText_Rom_2164CB)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:99 MtPyre_2F_Text_DezPostBattle
	.globl gText_Rom_2164D8
gText_Rom_2164D8: @ 0x082164D8
	.string "マコ『あたしたち ラブラブだから\nまけても へいき なんだもん!{EOS}"
	.if (. - gText_Rom_2164D8) > 0x21
	.error "gText_Rom_2164D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2164D8) < 0x21
	.space 0x21 - (. - gText_Rom_2164D8)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:103 MtPyre_2F_Text_DezNotEnoughMons (+1 aliases)
	.globl gText_Rom_2164F9
gText_Rom_2164F9: @ 0x082164F9
	.string "マコ『あたしたちと たたかいたいなら\nせめて 2ひきは ポケモン いないと\pあたしの かれし つよいんだから\nいっぴきじゃ はなしに ならないわ{EOS}"
	.if (. - gText_Rom_2164F9) > 0x49
	.error "gText_Rom_2164F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2164F9) < 0x49
	.space 0x49 - (. - gText_Rom_2164F9)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:109 MtPyre_2F_Text_LeahIntro (+1 aliases)
	.globl gText_Rom_216542
gText_Rom_216542: @ 0x08216542
	.string "みかけぬ かおね……\nなにも おきない うちに かえりなさい!{EOS}"
	.if (. - gText_Rom_216542) > 0x20
	.error "gText_Rom_216542 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216542) < 0x20
	.space 0x20 - (. - gText_Rom_216542)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:113 MtPyre_2F_Text_LeahDefeat (+1 aliases)
	.globl gText_Rom_216562
gText_Rom_216562: @ 0x08216562
	.string "むん…… てごわいのね{EOS}"
	.if (. - gText_Rom_216562) > 0xc
	.error "gText_Rom_216562 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216562) < 0xc
	.space 0xc - (. - gText_Rom_216562)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:117 MtPyre_2F_Text_LeahPostBattle
	.globl gText_Rom_21656E
gText_Rom_21656E: @ 0x0821656E
	.string "ひい おばあさまの だい から\nここで トレーナーを やっているの……\lこの やまを まもっていくわ……{EOS}"
	.if (. - gText_Rom_21656E) > 0x35
	.error "gText_Rom_21656E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21656E) < 0x35
	.space 0x35 - (. - gText_Rom_21656E)
	.endif
	@ data/maps/MtPyre_2F/scripts.inc:123 MtPyre_2F_Text_ZanderIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2165A3
gText_Rom_2165A3: @ 0x082165A3
	.string "ぎっ ぎゃああああっ!\nでたあああっ!{EOS}"
	.if (. - gText_Rom_2165A3) != 0x14
	.error "gText_Rom_2165A3 must retain its original byte length"
	.endif
	.globl gText_Rom_2165B2
	.set gText_Rom_2165B2, gText_Rom_2165A3 + 0xf
	.globl gText_Rom_2165B3
	.set gText_Rom_2165B3, gText_Rom_2165A3 + 0x10
	@ data/maps/MtPyre_2F/scripts.inc:127 MtPyre_2F_Text_ZanderDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2165B7
gText_Rom_2165B7: @ 0x082165B7
	.string "ま まけたああああっ!{EOS}"
	.if (. - gText_Rom_2165B7) != 0xc
	.error "gText_Rom_2165B7 must retain its original byte length"
	.endif
	.globl gText_Rom_2165BE
	.set gText_Rom_2165BE, gText_Rom_2165B7 + 0x7
	.globl gText_Rom_2165BF
	.set gText_Rom_2165BF, gText_Rom_2165B7 + 0x8
	@ data/maps/MtPyre_2F/scripts.inc:131 MtPyre_2F_Text_ZanderPostBattle
	.globl gText_Rom_2165C3
gText_Rom_2165C3: @ 0x082165C3
	.string "な なにかが うごく たびに\nビクっと するよ\lここで しゅぎょう するんじゃ なかったよ{EOS}"
	.if (. - gText_Rom_2165C3) > 0x2e
	.error "gText_Rom_2165C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2165C3) < 0x2e
	.space 0x2e - (. - gText_Rom_2165C3)
	.endif
	@ Embedded ROM bytes: file offset 0x2165F1, size 0x91
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x5C, 0x00, 0xEC, 0x00, 0x00, 0x00
	.4byte gText_Rom_216682 @ ROM pointer 0x08216682
	.4byte gText_Rom_2166BB @ ROM pointer 0x082166BB
	.byte 0x0F, 0x00, 0xC5, 0x66, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0xF7, 0x00, 0x00, 0x00, 0xEA
	.byte 0x66, 0x21, 0x08, 0x15, 0x67, 0x21, 0x08, 0x0F, 0x00, 0x23, 0x67, 0x21, 0x08, 0x09, 0x06, 0x02
	.byte 0x5C, 0x02, 0x09, 0x00, 0x00, 0x00, 0x53, 0x67, 0x21, 0x08, 0x62, 0x67, 0x21, 0x08, 0x4C, 0x66
	.byte 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x6B, 0x66
	.byte 0x21, 0x08, 0x0F, 0x00
	.4byte gText_Rom_21677B @ ROM pointer 0x0821677B
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte gText_Rom_2167D1 @ ROM pointer 0x082167D1
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0x09, 0x00, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x09, 0x00, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x05, 0x09, 0x00, 0x00, 0x00
	.4byte gText_Rom_2167F8 @ ROM pointer 0x082167F8
	.4byte gText_Rom_216815 @ ROM pointer 0x08216815
	.byte 0x0F, 0x00, 0x2B, 0x68, 0x21, 0x08, 0x09, 0x06, 0x02
