	@ src/data/easy_chat/easy_chat_group_trainer.h:124 easy_chat_group_trainer_line_124 (+2 aliases)
	.globl gText_Rom_574780
gText_Rom_574780: @ 0x08574780
	.string "グリーン$"
	.if (. - gText_Rom_574780) > 0x5
	.error "gText_Rom_574780 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574780) < 0x5
	.space 0x5 - (. - gText_Rom_574780)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:130 easy_chat_group_trainer_line_130 (+2 aliases)
	.globl gText_Rom_574785
gText_Rom_574785: @ 0x08574785
	.string "バッグ$"
	.if (. - gText_Rom_574785) > 0x4
	.error "gText_Rom_574785 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574785) < 0x4
	.space 0x4 - (. - gText_Rom_574785)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:136 easy_chat_group_trainer_line_136
	.globl gText_Rom_574789
gText_Rom_574789: @ 0x08574789
	.string "ファイア$"
	.if (. - gText_Rom_574789) > 0x5
	.error "gText_Rom_574789 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574789) < 0x5
	.space 0x5 - (. - gText_Rom_574789)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:142 easy_chat_group_trainer_line_142 (+1 aliases)
	.globl gText_Rom_57478E
gText_Rom_57478E: @ 0x0857478E
	.string "みどり$"
	.if (. - gText_Rom_57478E) > 0x4
	.error "gText_Rom_57478E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57478E) < 0x4
	.space 0x4 - (. - gText_Rom_57478E)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:148 easy_chat_group_trainer_line_148 (+3 aliases)
	.globl gText_Rom_574792
gText_Rom_574792: @ 0x08574792
	.string "リーフ$"
	.if (. - gText_Rom_574792) > 0x4
	.error "gText_Rom_574792 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574792) < 0x4
	.space 0x4 - (. - gText_Rom_574792)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:154 easy_chat_group_trainer_line_154 (+4 aliases)
	.globl gText_Rom_574796
gText_Rom_574796: @ 0x08574796
	.string "レッド$"
	.if (. - gText_Rom_574796) > 0x4
	.error "gText_Rom_574796 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574796) < 0x4
	.space 0x4 - (. - gText_Rom_574796)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:160 easy_chat_group_trainer_line_160 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57479A
gText_Rom_57479A: @ 0x0857479A
	.string "エメラルド$"
	.if (. - gText_Rom_57479A) != 0x6
	.error "gText_Rom_57479A must retain its original byte length"
	.endif
	.globl gText_Rom_57479C
	.set gText_Rom_57479C, gText_Rom_57479A + 0x2
	.incbin "baserom.gba", 0x5747a0, 0x147

	@ src/data/abilities.h:14 abilities_line_14 (+1 aliases)
	.globl gText_Rom_5748E7
gText_Rom_5748E7: @ 0x085748E7
	.string "あくしゅう$"
	.if (. - gText_Rom_5748E7) > 0x6
	.error "gText_Rom_5748E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5748E7) < 0x6
	.space 0x6 - (. - gText_Rom_5748E7)
	.endif

	@ src/data/abilities.h:363 abilities_line_363 (+1 aliases)
	.globl gText_Rom_5748ED
gText_Rom_5748ED: @ 0x085748ED
	.string "あついしぼう$"
	.if (. - gText_Rom_5748ED) > 0x7
	.error "gText_Rom_5748ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5748ED) < 0x7
	.space 0x7 - (. - gText_Rom_5748ED)
	.endif

	@ src/data/abilities.h:342 abilities_line_342 (+1 aliases)
	.globl gText_Rom_5748F4
gText_Rom_5748F4: @ 0x085748F4
	.string "あめうけざら$"
	.if (. - gText_Rom_5748F4) > 0x7
	.error "gText_Rom_5748F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5748F4) < 0x7
	.space 0x7 - (. - gText_Rom_5748F4)
	.endif

	@ src/data/abilities.h:21 abilities_line_21 (+1 aliases)
	.globl gText_Rom_5748FB
gText_Rom_5748FB: @ 0x085748FB
	.string "あめふらし$"
	.if (. - gText_Rom_5748FB) > 0x6
	.error "gText_Rom_5748FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5748FB) < 0x6
	.space 0x6 - (. - gText_Rom_5748FB)
	.endif

	@ src/data/abilities.h:540 abilities_line_540 (+1 aliases)
	.globl gText_Rom_574901
gText_Rom_574901: @ 0x08574901
	.string "ありじごく$"
	.if (. - gText_Rom_574901) > 0x6
	.error "gText_Rom_574901 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574901) < 0x6
	.space 0x6 - (. - gText_Rom_574901)
	.endif

	@ src/data/abilities.h:175 abilities_line_175 (+1 aliases)
	.globl gText_Rom_574907
gText_Rom_574907: @ 0x08574907
	.string "いかく$"
	.if (. - gText_Rom_574907) > 0x4
	.error "gText_Rom_574907 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574907) < 0x4
	.space 0x4 - (. - gText_Rom_574907)
	.endif

	@ src/data/abilities.h:526 abilities_line_526 (+1 aliases)
	.globl gText_Rom_57490B
gText_Rom_57490B: @ 0x0857490B
	.string "いしあたま$"
	.if (. - gText_Rom_57490B) > 0x6
	.error "gText_Rom_57490B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57490B) < 0x6
	.space 0x6 - (. - gText_Rom_57490B)
	.endif
	.incbin "baserom.gba", 0x574911, 0x3

	@ src/data/easy_chat/easy_chat_group_status.h:58 easy_chat_group_status_line_58
	.globl gText_Rom_574914
gText_Rom_574914: @ 0x08574914
	.string "いろちがい$"
	.if (. - gText_Rom_574914) > 0x6
	.error "gText_Rom_574914 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574914) < 0x6
	.space 0x6 - (. - gText_Rom_574914)
	.endif
	.incbin "baserom.gba", 0x57491a, 0x3

	@ src/data/easy_chat/easy_chat_group_status.h:70 easy_chat_group_status_line_70
	.globl gText_Rom_57491D
gText_Rom_57491D: @ 0x0857491D
	.string "うつくしい$"
	.if (. - gText_Rom_57491D) > 0x6
	.error "gText_Rom_57491D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57491D) < 0x6
	.space 0x6 - (. - gText_Rom_57491D)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:76 easy_chat_group_status_line_76 (+2 aliases)
	.globl gText_Rom_574923
gText_Rom_574923: @ 0x08574923
	.string "うつくしさ$"
	.if (. - gText_Rom_574923) > 0x6
	.error "gText_Rom_574923 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574923) < 0x6
	.space 0x6 - (. - gText_Rom_574923)
	.endif

	@ src/data/abilities.h:578 abilities_line_578 (+1 aliases)
	.globl gText_Rom_574929
gText_Rom_574929: @ 0x08574929
	.string "エアロック$"
	.if (. - gText_Rom_574929) > 0x6
	.error "gText_Rom_574929 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574929) < 0x6
	.space 0x6 - (. - gText_Rom_574929)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:88 easy_chat_group_status_line_88 (+1 aliases)
	.globl gText_Rom_57492F
gText_Rom_57492F: @ 0x0857492F
	.string "エスパー$"
	.if (. - gText_Rom_57492F) > 0x5
	.error "gText_Rom_57492F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57492F) < 0x5
	.space 0x5 - (. - gText_Rom_57492F)
	.endif

	@ src/data/abilities.h:400 abilities_line_400 (+1 aliases)
	.globl gText_Rom_574934
gText_Rom_574934: @ 0x08574934
	.string "かいりきバサミ$"
	.if (. - gText_Rom_574934) > 0x8
	.error "gText_Rom_574934 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574934) < 0x8
	.space 0x8 - (. - gText_Rom_574934)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:100 easy_chat_group_status_line_100 (+1 aliases)
	.globl gText_Rom_57493C
gText_Rom_57493C: @ 0x0857493C
	.string "かくとう$"
	.if (. - gText_Rom_57493C) > 0x5
	.error "gText_Rom_57493C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57493C) < 0x5
	.space 0x5 - (. - gText_Rom_57493C)
	.endif

	@ src/data/abilities.h:182 abilities_line_182 (+1 aliases)
	.globl gText_Rom_574941
gText_Rom_574941: @ 0x08574941
	.string "かげふみ$"
	.if (. - gText_Rom_574941) > 0x5
	.error "gText_Rom_574941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574941) < 0x5
	.space 0x5 - (. - gText_Rom_574941)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:112 easy_chat_group_status_line_112
	.globl gText_Rom_574946
gText_Rom_574946: @ 0x08574946
	.string "かしこい$"
	.if (. - gText_Rom_574946) > 0x5
	.error "gText_Rom_574946 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574946) < 0x5
	.space 0x5 - (. - gText_Rom_574946)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:118 easy_chat_group_status_line_118 (+2 aliases)
	.globl gText_Rom_57494B
gText_Rom_57494B: @ 0x0857494B
	.string "かしこさ$"
	.if (. - gText_Rom_57494B) > 0x5
	.error "gText_Rom_57494B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57494B) < 0x5
	.space 0x5 - (. - gText_Rom_57494B)
	.endif

	@ src/data/abilities.h:28 abilities_line_28 (+1 aliases)
	.globl gText_Rom_574950
gText_Rom_574950: @ 0x08574950
	.string "かそく$"
	.if (. - gText_Rom_574950) > 0x4
	.error "gText_Rom_574950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574950) < 0x4
	.space 0x4 - (. - gText_Rom_574950)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:130 easy_chat_group_status_line_130
	.globl gText_Rom_574954
gText_Rom_574954: @ 0x08574954
	.string "かっこいい$"
	.if (. - gText_Rom_574954) > 0x6
	.error "gText_Rom_574954 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574954) < 0x6
	.space 0x6 - (. - gText_Rom_574954)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:136 easy_chat_group_status_line_136 (+2 aliases)
	.globl gText_Rom_57495A
gText_Rom_57495A: @ 0x0857495A
	.string "かっこよさ$"
	.if (. - gText_Rom_57495A) > 0x6
	.error "gText_Rom_57495A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57495A) < 0x6
	.space 0x6 - (. - gText_Rom_57495A)
	.endif

	@ src/data/abilities.h:35 abilities_line_35 (+1 aliases)
	.globl gText_Rom_574960
