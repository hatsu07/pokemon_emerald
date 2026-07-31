@------------------------------------------------------------------------------
@ Move descriptions
@ ROM: 0x0855C3BF - 0x0855CD9C
@------------------------------------------------------------------------------

@ src/data/items.h:12138 items_line_12138
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C3BF
gText_Rom_55C3BF: @ 0x0855C3BF
	.string "てきに だいダメージを\nあたえるが こうげきを\nうけると ひるんでしまう"
	.byte EOS
	.if (. - gText_Rom_55C3BF) != 0x25
	.error "gText_Rom_55C3BF must retain its original byte length"
	.endif
	.globl gText_Rom_55C3E0
	.set gText_Rom_55C3E0, gText_Rom_55C3BF + 0x21

	@ src/data/items.h:12152 items_line_12152
	.globl gText_Rom_55C3E4
gText_Rom_55C3E4: @ 0x0855C3E4
	.string "ながく するどい ツメで\nてきを ひっかけて\nこうげきする"
	.byte EOS
	.if (. - gText_Rom_55C3E4) > 0x1e
	.error "gText_Rom_55C3E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C3E4) < 0x1e
	.space 0x1e - (. - gText_Rom_55C3E4)
	.endif

	@ src/data/items.h:12166 items_line_12166
	.globl gText_Rom_55C402
gText_Rom_55C402: @ 0x0855C402
	.string "ちょうおんぱ こうげきで\nてきを こんらんさせる\nことがある"
	.byte EOS
	.if (. - gText_Rom_55C402) > 0x1f
	.error "gText_Rom_55C402 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C402) < 0x1f
	.space 0x1f - (. - gText_Rom_55C402)
	.endif

	@ src/data/items.h:12180 items_line_12180
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C421
gText_Rom_55C421: @ 0x0855C421
	.string "せいしんを しゅうちゅう\nさせて とくこうと\nとくぼうを あげる"
	.byte EOS
	.if (. - gText_Rom_55C421) != 0x21
	.error "gText_Rom_55C421 must retain its original byte length"
	.endif
	.globl gText_Rom_55C43E
	.set gText_Rom_55C43E, gText_Rom_55C421 + 0x1d

	@ src/data/items.h:12194 items_line_12194
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C442
gText_Rom_55C442: @ 0x0855C442
	.string "ほえて てきを にがす\nてきが にげると\nせんとうは おわる"
	.byte EOS
	.if (. - gText_Rom_55C442) != 0x1f
	.error "gText_Rom_55C442 must retain its original byte length"
	.endif
	.globl gText_Rom_55C45D
	.set gText_Rom_55C45D, gText_Rom_55C442 + 0x1b

	@ src/data/items.h:12208 items_line_12208
	.globl gText_Rom_55C461
gText_Rom_55C461: @ 0x0855C461
	.string "じょじょに ダメージが\nふえる もうどくを\nてきに あたえる"
	.byte EOS
	.if (. - gText_Rom_55C461) > 0x1f
	.error "gText_Rom_55C461 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C461) < 0x1f
	.space 0x1f - (. - gText_Rom_55C461)
	.endif

	@ src/data/items.h:12228 items_line_12228
	.globl gText_Rom_55C480
gText_Rom_55C480: @ 0x0855C480
	.string "あられを ふらして\nこおりタイプ いがいに\nダメージを あたえる"
	.byte EOS
	.if (. - gText_Rom_55C480) > 0x21
	.error "gText_Rom_55C480 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C480) < 0x21
	.space 0x21 - (. - gText_Rom_55C480)
	.endif

	@ src/data/items.h:12243 items_line_12243
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C4A1
gText_Rom_55C4A1: @ 0x0855C4A1
	.string "からだを きたえて\nこうげきと ぼうぎょの\nちからを あげる"
	.byte EOS
	.if (. - gText_Rom_55C4A1) != 0x1f
	.error "gText_Rom_55C4A1 must retain its original byte length"
	.endif
	.globl gText_Rom_55C4BC
	.set gText_Rom_55C4BC, gText_Rom_55C4A1 + 0x1b

	@ src/data/items.h:12257 items_line_12257
	.globl gText_Rom_55C4C0