gText_Rom_574960: @ 0x08574960
	.string "カブトアーマー$"
	.if (. - gText_Rom_574960) > 0x8
	.error "gText_Rom_574960 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574960) < 0x8
	.space 0x8 - (. - gText_Rom_574960)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:148 easy_chat_group_status_line_148
	.globl gText_Rom_574968
gText_Rom_574968: @ 0x08574968
	.string "かわいい$"
	.if (. - gText_Rom_574968) > 0x5
	.error "gText_Rom_574968 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574968) < 0x5
	.space 0x5 - (. - gText_Rom_574968)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:154 easy_chat_group_status_line_154 (+2 aliases)
	.globl gText_Rom_57496D
gText_Rom_57496D: @ 0x0857496D
	.string "かわいさ$"
	.if (. - gText_Rom_57496D) > 0x5
	.error "gText_Rom_57496D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57496D) < 0x5
	.space 0x5 - (. - gText_Rom_57496D)
	.endif

	@ src/data/abilities.h:43 abilities_line_43 (+1 aliases)
	.globl gText_Rom_574972
gText_Rom_574972: @ 0x08574972
	.string "がんじょう$"
	.if (. - gText_Rom_574972) > 0x6
	.error "gText_Rom_574972 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574972) < 0x6
	.space 0x6 - (. - gText_Rom_574972)
	.endif

	@ src/data/abilities.h:167 abilities_line_167 (+1 aliases)
	.globl gText_Rom_574978
gText_Rom_574978: @ 0x08574978
	.string "きゅうばん$"
	.if (. - gText_Rom_574978) > 0x6
	.error "gText_Rom_574978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574978) < 0x6
	.space 0x6 - (. - gText_Rom_574978)
	.endif
	.incbin "baserom.gba", 0x57497e, 0x3

	@ src/data/abilities.h:228 abilities_line_228 (+1 aliases)
	.globl gText_Rom_574981
gText_Rom_574981: @ 0x08574981
	.string "クリアボディ$"
	.if (. - gText_Rom_574981) > 0x7
	.error "gText_Rom_574981 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574981) < 0x7
	.space 0x7 - (. - gText_Rom_574981)
	.endif

	@ src/data/abilities.h:512 abilities_line_512 (+1 aliases)
	.globl gText_Rom_574988
gText_Rom_574988: @ 0x08574988
	.string "げきりゅう$"
	.if (. - gText_Rom_574988) > 0x6
	.error "gText_Rom_574988 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574988) < 0x6
	.space 0x6 - (. - gText_Rom_574988)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:190 easy_chat_group_status_line_190 (+3 aliases)
	.globl gText_Rom_57498E
gText_Rom_57498E: @ 0x0857498E
	.string "ゴースト$"
	.if (. - gText_Rom_57498E) > 0x5
	.error "gText_Rom_57498E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57498E) < 0x5
	.space 0x5 - (. - gText_Rom_57498E)
	.endif

	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_574993
gText_Rom_574993: @ 0x08574993
	.string "こおり$"
	.if (. - gText_Rom_574993) > 0x4
	.error "gText_Rom_574993 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574993) < 0x4
	.space 0x4 - (. - gText_Rom_574993)
	.endif

	@ src/data/abilities.h:476 abilities_line_476 (+2 aliases)
	.globl gText_Rom_574997
gText_Rom_574997: @ 0x08574997
	.string "こんじょう$"
	.if (. - gText_Rom_574997) > 0x6
	.error "gText_Rom_574997 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574997) < 0x6
	.space 0x6 - (. - gText_Rom_574997)
	.endif

	@ src/data/abilities.h:189 abilities_line_189 (+1 aliases)
	.globl gText_Rom_57499D
gText_Rom_57499D: @ 0x0857499D
	.string "さめはだ$"
	.if (. - gText_Rom_57499D) > 0x5
	.error "gText_Rom_57499D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57499D) < 0x5
	.space 0x5 - (. - gText_Rom_57499D)
	.endif

	@ src/data/abilities.h:570 abilities_line_570 (+1 aliases)
	.globl gText_Rom_5749A2
gText_Rom_5749A2: @ 0x085749A2
	.string "シェルアーマー$"
	.if (. - gText_Rom_5749A2) > 0x8
	.error "gText_Rom_5749A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749A2) < 0x8
	.space 0x8 - (. - gText_Rom_5749A2)
	.endif

	@ src/data/abilities.h:236 abilities_line_236 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5749AA
gText_Rom_5749AA: @ 0x085749AA
	.string "しぜんかいふく$"
	.if (. - gText_Rom_5749AA) != 0x8
	.error "gText_Rom_5749AA must retain its original byte length"
	.endif
	.globl gText_Rom_5749AB
	.set gText_Rom_5749AB, gText_Rom_5749AA + 0x1
	.globl gText_Rom_5749AD
	.set gText_Rom_5749AD, gText_Rom_5749AA + 0x3

	@ src/data/abilities.h:51 abilities_line_51 (+1 aliases)
	.globl gText_Rom_5749B2
gText_Rom_5749B2: @ 0x085749B2
	.string "しめりけ$"
	.if (. - gText_Rom_5749B2) > 0x5
	.error "gText_Rom_5749B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749B2) < 0x5
	.space 0x5 - (. - gText_Rom_5749B2)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:232 easy_chat_group_status_line_232 (+1 aliases)
	.globl gText_Rom_5749B7
gText_Rom_5749B7: @ 0x085749B7
	.string "じめん$"
	.if (. - gText_Rom_5749B7) > 0x4
	.error "gText_Rom_5749B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749B7) < 0x4
	.space 0x4 - (. - gText_Rom_5749B7)
	.endif

	@ src/data/abilities.h:59 abilities_line_59 (+1 aliases)
	.globl gText_Rom_5749BB
gText_Rom_5749BB: @ 0x085749BB
	.string "じゅうなん$"
	.if (. - gText_Rom_5749BB) > 0x6
	.error "gText_Rom_5749BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749BB) < 0x6
	.space 0x6 - (. - gText_Rom_5749BB)
	.endif

	@ src/data/abilities.h:327 abilities_line_327 (+1 aliases)
	.globl gText_Rom_5749C1
gText_Rom_5749C1: @ 0x085749C1
	.string "じりょく$"
	.if (. - gText_Rom_5749C1) > 0x5
	.error "gText_Rom_5749C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749C1) < 0x5
	.space 0x5 - (. - gText_Rom_5749C1)
	.endif

	@ src/data/abilities.h:555 abilities_line_555 (+1 aliases)
	.globl gText_Rom_5749C6
gText_Rom_5749C6: @ 0x085749C6
	.string "しろいけむり$"
	.if (. - gText_Rom_5749C6) > 0x7
	.error "gText_Rom_5749C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749C6) < 0x7
	.space 0x7 - (. - gText_Rom_5749C6)
	.endif

	@ src/data/abilities.h:221 abilities_line_221 (+1 aliases)
	.globl gText_Rom_5749CD
gText_Rom_5749CD: @ 0x085749CD
	.string "シンクロ$"
	.if (. - gText_Rom_5749CD) > 0x5
	.error "gText_Rom_5749CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749CD) < 0x5
	.space 0x5 - (. - gText_Rom_5749CD)
	.endif

	@ src/data/abilities.h:498 abilities_line_498 (+1 aliases)
	.globl gText_Rom_5749D2
gText_Rom_5749D2: @ 0x085749D2
	.string "しんりょく$"
	.if (. - gText_Rom_5749D2) > 0x6
	.error "gText_Rom_5749D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749D2) < 0x6
	.space 0x6 - (. - gText_Rom_5749D2)
	.endif

	@ src/data/abilities.h:258 abilities_line_258 (+1 aliases)
	.globl gText_Rom_5749D8
gText_Rom_5749D8: @ 0x085749D8
	.string "すいすい$"
	.if (. - gText_Rom_5749D8) > 0x5
	.error "gText_Rom_5749D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749D8) < 0x5
	.space 0x5 - (. - gText_Rom_5749D8)
	.endif

	@ src/data/abilities.h:349 abilities_line_349 (+1 aliases)
	.globl gText_Rom_5749DD
gText_Rom_5749DD: @ 0x085749DD
	.string "すなおこし$"
	.if (. - gText_Rom_5749DD) > 0x6
	.error "gText_Rom_5749DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749DD) < 0x6
	.space 0x6 - (. - gText_Rom_5749DD)
	.endif

	@ src/data/abilities.h:67 abilities_line_67 (+1 aliases)
	.globl gText_Rom_5749E3
gText_Rom_5749E3: @ 0x085749E3
	.string "すながくれ$"
	.if (. - gText_Rom_5749E3) > 0x6
	.error "gText_Rom_5749E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749E3) < 0x6
	.space 0x6 - (. - gText_Rom_5749E3)
	.endif

	@ src/data/abilities.h:392 abilities_line_392 (+1 aliases)
	.globl gText_Rom_5749E9
gText_Rom_5749E9: @ 0x085749E9
	.string "するどいめ$"
	.if (. - gText_Rom_5749E9) > 0x6
	.error "gText_Rom_5749E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749E9) < 0x6
	.space 0x6 - (. - gText_Rom_5749E9)
	.endif

	@ src/data/abilities.h:303 abilities_line_303 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5749EF
gText_Rom_5749EF: @ 0x085749EF
	.string "せいしんりょく$"
	.if (. - gText_Rom_5749EF) != 0x8
	.error "gText_Rom_5749EF must retain its original byte length"
	.endif
	.globl gText_Rom_5749F1
	.set gText_Rom_5749F1, gText_Rom_5749EF + 0x2

	@ src/data/abilities.h:75 abilities_line_75 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5749F7
gText_Rom_5749F7: @ 0x085749F7
	.string "せいでんき$"
	.if (. - gText_Rom_5749F7) != 0x6
	.error "gText_Rom_5749F7 must retain its original byte length"
	.endif
	.globl gText_Rom_5749F9
	.set gText_Rom_5749F9, gText_Rom_5749F7 + 0x2

	@ src/battle_debug.c:318 battle_debug_line_318 (+1 aliases)
	.globl gText_Rom_5749FD
gText_Rom_5749FD: @ 0x085749FD
	.string "タイプ$"
	.if (. - gText_Rom_5749FD) > 0x4
	.error "gText_Rom_5749FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749FD) < 0x4
	.space 0x4 - (. - gText_Rom_5749FD)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:310 easy_chat_group_status_line_310
	.globl gText_Rom_574A01
gText_Rom_574A01: @ 0x08574A01
	.string "たくましい$"
	.if (. - gText_Rom_574A01) > 0x6
	.error "gText_Rom_574A01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A01) < 0x6
	.space 0x6 - (. - gText_Rom_574A01)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:316 easy_chat_group_status_line_316 (+2 aliases)
	.globl gText_Rom_574A07
gText_Rom_574A07: @ 0x08574A07
	.string "たくましさ$"
	.if (. - gText_Rom_574A07) > 0x6
	.error "gText_Rom_574A07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A07) < 0x6
	.space 0x6 - (. - gText_Rom_574A07)
	.endif

	@ src/data/abilities.h:469 abilities_line_469 (+1 aliases)
	.globl gText_Rom_574A0D
gText_Rom_574A0D: @ 0x08574A0D
	.string "だっぴ$"
	.if (. - gText_Rom_574A0D) > 0x4
	.error "gText_Rom_574A0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A0D) < 0x4
	.space 0x4 - (. - gText_Rom_574A0D)
	.endif

	@ src/data/abilities.h:289 abilities_line_289 (+1 aliases)
	.globl gText_Rom_574A11
gText_Rom_574A11: @ 0x08574A11
	.string "ちからもち$"
	.if (. - gText_Rom_574A11) > 0x6
	.error "gText_Rom_574A11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A11) < 0x6
	.space 0x6 - (. - gText_Rom_574A11)
	.endif

	@ src/data/abilities.h:82 abilities_line_82 (+1 aliases)
	.globl gText_Rom_574A17
gText_Rom_574A17: @ 0x08574A17
	.string "ちくでん$"
	.if (. - gText_Rom_574A17) > 0x5
	.error "gText_Rom_574A17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A17) < 0x5
	.space 0x5 - (. - gText_Rom_574A17)
	.endif

	@ src/data/abilities.h:90 abilities_line_90 (+1 aliases)
	.globl gText_Rom_574A1C
gText_Rom_574A1C: @ 0x08574A1C
	.string "ちょすい$"
	.if (. - gText_Rom_574A1C) > 0x5
	.error "gText_Rom_574A1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A1C) < 0x5
	.space 0x5 - (. - gText_Rom_574A1C)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:346 easy_chat_group_status_line_346 (+1 aliases)
	.globl gText_Rom_574A21
gText_Rom_574A21: @ 0x08574A21
	.string "でんき$"
	.if (. - gText_Rom_574A21) > 0x4
	.error "gText_Rom_574A21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A21) < 0x4
	.space 0x4 - (. - gText_Rom_574A21)
	.endif

	@ src/data/abilities.h:451 abilities_line_451 (+1 aliases)
	.globl gText_Rom_574A25
gText_Rom_574A25: @ 0x08574A25
	.string "てんきや$"
	.if (. - gText_Rom_574A25) > 0x5
	.error "gText_Rom_574A25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A25) < 0x5
	.space 0x5 - (. - gText_Rom_574A25)
	.endif

	@ src/data/abilities.h:251 abilities_line_251 (+1 aliases)
	.globl gText_Rom_574A2A
gText_Rom_574A2A: @ 0x08574A2A
	.string "てんのめぐみ$"
	.if (. - gText_Rom_574A2A) > 0x7
	.error "gText_Rom_574A2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A2A) < 0x7
	.space 0x7 - (. - gText_Rom_574A2A)
	.endif
	.incbin "baserom.gba", 0x574a31, 0x3

	@ src/data/abilities.h:296 abilities_line_296 (+1 aliases)
	.globl gText_Rom_574A34
gText_Rom_574A34: @ 0x08574A34
	.string "どくのトゲ$"
	.if (. - gText_Rom_574A34) > 0x6
	.error "gText_Rom_574A34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A34) < 0x6
	.space 0x6 - (. - gText_Rom_574A34)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:376 easy_chat_group_status_line_376 (+2 aliases)
	.globl gText_Rom_574A3A
gText_Rom_574A3A: @ 0x08574A3A
	.string "ドラゴン$"
	.if (. - gText_Rom_574A3A) > 0x5
	.error "gText_Rom_574A3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A3A) < 0x5
	.space 0x5 - (. - gText_Rom_574A3A)
	.endif

	@ src/data/abilities.h:280 abilities_line_280 (+1 aliases)
	.globl gText_Rom_574A3F
gText_Rom_574A3F: @ 0x08574A3F
	.string "トレース$"
	.if (. - gText_Rom_574A3F) > 0x5
	.error "gText_Rom_574A3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A3F) < 0x5
	.space 0x5 - (. - gText_Rom_574A3F)
	.endif

	@ src/data/abilities.h:98 abilities_line_98 (+1 aliases)
	.globl gText_Rom_574A44
gText_Rom_574A44: @ 0x08574A44
	.string "どんかん$"
	.if (. - gText_Rom_574A44) > 0x5
	.error "gText_Rom_574A44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A44) < 0x5
	.space 0x5 - (. - gText_Rom_574A44)
	.endif

	@ src/data/abilities.h:415 abilities_line_415 (+1 aliases)
	.globl gText_Rom_574A49
gText_Rom_574A49: @ 0x08574A49
	.string "なまけ$"
	.if (. - gText_Rom_574A49) > 0x4
	.error "gText_Rom_574A49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A49) < 0x4
	.space 0x4 - (. - gText_Rom_574A49)
	.endif

	@ src/data/abilities.h:385 abilities_line_385 (+1 aliases)
	.globl gText_Rom_574A4D
gText_Rom_574A4D: @ 0x08574A4D
	.string "にげあし$"
	.if (. - gText_Rom_574A4D) > 0x5
	.error "gText_Rom_574A4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A4D) < 0x5
	.space 0x5 - (. - gText_Rom_574A4D)
	.endif

	@ src/data/abilities.h:461 abilities_line_461 (+1 aliases)
	.globl gText_Rom_574A52
gText_Rom_574A52: @ 0x08574A52
	.string "ねんちゃく$"
	.if (. - gText_Rom_574A52) > 0x6
	.error "gText_Rom_574A52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A52) < 0x6
	.space 0x6 - (. - gText_Rom_574A52)
	.endif

	@ src/data/abilities.h:106 abilities_line_106 (+1 aliases)
	.globl gText_Rom_574A58
gText_Rom_574A58: @ 0x08574A58
	.string "ノーてんき$"
	.if (. - gText_Rom_574A58) > 0x6
	.error "gText_Rom_574A58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A58) < 0x6
	.space 0x6 - (. - gText_Rom_574A58)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gText_Rom_574A5E
gText_Rom_574A5E: @ 0x08574A5E
	.string "ノーマル$"
	.if (. - gText_Rom_574A5E) > 0x5
	.error "gText_Rom_574A5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A5E) < 0x5
	.space 0x5 - (. - gText_Rom_574A5E)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:424 easy_chat_group_status_line_424 (+1 aliases)
	.globl gText_Rom_574A63
gText_Rom_574A63: @ 0x08574A63
	.string "はがね$"
	.if (. - gText_Rom_574A63) > 0x4
	.error "gText_Rom_574A63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A63) < 0x4
	.space 0x4 - (. - gText_Rom_574A63)
	.endif

	@ src/data/abilities.h:272 abilities_line_272 (+1 aliases)
	.globl gText_Rom_574A67
gText_Rom_574A67: @ 0x08574A67
	.string "はっこう$"
	.if (. - gText_Rom_574A67) > 0x5
	.error "gText_Rom_574A67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A67) < 0x5
	.space 0x5 - (. - gText_Rom_574A67)
	.endif

	@ src/data/abilities.h:371 abilities_line_371 (+1 aliases)
	.globl gText_Rom_574A6C
gText_Rom_574A6C: @ 0x08574A6C
	.string "はやおき$"
	.if (. - gText_Rom_574A6C) > 0x5
	.error "gText_Rom_574A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A6C) < 0x5
	.space 0x5 - (. - gText_Rom_574A6C)
	.endif

	@ src/data/abilities.h:423 abilities_line_423 (+1 aliases)
	.globl gText_Rom_574A71
gText_Rom_574A71: @ 0x08574A71
	.string "はりきり$"
	.if (. - gText_Rom_574A71) > 0x5
	.error "gText_Rom_574A71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A71) < 0x5
	.space 0x5 - (. - gText_Rom_574A71)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:448 easy_chat_group_status_line_448
	.globl gText_Rom_574A76
gText_Rom_574A76: @ 0x08574A76
	.string "ひかる$"
	.if (. - gText_Rom_574A76) > 0x4
	.error "gText_Rom_574A76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A76) < 0x4
	.space 0x4 - (. - gText_Rom_574A76)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:454 easy_chat_group_status_line_454 (+2 aliases)
	.globl gText_Rom_574A7A
gText_Rom_574A7A: @ 0x08574A7A
	.string "ひこう$"
	.if (. - gText_Rom_574A7A) > 0x4
	.error "gText_Rom_574A7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A7A) < 0x4
	.space 0x4 - (. - gText_Rom_574A7A)
	.endif

	@ src/data/abilities.h:533 abilities_line_533 (+1 aliases)
	.globl gText_Rom_574A7E
gText_Rom_574A7E: @ 0x08574A7E
	.string "ひでり$"
	.if (. - gText_Rom_574A7E) > 0x4
	.error "gText_Rom_574A7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A7E) < 0x4
	.space 0x4 - (. - gText_Rom_574A7E)
	.endif

	@ src/data/abilities.h:243 abilities_line_243 (+1 aliases)
	.globl gText_Rom_574A82
gText_Rom_574A82: @ 0x08574A82
	.string "ひらいしん$"
	.if (. - gText_Rom_574A82) > 0x6
	.error "gText_Rom_574A82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A82) < 0x6
	.space 0x6 - (. - gText_Rom_574A82)
	.endif

	@ src/data/abilities.h:113 abilities_line_113 (+1 aliases)
	.globl gText_Rom_574A88