gText_Rom_55C4C0: @ 0x0855C4C0
	.string "タネを 2ー5かい\nれんぞくで はっしゃして\nてきを こうげきする"
	.byte EOS
	.if (. - gText_Rom_55C4C0) > 0x22
	.error "gText_Rom_55C4C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C4C0) < 0x22
	.space 0x22 - (. - gText_Rom_55C4C0)
	.endif

	@ src/data/items.h:12271 items_line_12271
	.globl gText_Rom_55C4E2
gText_Rom_55C4E2: @ 0x0855C4E2
	.string "ポケモンによって てきに\nあたえる ダメージの\nりょうが へんかする"
	.byte EOS
	.if (. - gText_Rom_55C4E2) > 0x23
	.error "gText_Rom_55C4E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C4E2) < 0x23
	.space 0x23 - (. - gText_Rom_55C4E2)
	.endif

	@ src/data/items.h:12285 items_line_12285
	.globl gText_Rom_55C505
gText_Rom_55C505: @ 0x0855C505
	.string "5ターンの あいだ\nほのおタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55C505) > 0x1f
	.error "gText_Rom_55C505 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C505) < 0x1f
	.space 0x1f - (. - gText_Rom_55C505)
	.endif

	@ src/data/items.h:12299 items_line_12299
	.globl gText_Rom_55C524
gText_Rom_55C524: @ 0x0855C524
	.string "あいてを おこらせて\nこうげきわざ しか\nだせない ように する"
	.byte EOS
	.if (. - gText_Rom_55C524) > 0x21
	.error "gText_Rom_55C524 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C524) < 0x21
	.space 0x21 - (. - gText_Rom_55C524)
	.endif
	.incbin "baserom.gba", 0x55c545, 0x45

	@ src/data/items.h:12351 items_line_12351
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C58A
gText_Rom_55C58A: @ 0x0855C58A
	.string "ダメージは おおきいが\nつかうと つぎのターン\nうごけなく なってしまう"
	.byte EOS
	.if (. - gText_Rom_55C58A) != 0x25
	.error "gText_Rom_55C58A must retain its original byte length"
	.endif
	.globl gText_Rom_55C5AB
	.set gText_Rom_55C5AB, gText_Rom_55C58A + 0x21

	@ src/data/items.h:12365 items_line_12365
	.globl gText_Rom_55C5AF
gText_Rom_55C5AF: @ 0x0855C5AF
	.string "ひかりのかべを つくり\nとくこうの ダメージを\nよわめる"
	.byte EOS
	.if (. - gText_Rom_55C5AF) > 0x1d
	.error "gText_Rom_55C5AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C5AF) < 0x1d
	.space 0x1d - (. - gText_Rom_55C5AF)
	.endif

	@ src/data/items.h:12379 items_line_12379
	.globl gText_Rom_55C5CC
gText_Rom_55C5CC: @ 0x0855C5CC
	.string "そのターンの こうげきを\nうけないが れんぞくして\nだすと しっぱいしやすい"
	.byte EOS
	.if (. - gText_Rom_55C5CC) > 0x27
	.error "gText_Rom_55C5CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C5CC) < 0x27
	.space 0x27 - (. - gText_Rom_55C5CC)
	.endif

	@ src/data/items.h:12393 items_line_12393
	.globl gText_Rom_55C5F3
gText_Rom_55C5F3: @ 0x0855C5F3
	.string "5ターンの あいだ\nみずタイプの\nわざのいりょくが あがる"
	.byte EOS
	.if (. - gText_Rom_55C5F3) > 0x1e
	.error "gText_Rom_55C5F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C5F3) < 0x1e
	.space 0x1e - (. - gText_Rom_55C5F3)
	.endif

	@ src/data/items.h:12407 items_line_12407
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C611
gText_Rom_55C611: @ 0x0855C611
	.string "あたえた ダメージの\nはんぶんの たいりょくを\nかいふく できる"
	.byte EOS
	.if (. - gText_Rom_55C611) != 0x21
	.error "gText_Rom_55C611 must retain its original byte length"
	.endif
	.globl gText_Rom_55C62E
	.set gText_Rom_55C62E, gText_Rom_55C611 + 0x1d

	@ src/data/items.h:12421 items_line_12421
	.globl gText_Rom_55C632
gText_Rom_55C632: @ 0x0855C632
	.string "ふしぎな ちからに\nまもられて とくしゅ\nじょうたいに ならない"
	.byte EOS
	.if (. - gText_Rom_55C632) > 0x21
	.error "gText_Rom_55C632 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C632) < 0x21
	.space 0x21 - (. - gText_Rom_55C632)
	.endif

	@ src/data/items.h:12435 items_line_12435
	.globl gText_Rom_55C653
gText_Rom_55C653: @ 0x0855C653
	.string "ポケモンが なついて\nいないほど あたえる\nダメージが あがる"
	.byte EOS
	.if (. - gText_Rom_55C653) > 0x20
	.error "gText_Rom_55C653 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C653) < 0x20
	.space 0x20 - (. - gText_Rom_55C653)
	.endif

	@ src/data/items.h:12449 items_line_12449
	.globl gText_Rom_55C673
gText_Rom_55C673: @ 0x0855C673
	.string "1ターンめで ひかりを\nきゅうしゅうして つぎの\nターンに こうげきする"
	.byte EOS
	.if (. - gText_Rom_55C673) > 0x25
	.error "gText_Rom_55C673 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C673) < 0x25
	.space 0x25 - (. - gText_Rom_55C673)
	.endif

	@ src/data/items.h:12463 items_line_12463
	.globl gText_Rom_55C698
gText_Rom_55C698: @ 0x0855C698
	.string "かたいシッポで こうげき\nてきの ぼうぎょを\nさげる ことがある"
	.byte EOS
	.if (. - gText_Rom_55C698) > 0x21
	.error "gText_Rom_55C698 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C698) < 0x21
	.space 0x21 - (. - gText_Rom_55C698)
	.endif

	@ src/data/items.h:12477 items_line_12477
	.globl gText_Rom_55C6B9
gText_Rom_55C6B9: @ 0x0855C6B9
	.string "でんげきを あびせる\nあたった てきを\nまひさせる ことがある"
	.byte EOS
	.if (. - gText_Rom_55C6B9) > 0x20
	.error "gText_Rom_55C6B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C6B9) < 0x20
	.space 0x20 - (. - gText_Rom_55C6B9)
	.endif

	@ src/data/items.h:12491 items_line_12491
	.globl gText_Rom_55C6D9
gText_Rom_55C6D9: @ 0x0855C6D9
	.string "かみなりを おとす\nあたった てきを\nまひさせる ことがある"
	.byte EOS
	.if (. - gText_Rom_55C6D9) > 0x1f
	.error "gText_Rom_55C6D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C6D9) < 0x1f
	.space 0x1f - (. - gText_Rom_55C6D9)
	.endif

	@ src/data/items.h:12505 items_line_12505
	.globl gText_Rom_55C6F8
gText_Rom_55C6F8: @ 0x0855C6F8
	.string "じめんを つよく ゆらす\nとんでいる てきいがいに\nだいダメージを あたえる"
	.byte EOS
	.if (. - gText_Rom_55C6F8) > 0x27
	.error "gText_Rom_55C6F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C6F8) < 0x27
	.space 0x27 - (. - gText_Rom_55C6F8)
	.endif

	@ src/data/items.h:12519 items_line_12519
	.globl gText_Rom_55C71F
gText_Rom_55C71F: @ 0x0855C71F
	.string "ポケモンが なついて\nいるほど あたえる\nダメージが あがる"
	.byte EOS
	.if (. - gText_Rom_55C71F) > 0x1f
	.error "gText_Rom_55C71F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C71F) < 0x1f
	.space 0x1f - (. - gText_Rom_55C71F)
	.endif

	@ src/data/items.h:12533 items_line_12533
	.globl gText_Rom_55C73E
gText_Rom_55C73E: @ 0x0855C73E
	.string "1ターンめで じめんに\nもぐり つぎのターンに\nてきを こうげきする"
	.byte EOS
	.if (. - gText_Rom_55C73E) > 0x23
	.error "gText_Rom_55C73E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C73E) < 0x23
	.space 0x23 - (. - gText_Rom_55C73E)
	.endif

	@ src/data/items.h:12547 items_line_12547
	.globl gText_Rom_55C761
gText_Rom_55C761: @ 0x0855C761
	.string "つよい ねんりきを だす\nてきの とくぼうを\nさげる ことがある"
	.byte EOS
	.if (. - gText_Rom_55C761) > 0x21
	.error "gText_Rom_55C761 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C761) < 0x21
	.space 0x21 - (. - gText_Rom_55C761)
	.endif

	@ src/data/items.h:12561 items_line_12561
	.globl gText_Rom_55C782