gText_Rom_574A88: @ 0x08574A88
	.string "ふくがん$"
	.if (. - gText_Rom_574A88) > 0x5
	.error "gText_Rom_574A88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A88) < 0x5
	.space 0x5 - (. - gText_Rom_574A88)
	.endif

	@ src/data/abilities.h:483 abilities_line_483 (+1 aliases)
	.globl gText_Rom_574A8D
gText_Rom_574A8D: @ 0x08574A8D
	.string "ふしぎなうろこ$"
	.if (. - gText_Rom_574A8D) > 0x8
	.error "gText_Rom_574A8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A8D) < 0x8
	.space 0x8 - (. - gText_Rom_574A8D)
	.endif

	@ src/data/abilities.h:196 abilities_line_196 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574A95
gText_Rom_574A95: @ 0x08574A95
	.string "ふしぎなまもり$"
	.if (. - gText_Rom_574A95) != 0x8
	.error "gText_Rom_574A95 must retain its original byte length"
	.endif
	.globl gText_Rom_574A99
	.set gText_Rom_574A99, gText_Rom_574A95 + 0x4

	@ src/data/abilities.h:120 abilities_line_120 (+1 aliases)
	.globl gText_Rom_574A9D
gText_Rom_574A9D: @ 0x08574A9D
	.string "ふみん$"
	.if (. - gText_Rom_574A9D) > 0x4
	.error "gText_Rom_574A9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A9D) < 0x4
	.space 0x4 - (. - gText_Rom_574A9D)
	.endif

	@ src/data/abilities.h:206 abilities_line_206 (+1 aliases)
	.globl gText_Rom_574AA1
gText_Rom_574AA1: @ 0x08574AA1
	.string "ふゆう$"
	.if (. - gText_Rom_574AA1) > 0x4
	.error "gText_Rom_574AA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AA1) < 0x4
	.space 0x4 - (. - gText_Rom_574AA1)
	.endif

	@ src/data/abilities.h:437 abilities_line_437 (+1 aliases)
	.globl gText_Rom_574AA5
gText_Rom_574AA5: @ 0x08574AA5
	.string "プラス$"
	.if (. - gText_Rom_574AA5) > 0x4
	.error "gText_Rom_574AA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AA5) < 0x4
	.space 0x4 - (. - gText_Rom_574AA5)
	.endif

	@ src/data/abilities.h:356 abilities_line_356 (+1 aliases)
	.globl gText_Rom_574AA9
gText_Rom_574AA9: @ 0x08574AA9
	.string "プレッシャー$"
	.if (. - gText_Rom_574AA9) > 0x7
	.error "gText_Rom_574AA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AA9) < 0x7
	.space 0x7 - (. - gText_Rom_574AA9)
	.endif

	@ src/data/abilities.h:491 abilities_line_491 (+1 aliases)
	.globl gText_Rom_574AB0
gText_Rom_574AB0: @ 0x08574AB0
	.string "ヘドロえき$"
	.if (. - gText_Rom_574AB0) > 0x6
	.error "gText_Rom_574AB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AB0) < 0x6
	.space 0x6 - (. - gText_Rom_574AB0)
	.endif

	@ src/data/abilities.h:128 abilities_line_128 (+1 aliases)
	.globl gText_Rom_574AB6
gText_Rom_574AB6: @ 0x08574AB6
	.string "へんしょく$"
	.if (. - gText_Rom_574AB6) > 0x6
	.error "gText_Rom_574AB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AB6) < 0x6
	.space 0x6 - (. - gText_Rom_574AB6)
	.endif

	@ src/data/abilities.h:334 abilities_line_334 (+1 aliases)
	.globl gText_Rom_574ABC
gText_Rom_574ABC: @ 0x08574ABC
	.string "ぼうおん$"
	.if (. - gText_Rom_574ABC) > 0x5
	.error "gText_Rom_574ABC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574ABC) < 0x5
	.space 0x5 - (. - gText_Rom_574ABC)
	.endif

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_574AC1
gText_Rom_574AC1: @ 0x08574AC1
	.string "ほうし$"
	.if (. - gText_Rom_574AC1) > 0x4
	.error "gText_Rom_574AC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AC1) < 0x4
	.space 0x4 - (. - gText_Rom_574AC1)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:538 easy_chat_group_status_line_538
	.globl gText_Rom_574AC5
gText_Rom_574AC5: @ 0x08574AC5
	.string "ポケルス$"
	.if (. - gText_Rom_574AC5) > 0x5
	.error "gText_Rom_574AC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AC5) < 0x5
	.space 0x5 - (. - gText_Rom_574AC5)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:544 easy_chat_group_status_line_544 (+1 aliases)
	.globl gText_Rom_574ACA
gText_Rom_574ACA: @ 0x08574ACA
	.string "ほのお$"
	.if (. - gText_Rom_574ACA) > 0x4
	.error "gText_Rom_574ACA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574ACA) < 0x4
	.space 0x4 - (. - gText_Rom_574ACA)
	.endif

	@ src/data/abilities.h:378 abilities_line_378 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574ACE
gText_Rom_574ACE: @ 0x08574ACE
	.string "ほのおのからだ$"
	.if (. - gText_Rom_574ACE) != 0x8
	.error "gText_Rom_574ACE must retain its original byte length"
	.endif
	.globl gText_Rom_574AD2
	.set gText_Rom_574AD2, gText_Rom_574ACE + 0x4

	@ src/data/abilities.h:444 abilities_line_444 (+1 aliases)
	.globl gText_Rom_574AD6
gText_Rom_574AD6: @ 0x08574AD6
	.string "マイナス$"
	.if (. - gText_Rom_574AD6) > 0x5
	.error "gText_Rom_574AD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AD6) < 0x5
	.space 0x5 - (. - gText_Rom_574AD6)
	.endif

	@ src/data/abilities.h:159 abilities_line_159 (+1 aliases)
	.globl gText_Rom_574ADB
gText_Rom_574ADB: @ 0x08574ADB
	.string "マイペース$"
	.if (. - gText_Rom_574ADB) > 0x6
	.error "gText_Rom_574ADB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574ADB) < 0x6
	.space 0x6 - (. - gText_Rom_574ADB)
	.endif

	@ src/data/abilities.h:311 abilities_line_311 (+1 aliases)
	.globl gText_Rom_574AE1
gText_Rom_574AE1: @ 0x08574AE1
	.string "マグマのよろい$"
	.if (. - gText_Rom_574AE1) > 0x8
	.error "gText_Rom_574AE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AE1) < 0x8
	.space 0x8 - (. - gText_Rom_574AE1)
	.endif
	.incbin "baserom.gba", 0x574ae9, 0x3

	@ src/data/abilities.h:319 abilities_line_319 (+1 aliases)
	.globl gText_Rom_574AEC
gText_Rom_574AEC: @ 0x08574AEC
	.string "みずのベール$"
	.if (. - gText_Rom_574AEC) > 0x7
	.error "gText_Rom_574AEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AEC) < 0x7
	.space 0x7 - (. - gText_Rom_574AEC)
	.endif
	.incbin "baserom.gba", 0x574af3, 0x3

	@ src/data/abilities.h:519 abilities_line_519 (+1 aliases)
	.globl gText_Rom_574AF6
gText_Rom_574AF6: @ 0x08574AF6
	.string "むしのしらせ$"
	.if (. - gText_Rom_574AF6) > 0x7
	.error "gText_Rom_574AF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AF6) < 0x7
	.space 0x7 - (. - gText_Rom_574AF6)
	.endif

	@ src/data/abilities.h:430 abilities_line_430 (+1 aliases)
	.globl gText_Rom_574AFD
gText_Rom_574AFD: @ 0x08574AFD
	.string "メロメロボディ$"
	.if (. - gText_Rom_574AFD) > 0x8
	.error "gText_Rom_574AFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AFD) < 0x8
	.space 0x8 - (. - gText_Rom_574AFD)
	.endif

	@ src/data/abilities.h:135 abilities_line_135 (+1 aliases)
	.globl gText_Rom_574B05
gText_Rom_574B05: @ 0x08574B05
	.string "めんえき$"
	.if (. - gText_Rom_574B05) > 0x5
	.error "gText_Rom_574B05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B05) < 0x5
	.space 0x5 - (. - gText_Rom_574B05)
	.endif

	@ src/data/abilities.h:505 abilities_line_505 (+1 aliases)
	.globl gText_Rom_574B0A
gText_Rom_574B0A: @ 0x08574B0A
	.string "もうか$"
	.if (. - gText_Rom_574B0A) > 0x4
	.error "gText_Rom_574B0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B0A) < 0x4
	.space 0x4 - (. - gText_Rom_574B0A)
	.endif

	@ src/data/abilities.h:408 abilities_line_408 (+1 aliases)
	.globl gText_Rom_574B0E
gText_Rom_574B0E: @ 0x08574B0E
	.string "ものひろい$"
	.if (. - gText_Rom_574B0E) > 0x6
	.error "gText_Rom_574B0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B0E) < 0x6
	.space 0x6 - (. - gText_Rom_574B0E)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:622 easy_chat_group_status_line_622
	.globl gText_Rom_574B14
gText_Rom_574B14: @ 0x08574B14
	.string "もよう$"
	.if (. - gText_Rom_574B14) > 0x4
	.error "gText_Rom_574B14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B14) < 0x4
	.space 0x4 - (. - gText_Rom_574B14)
	.endif

	@ src/data/abilities.h:143 abilities_line_143 (+1 aliases)
	.globl gText_Rom_574B18
gText_Rom_574B18: @ 0x08574B18
	.string "もらいび$"
	.if (. - gText_Rom_574B18) > 0x5
	.error "gText_Rom_574B18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B18) < 0x5
	.space 0x5 - (. - gText_Rom_574B18)
	.endif

	@ src/data/abilities.h:547 abilities_line_547 (+1 aliases)
	.globl gText_Rom_574B1D