gText_Rom_55C782: @ 0x0855C782
	.string "くろいかたまりを なげる\nてきの とくぼうを\nさげる ことがある"
	.byte EOS
	.if (. - gText_Rom_55C782) > 0x21
	.error "gText_Rom_55C782 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C782) < 0x21
	.space 0x21 - (. - gText_Rom_55C782)
	.endif
	.incbin "baserom.gba", 0x55c7a3, 0x1f

	@ src/data/easy_chat/easy_chat_group_actions.h:454 easy_chat_group_actions_line_454
	.globl gText_Rom_55C7C2
gText_Rom_55C7C2: @ 0x0855C7C2
	.string "られる"
	.byte EOS
	.if (. - gText_Rom_55C7C2) > 0x4
	.error "gText_Rom_55C7C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C7C2) < 0x4
	.space 0x4 - (. - gText_Rom_55C7C2)
	.endif

	@ src/data/items.h:12589 items_line_12589
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C7C6
gText_Rom_55C7C6: @ 0x0855C7C6
	.string "ぶんしんを つくって\nてきを まどわせて\nかいひりつを あげる"
	.byte EOS
	.if (. - gText_Rom_55C7C6) != 0x20
	.error "gText_Rom_55C7C6 must retain its original byte length"
	.endif
	.globl gText_Rom_55C7E2
	.set gText_Rom_55C7E2, gText_Rom_55C7C6 + 0x1c

	@ src/data/items.h:12603 items_line_12603
	.globl gText_Rom_55C7E6
gText_Rom_55C7E6: @ 0x0855C7E6
	.string "ひかりのかべを つくり\nぶつり こうげきの\nダメージを よわめる"
	.byte EOS
	.if (. - gText_Rom_55C7E6) > 0x21
	.error "gText_Rom_55C7E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C7E6) < 0x21
	.space 0x21 - (. - gText_Rom_55C7E6)
	.endif
	.incbin "baserom.gba", 0x55c807, 0x22

	@ src/data/items.h:12631 items_line_12631
	.globl gText_Rom_55C829
gText_Rom_55C829: @ 0x0855C829
	.string "ほのおを まきちらす\nあたった てきを\nやけどさせる ことがある"
	.byte EOS
	.if (. - gText_Rom_55C829) > 0x21
	.error "gText_Rom_55C829 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C829) < 0x21
	.space 0x21 - (. - gText_Rom_55C829)
	.endif

	@ src/data/items.h:12645 items_line_12645
	.globl gText_Rom_55C84A
gText_Rom_55C84A: @ 0x0855C84A
	.string "ヘドロを なげつける\nあたった てきに どくを\nあたえることが ある"
	.byte EOS
	.if (. - gText_Rom_55C84A) > 0x23
	.error "gText_Rom_55C84A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C84A) < 0x23
	.space 0x23 - (. - gText_Rom_55C84A)
	.endif

	@ src/data/items.h:12659 items_line_12659
	.globl gText_Rom_55C86D
gText_Rom_55C86D: @ 0x0855C86D
	.string "すなあらしを おこして\nまいターン てきに\nダメージを あたえる"
	.byte EOS
	.if (. - gText_Rom_55C86D) > 0x21
	.error "gText_Rom_55C86D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C86D) < 0x21
	.space 0x21 - (. - gText_Rom_55C86D)
	.endif

	@ src/data/items.h:12673 items_line_12673
	.globl gText_Rom_55C88E
gText_Rom_55C88E: @ 0x0855C88E
	.string "だいの もじで すべてを\nやきつくす こうげき\nやけどさせる ことがある"
	.byte EOS
	.if (. - gText_Rom_55C88E) > 0x25
	.error "gText_Rom_55C88E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C88E) < 0x25
	.space 0x25 - (. - gText_Rom_55C88E)
	.endif

	@ src/data/items.h:12687 items_line_12687
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C8B3
gText_Rom_55C8B3: @ 0x0855C8B3
	.string "いわで てきの うごきを\nふうじて こうげき\nすばやさを さげられる"
	.byte EOS
	.if (. - gText_Rom_55C8B3) != 0x23
	.error "gText_Rom_55C8B3 must retain its original byte length"
	.endif
	.globl gText_Rom_55C8D2
	.set gText_Rom_55C8D2, gText_Rom_55C8B3 + 0x1f
	.incbin "baserom.gba", 0x55c8d6, 0x21

	@ src/data/items.h:12715 items_line_12715
	.globl gText_Rom_55C8F7
gText_Rom_55C8F7: @ 0x0855C8F7
	.string "てきが おなじわざを\nれんぞくで だせない\nようにする"
	.byte EOS
	.if (. - gText_Rom_55C8F7) > 0x1c
	.error "gText_Rom_55C8F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C8F7) < 0x1c
	.space 0x1c - (. - gText_Rom_55C8F7)
	.endif

	@ src/data/items.h:12729 items_line_12729
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C913
gText_Rom_55C913: @ 0x0855C913
	.string "どく まひ やけどのとき\nこうげきの ちからを\nあげる ことが できる"
	.byte EOS
	.if (. - gText_Rom_55C913) != 0x24
	.error "gText_Rom_55C913 must retain its original byte length"
	.endif
	.globl gText_Rom_55C933
	.set gText_Rom_55C933, gText_Rom_55C913 + 0x20

	@ src/data/items.h:12743 items_line_12743
	.globl gText_Rom_55C937
gText_Rom_55C937: @ 0x0855C937
	.string "たたかう ばしょに より\nてきに あたえる\nついか こうかが かわる"
	.byte EOS
	.if (. - gText_Rom_55C937) > 0x23
	.error "gText_Rom_55C937 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C937) < 0x23
	.space 0x23 - (. - gText_Rom_55C937)
	.endif

	@ src/data/items.h:12757 items_line_12757
	.globl gText_Rom_55C95A
gText_Rom_55C95A: @ 0x0855C95A
	.string "2ターンねむり からだの\nいじょうと たいりょくを\nぜんかいふく する"
	.byte EOS
	.if (. - gText_Rom_55C95A) > 0x24
	.error "gText_Rom_55C95A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C95A) < 0x24
	.space 0x24 - (. - gText_Rom_55C95A)
	.endif

	@ src/data/items.h:12771 items_line_12771
	.globl gText_Rom_55C97E
gText_Rom_55C97E: @ 0x0855C97E
	.string "オスなら メスに\nメスなら オスに\nわざが だしにくくなる"
	.byte EOS
	.if (. - gText_Rom_55C97E) > 0x1e
	.error "gText_Rom_55C97E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C97E) < 0x1e
	.space 0x1e - (. - gText_Rom_55C97E)
	.endif

	@ src/data/items.h:12785 items_line_12785
	.globl gText_Rom_55C99C
gText_Rom_55C99C: @ 0x0855C99C
	.string "こうげきちゅうに すきを\nみて てきが もっている\nどうぐを ぬすむ"
	.byte EOS
	.if (. - gText_Rom_55C99C) > 0x23
	.error "gText_Rom_55C99C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C99C) < 0x23
	.space 0x23 - (. - gText_Rom_55C99C)
	.endif

	@ src/data/items.h:12799 items_line_12799
	.globl gText_Rom_55C9BF
gText_Rom_55C9BF: @ 0x0855C9BF
	.string "かたいつばさを おおきく\nひろげて そのまま\nてきに たいあたりする"
	.byte EOS
	.if (. - gText_Rom_55C9BF) > 0x23
	.error "gText_Rom_55C9BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C9BF) < 0x23
	.space 0x23 - (. - gText_Rom_55C9BF)
	.endif

	@ src/data/items.h:12813 items_line_12813
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C9E2
gText_Rom_55C9E2: @ 0x0855C9E2
	.string "わざを だした ターンに\nじぶんと てきの\nとくせいを いれかえる"
	.byte EOS
	.if (. - gText_Rom_55C9E2) != 0x22
	.error "gText_Rom_55C9E2 must retain its original byte length"
	.endif
	.globl gText_Rom_55C9FE
	.set gText_Rom_55C9FE, gText_Rom_55C9E2 + 0x1c
	.globl gText_Rom_55CA00
	.set gText_Rom_55CA00, gText_Rom_55C9E2 + 0x1e

	@ src/data/items.h:12827 items_line_12827
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CA04
gText_Rom_55CA04: @ 0x0855CA04
	.string "てきが つかおうとした\nわざを うばって\nじぶんに つかう"
	.byte EOS
	.if (. - gText_Rom_55CA04) != 0x1e
	.error "gText_Rom_55CA04 must retain its original byte length"
	.endif
	.globl gText_Rom_55CA1E
	.set gText_Rom_55CA1E, gText_Rom_55CA04 + 0x1a

	@ src/data/items.h:12841 items_line_12841
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CA22
gText_Rom_55CA22: @ 0x0855CA22
	.string "フルパワーで こうげき\nできるが とくこうが\nガクッと さがってしまう"
	.byte EOS
	.if (. - gText_Rom_55CA22) != 0x24
	.error "gText_Rom_55CA22 must retain its original byte length"
	.endif
	.globl gText_Rom_55CA42
	.set gText_Rom_55CA42, gText_Rom_55CA22 + 0x20

	@ src/data/items.h:13405 items_line_13405
	.globl gText_Rom_55CA46