gText_Rom_574B1D: @ 0x08574B1D
	.string "やるき$"
	.if (. - gText_Rom_574B1D) > 0x4
	.error "gText_Rom_574B1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B1D) < 0x4
	.space 0x4 - (. - gText_Rom_574B1D)
	.endif

	@ src/data/abilities.h:265 abilities_line_265 (+1 aliases)
	.globl gText_Rom_574B21
gText_Rom_574B21: @ 0x08574B21
	.string "ようりょくそ$"
	.if (. - gText_Rom_574B21) > 0x7
	.error "gText_Rom_574B21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B21) < 0x7
	.space 0x7 - (. - gText_Rom_574B21)
	.endif

	@ src/data/abilities.h:563 abilities_line_563 (+1 aliases)
	.globl gText_Rom_574B28
gText_Rom_574B28: @ 0x08574B28
	.string "ヨガパワー$"
	.if (. - gText_Rom_574B28) > 0x6
	.error "gText_Rom_574B28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B28) < 0x6
	.space 0x6 - (. - gText_Rom_574B28)
	.endif

	@ src/data/abilities.h:151 abilities_line_151 (+1 aliases)
	.globl gText_Rom_574B2E
gText_Rom_574B2E: @ 0x08574B2E
	.string "りんぷん$"
	.if (. - gText_Rom_574B2E) > 0x5
	.error "gText_Rom_574B2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B2E) < 0x5
	.space 0x5 - (. - gText_Rom_574B2E)
	.endif
	.incbin "baserom.gba", 0x574b33, 0x51d

	@ src/data/easy_chat/easy_chat_group_battle.h:4 easy_chat_group_battle_line_4
	.globl gText_Rom_575050
gText_Rom_575050: @ 0x08575050
	.string "あいしょう$"
	.if (. - gText_Rom_575050) > 0x6
	.error "gText_Rom_575050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575050) < 0x6
	.space 0x6 - (. - gText_Rom_575050)
	.endif
	.incbin "baserom.gba", 0x575056, 0x3

	@ src/data/easy_chat/easy_chat_group_battle.h:16 easy_chat_group_battle_line_16
	.globl gText_Rom_575059
gText_Rom_575059: @ 0x08575059
	.string "いちばん$"
	.if (. - gText_Rom_575059) > 0x5
	.error "gText_Rom_575059 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575059) < 0x5
	.space 0x5 - (. - gText_Rom_575059)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:22 easy_chat_group_battle_line_22
	.globl gText_Rom_57505E
gText_Rom_57505E: @ 0x0857505E
	.string "かくご$"
	.if (. - gText_Rom_57505E) > 0x4
	.error "gText_Rom_57505E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57505E) < 0x4
	.space 0x4 - (. - gText_Rom_57505E)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:28 easy_chat_group_battle_line_28
	.globl gText_Rom_575062
gText_Rom_575062: @ 0x08575062
	.string "かたせて$"
	.if (. - gText_Rom_575062) > 0x5
	.error "gText_Rom_575062 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575062) < 0x5
	.space 0x5 - (. - gText_Rom_575062)
	.endif
	.incbin "baserom.gba", 0x575067, 0x6

	@ src/data/easy_chat/easy_chat_group_battle.h:46 easy_chat_group_battle_line_46
	.globl gText_Rom_57506D
gText_Rom_57506D: @ 0x0857506D
	.string "かった$"
	.if (. - gText_Rom_57506D) > 0x4
	.error "gText_Rom_57506D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57506D) < 0x4
	.space 0x4 - (. - gText_Rom_57506D)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:52 easy_chat_group_battle_line_52
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_575071
gText_Rom_575071: @ 0x08575071
	.string "かったら$"
	.if (. - gText_Rom_575071) != 0x5
	.error "gText_Rom_575071 must retain its original byte length"
	.endif
	.globl gText_Rom_575072
	.set gText_Rom_575072, gText_Rom_575071 + 0x1

	@ src/data/easy_chat/easy_chat_group_battle.h:58 easy_chat_group_battle_line_58
	.globl gText_Rom_575076
gText_Rom_575076: @ 0x08575076
	.string "かって$"
	.if (. - gText_Rom_575076) > 0x4
	.error "gText_Rom_575076 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575076) < 0x4
	.space 0x4 - (. - gText_Rom_575076)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:64 easy_chat_group_battle_line_64
	.globl gText_Rom_57507A
gText_Rom_57507A: @ 0x0857507A
	.string "かてない$"
	.if (. - gText_Rom_57507A) > 0x5
	.error "gText_Rom_57507A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57507A) < 0x5
	.space 0x5 - (. - gText_Rom_57507A)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:70 easy_chat_group_battle_line_70
	.globl gText_Rom_57507F
gText_Rom_57507F: @ 0x0857507F
	.string "かてる$"
	.if (. - gText_Rom_57507F) > 0x4
	.error "gText_Rom_57507F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57507F) < 0x4
	.space 0x4 - (. - gText_Rom_57507F)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:76 easy_chat_group_battle_line_76
	.globl gText_Rom_575083
gText_Rom_575083: @ 0x08575083
	.string "かなわない$"
	.if (. - gText_Rom_575083) > 0x6
	.error "gText_Rom_575083 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575083) < 0x6
	.space 0x6 - (. - gText_Rom_575083)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:82 easy_chat_group_battle_line_82
	.globl gText_Rom_575089
gText_Rom_575089: @ 0x08575089
	.string "きあい$"
	.if (. - gText_Rom_575089) > 0x4
	.error "gText_Rom_575089 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575089) < 0x4
	.space 0x4 - (. - gText_Rom_575089)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:88 easy_chat_group_battle_line_88
	.globl gText_Rom_57508D
gText_Rom_57508D: @ 0x0857508D
	.string "きめた$"
	.if (. - gText_Rom_57508D) > 0x4
	.error "gText_Rom_57508D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57508D) < 0x4
	.space 0x4 - (. - gText_Rom_57508D)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:94 easy_chat_group_battle_line_94 (+1 aliases)
	.globl gText_Rom_575091
gText_Rom_575091: @ 0x08575091
	.string "きりふだ$"
	.if (. - gText_Rom_575091) > 0x5
	.error "gText_Rom_575091 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575091) < 0x5
	.space 0x5 - (. - gText_Rom_575091)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:100 easy_chat_group_battle_line_100
	.globl gText_Rom_575096
gText_Rom_575096: @ 0x08575096
	.string "くらえ$"
	.if (. - gText_Rom_575096) > 0x4
	.error "gText_Rom_575096 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575096) < 0x4
	.space 0x4 - (. - gText_Rom_575096)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:106 easy_chat_group_battle_line_106
	.globl gText_Rom_57509A
gText_Rom_57509A: @ 0x0857509A
	.string "こい!$"
	.if (. - gText_Rom_57509A) > 0x4
	.error "gText_Rom_57509A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57509A) < 0x4
	.space 0x4 - (. - gText_Rom_57509A)
	.endif

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_57509E
gText_Rom_57509E: @ 0x0857509E
	.string "こうげき$"
	.if (. - gText_Rom_57509E) > 0x5
	.error "gText_Rom_57509E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57509E) < 0x5
	.space 0x5 - (. - gText_Rom_57509E)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:118 easy_chat_group_battle_line_118
	.globl gText_Rom_5750A3
gText_Rom_5750A3: @ 0x085750A3
	.string "こうさん$"
	.if (. - gText_Rom_5750A3) > 0x5
	.error "gText_Rom_5750A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750A3) < 0x5
	.space 0x5 - (. - gText_Rom_5750A3)
	.endif

	@ src/data/abilities.h:476 abilities_line_476 (+2 aliases)
	.globl gText_Rom_5750A8
gText_Rom_5750A8: @ 0x085750A8
	.string "こんじょう$"
	.if (. - gText_Rom_5750A8) > 0x6
	.error "gText_Rom_5750A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750A8) < 0x6
	.space 0x6 - (. - gText_Rom_5750A8)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:130 easy_chat_group_battle_line_130
	.globl gText_Rom_5750AE
gText_Rom_5750AE: @ 0x085750AE
	.string "さいのう$"
	.if (. - gText_Rom_5750AE) > 0x5
	.error "gText_Rom_5750AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750AE) < 0x5
	.space 0x5 - (. - gText_Rom_5750AE)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:136 easy_chat_group_battle_line_136 (+1 aliases)
	.globl gText_Rom_5750B3
gText_Rom_5750B3: @ 0x085750B3
	.string "さくせん$"
	.if (. - gText_Rom_5750B3) > 0x5
	.error "gText_Rom_5750B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750B3) < 0x5
	.space 0x5 - (. - gText_Rom_5750B3)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:142 easy_chat_group_battle_line_142
	.globl gText_Rom_5750B8
gText_Rom_5750B8: @ 0x085750B8
	.string "さばき$"
	.if (. - gText_Rom_5750B8) > 0x4
	.error "gText_Rom_5750B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750B8) < 0x4
	.space 0x4 - (. - gText_Rom_5750B8)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:148 easy_chat_group_battle_line_148
	.globl gText_Rom_5750BC
gText_Rom_5750BC: @ 0x085750BC
	.string "しょうぶ$"
	.if (. - gText_Rom_5750BC) > 0x5
	.error "gText_Rom_5750BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750BC) < 0x5
	.space 0x5 - (. - gText_Rom_5750BC)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:154 easy_chat_group_battle_line_154 (+1 aliases)
	.globl gText_Rom_5750C1
gText_Rom_5750C1: @ 0x085750C1
	.string "しょうり$"
	.if (. - gText_Rom_5750C1) > 0x5
	.error "gText_Rom_5750C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750C1) < 0x5
	.space 0x5 - (. - gText_Rom_5750C1)
	.endif
	.incbin "baserom.gba", 0x5750c6, 0x3

	@ src/data/easy_chat/easy_chat_group_battle.h:166 easy_chat_group_battle_line_166
	.globl gText_Rom_5750C9
gText_Rom_5750C9: @ 0x085750C9
	.string "センス$"
	.if (. - gText_Rom_5750C9) > 0x4
	.error "gText_Rom_5750C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750C9) < 0x4
	.space 0x4 - (. - gText_Rom_5750C9)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:172 easy_chat_group_battle_line_172 (+1 aliases)
	.globl gText_Rom_5750CD