gText_Rom_55CA46: @ 0x0855CA46
	.string "カマや ツメなどの\nするどいもので てきを\nきりつけて こうげきする"
	.byte EOS
	.if (. - gText_Rom_55CA46) > 0x23
	.error "gText_Rom_55CA46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CA46) < 0x23
	.space 0x23 - (. - gText_Rom_55CA46)
	.endif

	@ src/data/items.h:13419 items_line_13419
	.globl gText_Rom_55CA69
gText_Rom_55CA69: @ 0x0855CA69
	.string "1ターンめで そらへとび\nつぎの ターンに てきを\nこうげきする"
	.byte EOS
	.if (. - gText_Rom_55CA69) > 0x21
	.error "gText_Rom_55CA69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CA69) < 0x21
	.space 0x21 - (. - gText_Rom_55CA69)
	.endif

	@ src/data/items.h:13433 items_line_13433
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CA8A
gText_Rom_55CA8A: @ 0x0855CA8A
	.string "みずに なみを おこし\nそれを ものすごい\nちからで たたきつける"
	.byte EOS
	.if (. - gText_Rom_55CA8A) != 0x22
	.error "gText_Rom_55CA8A must retain its original byte length"
	.endif
	.globl gText_Rom_55CAA5
	.set gText_Rom_55CAA5, gText_Rom_55CA8A + 0x1b

	@ src/data/items.h:13447 items_line_13447
	.globl gText_Rom_55CAAC
gText_Rom_55CAAC: @ 0x0855CAAC
	.string "ぜんしんに ものすごい\nちからを ためこみ\nてきを こうげきする"
	.byte EOS
	.if (. - gText_Rom_55CAAC) > 0x21
	.error "gText_Rom_55CAAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CAAC) < 0x21
	.space 0x21 - (. - gText_Rom_55CAAC)
	.endif

	@ src/data/items.h:13461 items_line_13461
	.globl gText_Rom_55CACD
gText_Rom_55CACD: @ 0x0855CACD
	.string "つよい ひかりで めを\nくらませて てきの\nめいちゅうりつを さげる"
	.byte EOS
	.if (. - gText_Rom_55CACD) > 0x23
	.error "gText_Rom_55CACD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CACD) < 0x23
	.space 0x23 - (. - gText_Rom_55CACD)
	.endif

	@ src/data/items.h:13475 items_line_13475
	.globl gText_Rom_55CAF0
gText_Rom_55CAF0: @ 0x0855CAF0
	.string "いわをもくだく ちからで\nてきの ぼうぎょを\nさげる ことがある"
	.byte EOS
	.if (. - gText_Rom_55CAF0) > 0x21
	.error "gText_Rom_55CAF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CAF0) < 0x21
	.space 0x21 - (. - gText_Rom_55CAF0)
	.endif

	@ src/data/items.h:13489 items_line_13489
	.globl gText_Rom_55CB11
gText_Rom_55CB11: @ 0x0855CB11
	.string "たきを さかのぼるような\nいきおいで てきに\nとっしんする"
	.byte EOS
	.if (. - gText_Rom_55CB11) > 0x1e
	.error "gText_Rom_55CB11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CB11) < 0x1e
	.space 0x1e - (. - gText_Rom_55CB11)
	.endif
	.incbin "baserom.gba", 0x55cb2f, 0x23