gText_Rom_5750CD: @ 0x085750CD
	.string "たいせん$"
	.if (. - gText_Rom_5750CD) > 0x5
	.error "gText_Rom_5750CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750CD) < 0x5
	.space 0x5 - (. - gText_Rom_5750CD)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:178 easy_chat_group_battle_line_178
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5750D2
gText_Rom_5750D2: @ 0x085750D2
	.string "たたかい$"
	.if (. - gText_Rom_5750D2) != 0x5
	.error "gText_Rom_5750D2 must retain its original byte length"
	.endif
	.globl gText_Rom_5750D3
	.set gText_Rom_5750D3, gText_Rom_5750D2 + 0x1

	@ src/data/easy_chat/easy_chat_group_battle.h:184 easy_chat_group_battle_line_184
	.globl gText_Rom_5750D7
gText_Rom_5750D7: @ 0x085750D7
	.string "ちから$"
	.if (. - gText_Rom_5750D7) > 0x4
	.error "gText_Rom_5750D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750D7) < 0x4
	.space 0x4 - (. - gText_Rom_5750D7)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:190 easy_chat_group_battle_line_190
	.globl gText_Rom_5750DB
gText_Rom_5750DB: @ 0x085750DB
	.string "チャレンジ$"
	.if (. - gText_Rom_5750DB) > 0x6
	.error "gText_Rom_5750DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750DB) < 0x6
	.space 0x6 - (. - gText_Rom_5750DB)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:196 easy_chat_group_battle_line_196
	.globl gText_Rom_5750E1
gText_Rom_5750E1: @ 0x085750E1
	.string "つよい$"
	.if (. - gText_Rom_5750E1) > 0x4
	.error "gText_Rom_5750E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750E1) < 0x4
	.space 0x4 - (. - gText_Rom_5750E1)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:202 easy_chat_group_battle_line_202
	.globl gText_Rom_5750E5
gText_Rom_5750E5: @ 0x085750E5
	.string "つよすぎ$"
	.if (. - gText_Rom_5750E5) > 0x5
	.error "gText_Rom_5750E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750E5) < 0x5
	.space 0x5 - (. - gText_Rom_5750E5)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:208 easy_chat_group_battle_line_208 (+1 aliases)
	.globl gText_Rom_5750EA
gText_Rom_5750EA: @ 0x085750EA
	.string "てかげん$"
	.if (. - gText_Rom_5750EA) > 0x5
	.error "gText_Rom_5750EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750EA) < 0x5
	.space 0x5 - (. - gText_Rom_5750EA)
	.endif
	.incbin "baserom.gba", 0x5750ef, 0x3

	@ src/data/easy_chat/easy_chat_group_battle.h:220 easy_chat_group_battle_line_220
	.globl gText_Rom_5750F2
gText_Rom_5750F2: @ 0x085750F2
	.string "てんさい$"
	.if (. - gText_Rom_5750F2) > 0x5
	.error "gText_Rom_5750F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750F2) < 0x5
	.space 0x5 - (. - gText_Rom_5750F2)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:226 easy_chat_group_battle_line_226 (+1 aliases)
	.globl gText_Rom_5750F7
gText_Rom_5750F7: @ 0x085750F7
	.string "でんせつ$"
	.if (. - gText_Rom_5750F7) > 0x5
	.error "gText_Rom_5750F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750F7) < 0x5
	.space 0x5 - (. - gText_Rom_5750F7)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:232 easy_chat_group_battle_line_232
	.globl gText_Rom_5750FC
gText_Rom_5750FC: @ 0x085750FC
	.string "にげ$"
	.if (. - gText_Rom_5750FC) > 0x3
	.error "gText_Rom_5750FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750FC) < 0x3
	.space 0x3 - (. - gText_Rom_5750FC)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:238 easy_chat_group_battle_line_238
	.globl gText_Rom_5750FF
gText_Rom_5750FF: @ 0x085750FF
	.string "ねらう$"
	.if (. - gText_Rom_5750FF) > 0x4
	.error "gText_Rom_5750FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750FF) < 0x4
	.space 0x4 - (. - gText_Rom_5750FF)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:244 easy_chat_group_battle_line_244 (+3 aliases)
	.globl gText_Rom_575103
gText_Rom_575103: @ 0x08575103
	.string "バトル$"
	.if (. - gText_Rom_575103) > 0x4
	.error "gText_Rom_575103 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575103) < 0x4
	.space 0x4 - (. - gText_Rom_575103)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:250 easy_chat_group_battle_line_250
	.globl gText_Rom_575107
gText_Rom_575107: @ 0x08575107
	.string "ファイト$"
	.if (. - gText_Rom_575107) > 0x5
	.error "gText_Rom_575107 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575107) < 0x5
	.space 0x5 - (. - gText_Rom_575107)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:256 easy_chat_group_battle_line_256
	.globl gText_Rom_57510C
gText_Rom_57510C: @ 0x0857510C
	.string "ふっかつ$"
	.if (. - gText_Rom_57510C) > 0x5
	.error "gText_Rom_57510C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57510C) < 0x5
	.space 0x5 - (. - gText_Rom_57510C)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:262 easy_chat_group_battle_line_262
	.globl gText_Rom_575111
gText_Rom_575111: @ 0x08575111
	.string "ポイント$"
	.if (. - gText_Rom_575111) > 0x5
	.error "gText_Rom_575111 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575111) < 0x5
	.space 0x5 - (. - gText_Rom_575111)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:268 easy_chat_group_battle_line_268
	.globl gText_Rom_575116
gText_Rom_575116: @ 0x08575116
	.string "ほんき$"
	.if (. - gText_Rom_575116) > 0x4
	.error "gText_Rom_575116 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575116) < 0x4
	.space 0x4 - (. - gText_Rom_575116)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:274 easy_chat_group_battle_line_274
	.globl gText_Rom_57511A
gText_Rom_57511A: @ 0x0857511A
	.string "まいった$"
	.if (. - gText_Rom_57511A) > 0x5
	.error "gText_Rom_57511A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57511A) < 0x5
	.space 0x5 - (. - gText_Rom_57511A)
	.endif
	.incbin "baserom.gba", 0x57511f, 0x3

	@ src/data/easy_chat/easy_chat_group_battle.h:286 easy_chat_group_battle_line_286
	.globl gText_Rom_575122
gText_Rom_575122: @ 0x08575122
	.string "まけたら$"
	.if (. - gText_Rom_575122) > 0x5
	.error "gText_Rom_575122 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575122) < 0x5
	.space 0x5 - (. - gText_Rom_575122)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:292 easy_chat_group_battle_line_292
	.globl gText_Rom_575127
gText_Rom_575127: @ 0x08575127
	.string "まけて$"
	.if (. - gText_Rom_575127) > 0x4
	.error "gText_Rom_575127 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575127) < 0x4
	.space 0x4 - (. - gText_Rom_575127)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:298 easy_chat_group_battle_line_298
	.globl gText_Rom_57512B
gText_Rom_57512B: @ 0x0857512B
	.string "まける$"
	.if (. - gText_Rom_57512B) > 0x4
	.error "gText_Rom_57512B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57512B) < 0x4
	.space 0x4 - (. - gText_Rom_57512B)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:304 easy_chat_group_battle_line_304
	.globl gText_Rom_57512F
gText_Rom_57512F: @ 0x0857512F
	.string "まもり$"
	.if (. - gText_Rom_57512F) > 0x4
	.error "gText_Rom_57512F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57512F) < 0x4
	.space 0x4 - (. - gText_Rom_57512F)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:310 easy_chat_group_battle_line_310
	.globl gText_Rom_575133
gText_Rom_575133: @ 0x08575133
	.string "みかた$"
	.if (. - gText_Rom_575133) > 0x4
	.error "gText_Rom_575133 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575133) < 0x4
	.space 0x4 - (. - gText_Rom_575133)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:316 easy_chat_group_battle_line_316
	.globl gText_Rom_575137
gText_Rom_575137: @ 0x08575137
	.string "みとめない$"
	.if (. - gText_Rom_575137) > 0x6
	.error "gText_Rom_575137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575137) < 0x6
	.space 0x6 - (. - gText_Rom_575137)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:322 easy_chat_group_battle_line_322
	.globl gText_Rom_57513D
gText_Rom_57513D: @ 0x0857513D
	.string "みとめる$"
	.if (. - gText_Rom_57513D) > 0x5
	.error "gText_Rom_57513D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57513D) < 0x5
	.space 0x5 - (. - gText_Rom_57513D)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:328 easy_chat_group_battle_line_328
	.globl gText_Rom_575142
gText_Rom_575142: @ 0x08575142
	.string "むてき$"
	.if (. - gText_Rom_575142) > 0x4
	.error "gText_Rom_575142 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575142) < 0x4
	.space 0x4 - (. - gText_Rom_575142)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:334 easy_chat_group_battle_line_334
	.globl gText_Rom_575146
gText_Rom_575146: @ 0x08575146
	.string "もらった$"
	.if (. - gText_Rom_575146) > 0x5
	.error "gText_Rom_575146 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575146) < 0x5
	.space 0x5 - (. - gText_Rom_575146)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:340 easy_chat_group_battle_line_340
	.globl gText_Rom_57514B
gText_Rom_57514B: @ 0x0857514B
	.string "よゆう$"
	.if (. - gText_Rom_57514B) > 0x4
	.error "gText_Rom_57514B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57514B) < 0x4
	.space 0x4 - (. - gText_Rom_57514B)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:346 easy_chat_group_battle_line_346
	.globl gText_Rom_57514F
gText_Rom_57514F: @ 0x0857514F
	.string "よわい$"
	.if (. - gText_Rom_57514F) > 0x4
	.error "gText_Rom_57514F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57514F) < 0x4
	.space 0x4 - (. - gText_Rom_57514F)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:352 easy_chat_group_battle_line_352
	.globl gText_Rom_575153
gText_Rom_575153: @ 0x08575153
	.string "よわすぎ$"
	.if (. - gText_Rom_575153) > 0x5
	.error "gText_Rom_575153 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575153) < 0x5
	.space 0x5 - (. - gText_Rom_575153)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:358 easy_chat_group_battle_line_358
	.globl gText_Rom_575158
gText_Rom_575158: @ 0x08575158
	.string "らくしょう$"
	.if (. - gText_Rom_575158) > 0x6
	.error "gText_Rom_575158 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575158) < 0x6
	.space 0x6 - (. - gText_Rom_575158)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:364 easy_chat_group_battle_line_364
	.globl gText_Rom_57515E
gText_Rom_57515E: @ 0x0857515E
	.string "リーダー$"
	.if (. - gText_Rom_57515E) > 0x5
	.error "gText_Rom_57515E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57515E) < 0x5
	.space 0x5 - (. - gText_Rom_57515E)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:370 easy_chat_group_battle_line_370
	.globl gText_Rom_575163
gText_Rom_575163: @ 0x08575163
	.string "ルール$"
	.if (. - gText_Rom_575163) > 0x4
	.error "gText_Rom_575163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575163) < 0x4
	.space 0x4 - (. - gText_Rom_575163)
	.endif
	.incbin "baserom.gba", 0x575167, 0x2f9

	@ src/data/easy_chat/easy_chat_group_greetings.h:4 easy_chat_group_greetings_line_4
	.globl gText_Rom_575460
gText_Rom_575460: @ 0x08575460
	.string "ありがとう$"
	.if (. - gText_Rom_575460) > 0x6
	.error "gText_Rom_575460 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575460) < 0x6
	.space 0x6 - (. - gText_Rom_575460)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:10 easy_chat_group_greetings_line_10
	.globl gText_Rom_575466
gText_Rom_575466: @ 0x08575466
	.string "イエス$"
	.if (. - gText_Rom_575466) > 0x4
	.error "gText_Rom_575466 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575466) < 0x4
	.space 0x4 - (. - gText_Rom_575466)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:16 easy_chat_group_greetings_line_16
	.globl gText_Rom_57546A
gText_Rom_57546A: @ 0x0857546A
	.string "いくぜ$"
	.if (. - gText_Rom_57546A) > 0x4
	.error "gText_Rom_57546A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57546A) < 0x4
	.space 0x4 - (. - gText_Rom_57546A)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:22 easy_chat_group_greetings_line_22
	.globl gText_Rom_57546E
gText_Rom_57546E: @ 0x0857546E
	.string "いくよ$"
	.if (. - gText_Rom_57546E) > 0x4
	.error "gText_Rom_57546E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57546E) < 0x4
	.space 0x4 - (. - gText_Rom_57546E)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:28 easy_chat_group_greetings_line_28
	.globl gText_Rom_575472
gText_Rom_575472: @ 0x08575472
	.string "いくわよ$"
	.if (. - gText_Rom_575472) > 0x5
	.error "gText_Rom_575472 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575472) < 0x5
	.space 0x5 - (. - gText_Rom_575472)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:34 easy_chat_group_greetings_line_34
	.globl gText_Rom_575477
gText_Rom_575477: @ 0x08575477
	.string "いやー$"
	.if (. - gText_Rom_575477) > 0x4
	.error "gText_Rom_575477 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575477) < 0x4
	.space 0x4 - (. - gText_Rom_575477)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:40 easy_chat_group_greetings_line_40
	.globl gText_Rom_57547B
gText_Rom_57547B: @ 0x0857547B
	.string "いらっしゃい$"
	.if (. - gText_Rom_57547B) > 0x7
	.error "gText_Rom_57547B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57547B) < 0x7
	.space 0x7 - (. - gText_Rom_57547B)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:46 easy_chat_group_greetings_line_46
	.globl gText_Rom_575482
gText_Rom_575482: @ 0x08575482
	.string "おーい$"
	.if (. - gText_Rom_575482) > 0x4
	.error "gText_Rom_575482 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575482) < 0x4
	.space 0x4 - (. - gText_Rom_575482)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:52 easy_chat_group_greetings_line_52
	.globl gText_Rom_575486
gText_Rom_575486: @ 0x08575486
	.string "おっす$"
	.if (. - gText_Rom_575486) > 0x4
	.error "gText_Rom_575486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575486) < 0x4
	.space 0x4 - (. - gText_Rom_575486)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:58 easy_chat_group_greetings_line_58
	.globl gText_Rom_57548A
gText_Rom_57548A: @ 0x0857548A
	.string "おめでとう$"
	.if (. - gText_Rom_57548A) > 0x6
	.error "gText_Rom_57548A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57548A) < 0x6
	.space 0x6 - (. - gText_Rom_57548A)
	.endif
	.incbin "baserom.gba", 0x575490, 0x5

	@ src/data/easy_chat/easy_chat_group_greetings.h:70 easy_chat_group_greetings_line_70
	.globl gText_Rom_575495
gText_Rom_575495: @ 0x08575495
	.string "ゴメン$"
	.if (. - gText_Rom_575495) > 0x4
	.error "gText_Rom_575495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575495) < 0x4
	.space 0x4 - (. - gText_Rom_575495)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:76 easy_chat_group_greetings_line_76
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_575499
gText_Rom_575499: @ 0x08575499
	.string "ごめんなさい$"
	.if (. - gText_Rom_575499) != 0x7
	.error "gText_Rom_575499 must retain its original byte length"
	.endif
	.globl gText_Rom_57549C
	.set gText_Rom_57549C, gText_Rom_575499 + 0x3

	@ src/data/easy_chat/easy_chat_group_greetings.h:82 easy_chat_group_greetings_line_82
	.globl gText_Rom_5754A0
gText_Rom_5754A0: @ 0x085754A0
	.string "ごめんね$"
	.if (. - gText_Rom_5754A0) > 0x5
	.error "gText_Rom_5754A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A0) < 0x5
	.space 0x5 - (. - gText_Rom_5754A0)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:88 easy_chat_group_greetings_line_88
	.globl gText_Rom_5754A5
gText_Rom_5754A5: @ 0x085754A5
	.string "こらっ$"
	.if (. - gText_Rom_5754A5) > 0x4
	.error "gText_Rom_5754A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A5) < 0x4
	.space 0x4 - (. - gText_Rom_5754A5)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:94 easy_chat_group_greetings_line_94 (+1 aliases)
	.globl gText_Rom_5754A9
gText_Rom_5754A9: @ 0x085754A9
	.string "こんにちは$"
	.if (. - gText_Rom_5754A9) > 0x6
	.error "gText_Rom_5754A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A9) < 0x6
	.space 0x6 - (. - gText_Rom_5754A9)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:100 easy_chat_group_greetings_line_100 (+1 aliases)
	.globl gText_Rom_5754AF
gText_Rom_5754AF: @ 0x085754AF
	.string "さようなら$"
	.if (. - gText_Rom_5754AF) > 0x6
	.error "gText_Rom_5754AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754AF) < 0x6
	.space 0x6 - (. - gText_Rom_5754AF)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:106 easy_chat_group_greetings_line_106 (+1 aliases)
	.globl gText_Rom_5754B5
gText_Rom_5754B5: @ 0x085754B5
	.string "サンキュー$"
	.if (. - gText_Rom_5754B5) > 0x6
	.error "gText_Rom_5754B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754B5) < 0x6
	.space 0x6 - (. - gText_Rom_5754B5)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:112 easy_chat_group_greetings_line_112
	.globl gText_Rom_5754BB
gText_Rom_5754BB: @ 0x085754BB
	.string "さんじょう$"
	.if (. - gText_Rom_5754BB) > 0x6
	.error "gText_Rom_5754BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754BB) < 0x6
	.space 0x6 - (. - gText_Rom_5754BB)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:118 easy_chat_group_greetings_line_118
	.globl gText_Rom_5754C1
gText_Rom_5754C1: @ 0x085754C1
	.string "しっけい$"
	.if (. - gText_Rom_5754C1) > 0x5
	.error "gText_Rom_5754C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754C1) < 0x5
	.space 0x5 - (. - gText_Rom_5754C1)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:124 easy_chat_group_greetings_line_124
	.globl gText_Rom_5754C6
gText_Rom_5754C6: @ 0x085754C6
	.string "しつれい$"
	.if (. - gText_Rom_5754C6) > 0x5
	.error "gText_Rom_5754C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754C6) < 0x5
	.space 0x5 - (. - gText_Rom_5754C6)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:130 easy_chat_group_greetings_line_130
	.globl gText_Rom_5754CB
gText_Rom_5754CB: @ 0x085754CB
	.string "じゃーね$"
	.if (. - gText_Rom_5754CB) > 0x5
	.error "gText_Rom_5754CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754CB) < 0x5
	.space 0x5 - (. - gText_Rom_5754CB)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:136 easy_chat_group_greetings_line_136
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5754D0
gText_Rom_5754D0: @ 0x085754D0
	.string "すみません$"
	.if (. - gText_Rom_5754D0) != 0x6
	.error "gText_Rom_5754D0 must retain its original byte length"
	.endif
	.globl gText_Rom_5754D2
	.set gText_Rom_5754D2, gText_Rom_5754D0 + 0x2

	@ src/data/easy_chat/easy_chat_group_greetings.h:142 easy_chat_group_greetings_line_142
	.globl gText_Rom_5754D6
gText_Rom_5754D6: @ 0x085754D6
	.string "それじゃ$"
	.if (. - gText_Rom_5754D6) > 0x5
	.error "gText_Rom_5754D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754D6) < 0x5
	.space 0x5 - (. - gText_Rom_5754D6)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:148 easy_chat_group_greetings_line_148
	.globl gText_Rom_5754DB
gText_Rom_5754DB: @ 0x085754DB
	.string "どうぞ$"
	.if (. - gText_Rom_5754DB) > 0x4
	.error "gText_Rom_5754DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754DB) < 0x4
	.space 0x4 - (. - gText_Rom_5754DB)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:154 easy_chat_group_greetings_line_154
	.globl gText_Rom_5754DF
gText_Rom_5754DF: @ 0x085754DF
	.string "どうも$"
	.if (. - gText_Rom_5754DF) > 0x4
	.error "gText_Rom_5754DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754DF) < 0x4
	.space 0x4 - (. - gText_Rom_5754DF)
	.endif
	.incbin "baserom.gba", 0x5754e3, 0x3

	@ src/data/easy_chat/easy_chat_group_greetings.h:166 easy_chat_group_greetings_line_166
	.globl gText_Rom_5754E6
gText_Rom_5754E6: @ 0x085754E6
	.string "なんじゃ$"
	.if (. - gText_Rom_5754E6) > 0x5
	.error "gText_Rom_5754E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754E6) < 0x5
	.space 0x5 - (. - gText_Rom_5754E6)
	.endif
	.incbin "baserom.gba", 0x5754eb, 0x3

	@ src/data/easy_chat/easy_chat_group_greetings.h:178 easy_chat_group_greetings_line_178
	.globl gText_Rom_5754EE
gText_Rom_5754EE: @ 0x085754EE
	.string "ノー$"
	.if (. - gText_Rom_5754EE) > 0x3
	.error "gText_Rom_5754EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754EE) < 0x3
	.space 0x3 - (. - gText_Rom_5754EE)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:184 easy_chat_group_greetings_line_184
	.globl gText_Rom_5754F1
gText_Rom_5754F1: @ 0x085754F1
	.string "ハーイ$"
	.if (. - gText_Rom_5754F1) > 0x4
	.error "gText_Rom_5754F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754F1) < 0x4
	.space 0x4 - (. - gText_Rom_5754F1)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:190 easy_chat_group_greetings_line_190
	.globl gText_Rom_5754F5
gText_Rom_5754F5: @ 0x085754F5
	.string "はいはい$"
	.if (. - gText_Rom_5754F5) > 0x5
	.error "gText_Rom_5754F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754F5) < 0x5
	.space 0x5 - (. - gText_Rom_5754F5)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:196 easy_chat_group_greetings_line_196
	.globl gText_Rom_5754FA
gText_Rom_5754FA: @ 0x085754FA
	.string "バイバイ$"
	.if (. - gText_Rom_5754FA) > 0x5
	.error "gText_Rom_5754FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754FA) < 0x5
	.space 0x5 - (. - gText_Rom_5754FA)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:202 easy_chat_group_greetings_line_202
	.globl gText_Rom_5754FF
gText_Rom_5754FF: @ 0x085754FF
	.string "はじめまして$"
	.if (. - gText_Rom_5754FF) > 0x7
	.error "gText_Rom_5754FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754FF) < 0x7
	.space 0x7 - (. - gText_Rom_5754FF)
	.endif
	.incbin "baserom.gba", 0x575506, 0x3

	@ src/data/easy_chat/easy_chat_group_greetings.h:214 easy_chat_group_greetings_line_214
	.globl gText_Rom_575509
gText_Rom_575509: @ 0x08575509
	.string "またね$"
	.if (. - gText_Rom_575509) > 0x4
	.error "gText_Rom_575509 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575509) < 0x4
	.space 0x4 - (. - gText_Rom_575509)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:220 easy_chat_group_greetings_line_220
	.globl gText_Rom_57550D
gText_Rom_57550D: @ 0x0857550D
	.string "もしもし$"
	.if (. - gText_Rom_57550D) > 0x5
	.error "gText_Rom_57550D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57550D) < 0x5
	.space 0x5 - (. - gText_Rom_57550D)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:226 easy_chat_group_greetings_line_226
	.globl gText_Rom_575512
gText_Rom_575512: @ 0x08575512
	.string "やあ$"
	.if (. - gText_Rom_575512) > 0x3
	.error "gText_Rom_575512 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575512) < 0x3
	.space 0x3 - (. - gText_Rom_575512)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:232 easy_chat_group_greetings_line_232
	.globl gText_Rom_575515
gText_Rom_575515: @ 0x08575515
	.string "やっほー$"
	.if (. - gText_Rom_575515) > 0x5
	.error "gText_Rom_575515 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575515) < 0x5
	.space 0x5 - (. - gText_Rom_575515)
	.endif
	.incbin "baserom.gba", 0x57551a, 0x3

	@ src/data/easy_chat/easy_chat_group_greetings.h:244 easy_chat_group_greetings_line_244
	.globl gText_Rom_57551D
gText_Rom_57551D: @ 0x0857551D
	.string "ようこそ$"
	.if (. - gText_Rom_57551D) > 0x5
	.error "gText_Rom_57551D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57551D) < 0x5
	.space 0x5 - (. - gText_Rom_57551D)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:250 easy_chat_group_greetings_line_250
	.globl gText_Rom_575522
gText_Rom_575522: @ 0x08575522
	.string "よろしく$"
	.if (. - gText_Rom_575522) > 0x5
	.error "gText_Rom_575522 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575522) < 0x5
	.space 0x5 - (. - gText_Rom_575522)
	.endif
	.incbin "baserom.gba", 0x575527, 0x1f9

	@ src/data/easy_chat/easy_chat_group_people.h:4 easy_chat_group_people_line_4 (+1 aliases)
	.globl gText_Rom_575720
gText_Rom_575720: @ 0x08575720
	.string "あいて$"
	.if (. - gText_Rom_575720) > 0x4
	.error "gText_Rom_575720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575720) < 0x4
	.space 0x4 - (. - gText_Rom_575720)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:10 easy_chat_group_people_line_10
	.globl gText_Rom_575724
gText_Rom_575724: @ 0x08575724
	.string "あたし$"
	.if (. - gText_Rom_575724) > 0x4
	.error "gText_Rom_575724 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575724) < 0x4
	.space 0x4 - (. - gText_Rom_575724)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:16 easy_chat_group_people_line_16
	.globl gText_Rom_575728
gText_Rom_575728: @ 0x08575728
	.string "あなた$"
	.if (. - gText_Rom_575728) > 0x4
	.error "gText_Rom_575728 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575728) < 0x4
	.space 0x4 - (. - gText_Rom_575728)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:22 easy_chat_group_people_line_22
	.globl gText_Rom_57572C
gText_Rom_57572C: @ 0x0857572C
	.string "あなたが$"
	.if (. - gText_Rom_57572C) > 0x5
	.error "gText_Rom_57572C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57572C) < 0x5
	.space 0x5 - (. - gText_Rom_57572C)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:28 easy_chat_group_people_line_28
	.globl gText_Rom_575731
gText_Rom_575731: @ 0x08575731
	.string "あなたに$"
	.if (. - gText_Rom_575731) > 0x5
	.error "gText_Rom_575731 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575731) < 0x5
	.space 0x5 - (. - gText_Rom_575731)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:34 easy_chat_group_people_line_34
	.globl gText_Rom_575736
gText_Rom_575736: @ 0x08575736
	.string "あなたの$"
	.if (. - gText_Rom_575736) > 0x5
	.error "gText_Rom_575736 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575736) < 0x5
	.space 0x5 - (. - gText_Rom_575736)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:40 easy_chat_group_people_line_40
	.globl gText_Rom_57573B
gText_Rom_57573B: @ 0x0857573B
	.string "あなたは$"
	.if (. - gText_Rom_57573B) > 0x5
	.error "gText_Rom_57573B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57573B) < 0x5
	.space 0x5 - (. - gText_Rom_57573B)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:46 easy_chat_group_people_line_46
	.globl gText_Rom_575740
gText_Rom_575740: @ 0x08575740
	.string "あなたを$"
	.if (. - gText_Rom_575740) > 0x5
	.error "gText_Rom_575740 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575740) < 0x5
	.space 0x5 - (. - gText_Rom_575740)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:52 easy_chat_group_people_line_52
	.globl gText_Rom_575745
gText_Rom_575745: @ 0x08575745
	.string "おかあさん$"
	.if (. - gText_Rom_575745) > 0x6
	.error "gText_Rom_575745 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575745) < 0x6
	.space 0x6 - (. - gText_Rom_575745)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:58 easy_chat_group_people_line_58 (+1 aliases)
	.globl gText_Rom_57574B
gText_Rom_57574B: @ 0x0857574B
	.string "おじいさん$"
	.if (. - gText_Rom_57574B) > 0x6
	.error "gText_Rom_57574B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57574B) < 0x6
	.space 0x6 - (. - gText_Rom_57574B)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:64 easy_chat_group_people_line_64
	.globl gText_Rom_575751
gText_Rom_575751: @ 0x08575751
	.string "おじさん$"
	.if (. - gText_Rom_575751) > 0x5
	.error "gText_Rom_575751 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575751) < 0x5
	.space 0x5 - (. - gText_Rom_575751)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:70 easy_chat_group_people_line_70
	.globl gText_Rom_575756
gText_Rom_575756: @ 0x08575756
	.string "おとうさん$"
	.if (. - gText_Rom_575756) > 0x6
	.error "gText_Rom_575756 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575756) < 0x6
	.space 0x6 - (. - gText_Rom_575756)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:76 easy_chat_group_people_line_76
	.globl gText_Rom_57575C
gText_Rom_57575C: @ 0x0857575C
	.string "おとこのこ$"
	.if (. - gText_Rom_57575C) > 0x6
	.error "gText_Rom_57575C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57575C) < 0x6
	.space 0x6 - (. - gText_Rom_57575C)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:82 easy_chat_group_people_line_82
	.globl gText_Rom_575762
gText_Rom_575762: @ 0x08575762
	.string "おとな$"
	.if (. - gText_Rom_575762) > 0x4
	.error "gText_Rom_575762 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575762) < 0x4
	.space 0x4 - (. - gText_Rom_575762)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:88 easy_chat_group_people_line_88
	.globl gText_Rom_575766
gText_Rom_575766: @ 0x08575766
	.string "おにいさん$"
	.if (. - gText_Rom_575766) > 0x6
	.error "gText_Rom_575766 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575766) < 0x6
	.space 0x6 - (. - gText_Rom_575766)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:94 easy_chat_group_people_line_94 (+1 aliases)
	.globl gText_Rom_57576C
gText_Rom_57576C: @ 0x0857576C
	.string "おねえさん$"
	.if (. - gText_Rom_57576C) > 0x6
	.error "gText_Rom_57576C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57576C) < 0x6
	.space 0x6 - (. - gText_Rom_57576C)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:100 easy_chat_group_people_line_100 (+1 aliases)
	.globl gText_Rom_575772
gText_Rom_575772: @ 0x08575772
	.string "おばあさん$"
	.if (. - gText_Rom_575772) > 0x6
	.error "gText_Rom_575772 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575772) < 0x6
	.space 0x6 - (. - gText_Rom_575772)
	.endif

