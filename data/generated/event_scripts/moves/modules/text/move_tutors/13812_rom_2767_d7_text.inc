	@ data/text/move_tutors.inc:225 MoveTutor_Text_ExplosionTaught
	.globl gText_Rom_2767D7
gText_Rom_2767D7: @ 0x082767D7
	.string "いつも ポケモンに ばっか\nだいばくはつを おしえとって\lかんじんの ぼくは いつまでも\lばくはつ できん……\pでも ほんとは\nこのまちに いつまでも いたいから\lかも しれん……$"
	.if (. - gText_Rom_2767D7) > 0x5b
	.error "gText_Rom_2767D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2767D7) < 0x5b
	.space 0x5b - (. - gText_Rom_2767D7)
	.endif
	@ analyzed canonical ROM range 0x08276832-0x08276CAE
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08276832: @ 0x08276832
EventScript_JP_08276832: @ 0x08276832
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01B1
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276890 @ EventScript_JP_08276890
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275F81 @ gText_Rom_275F81
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276886 @ EventScript_JP_08276886
	@ event command: call
	.byte 0x04
	.4byte 0x08276C49 @ EventScript_JP_08276C49
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276886 @ EventScript_JP_08276886
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276010 @ gText_Rom_276010
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0017
	@ event command: call
	.byte 0x04
	.4byte 0x08276C42 @ EventScript_JP_08276C42
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276886 @ EventScript_JP_08276886
	@ event command: setflag
	.byte 0x29
	.2byte 0x01B1
	@ event command: goto
	.byte 0x05
	.4byte 0x08276890 @ EventScript_JP_08276890
	.byte 0x02
EventScript_08276886: @ 0x08276886
EventScript_JP_08276886: @ 0x08276886
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275FFE @ gText_Rom_275FFE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_08276890: @ 0x08276890
EventScript_JP_08276890: @ 0x08276890
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276026 @ gText_Rom_276026
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0827689A: @ 0x0827689A
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01B2
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082768F8 @ EventScript_JP_082768F8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276048 @ gText_Rom_276048
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082768EE @ EventScript_JP_082768EE
	@ event command: call
	.byte 0x04
	.4byte 0x08276C49 @ EventScript_JP_08276C49
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082768EE @ EventScript_JP_082768EE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082760CB @ gText_Rom_2760CB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0010
	@ event command: call
	.byte 0x04
	.4byte 0x08276C42 @ EventScript_JP_08276C42
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082768EE @ EventScript_JP_082768EE
	@ event command: setflag
	.byte 0x29
	.2byte 0x01B2
	@ event command: goto
	.byte 0x05
	.4byte 0x082768F8 @ EventScript_JP_082768F8
	.byte 0x02
EventScript_JP_082768EE: @ 0x082768EE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082760B8 @ gText_Rom_2760B8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082768F8: @ 0x082768F8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082760E8 @ gText_Rom_2760E8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276902: @ 0x08276902
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01B3
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276960 @ EventScript_JP_08276960
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276101 @ gText_Rom_276101
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276956 @ EventScript_JP_08276956
	@ event command: call
	.byte 0x04
	.4byte 0x08276C49 @ EventScript_JP_08276C49
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276956 @ EventScript_JP_08276956
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276163 @ gText_Rom_276163
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x001D
	@ event command: call
	.byte 0x04
	.4byte 0x08276C42 @ EventScript_JP_08276C42
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276956 @ EventScript_JP_08276956
	@ event command: setflag
	.byte 0x29
	.2byte 0x01B3
	@ event command: goto
	.byte 0x05
	.4byte 0x08276960 @ EventScript_JP_08276960
	.byte 0x02
EventScript_JP_08276956: @ 0x08276956
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276159 @ gText_Rom_276159
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276960: @ 0x08276960
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827617E @ gText_Rom_27617E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0827696A: @ 0x0827696A
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01B4
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082769C8 @ EventScript_JP_082769C8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827619E @ gText_Rom_27619E
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082769BE @ EventScript_JP_082769BE
	@ event command: call
	.byte 0x04
	.4byte 0x08276C49 @ EventScript_JP_08276C49
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082769BE @ EventScript_JP_082769BE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276226 @ gText_Rom_276226
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: call
	.byte 0x04
	.4byte 0x08276C42 @ EventScript_JP_08276C42
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082769BE @ EventScript_JP_082769BE
	@ event command: setflag
	.byte 0x29
	.2byte 0x01B4
	@ event command: goto
	.byte 0x05
	.4byte 0x082769C8 @ EventScript_JP_082769C8
	.byte 0x02
EventScript_JP_082769BE: @ 0x082769BE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827620A @ gText_Rom_27620A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082769C8: @ 0x082769C8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276248 @ gText_Rom_276248
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082769D2: @ 0x082769D2
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01B5
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276A30 @ EventScript_JP_08276A30
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276272 @ gText_Rom_276272
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276A26 @ EventScript_JP_08276A26
	@ event command: call
	.byte 0x04
	.4byte 0x08276C49 @ EventScript_JP_08276C49
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276A26 @ EventScript_JP_08276A26
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276302 @ gText_Rom_276302
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0008
	@ event command: call
	.byte 0x04
	.4byte 0x08276C42 @ EventScript_JP_08276C42
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276A26 @ EventScript_JP_08276A26
	@ event command: setflag
	.byte 0x29
	.2byte 0x01B5
	@ event command: goto
	.byte 0x05
	.4byte 0x08276A30 @ EventScript_JP_08276A30
	.byte 0x02
EventScript_JP_08276A26: @ 0x08276A26
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082762EE @ gText_Rom_2762EE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276A30: @ 0x08276A30
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827631B @ gText_Rom_27631B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276A3A: @ 0x08276A3A
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01B6
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276A98 @ EventScript_JP_08276A98
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827634D @ gText_Rom_27634D
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276A8E @ EventScript_JP_08276A8E
	@ event command: call
	.byte 0x04
	.4byte 0x08276C49 @ EventScript_JP_08276C49
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276A8E @ EventScript_JP_08276A8E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082763DB @ gText_Rom_2763DB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0018
	@ event command: call
	.byte 0x04
	.4byte 0x08276C42 @ EventScript_JP_08276C42
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276A8E @ EventScript_JP_08276A8E
	@ event command: setflag
	.byte 0x29
	.2byte 0x01B6
	@ event command: goto
	.byte 0x05
	.4byte 0x08276A98 @ EventScript_JP_08276A98
	.byte 0x02
EventScript_JP_08276A8E: @ 0x08276A8E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082763BB @ gText_Rom_2763BB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276A98: @ 0x08276A98
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276404 @ gText_Rom_276404
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276AA2: @ 0x08276AA2
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01B7
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276B00 @ EventScript_JP_08276B00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276436 @ gText_Rom_276436
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276AF6 @ EventScript_JP_08276AF6
	@ event command: call
	.byte 0x04
	.4byte 0x08276C49 @ EventScript_JP_08276C49
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276AF6 @ EventScript_JP_08276AF6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082764E1 @ gText_Rom_2764E1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x000E
	@ event command: call
	.byte 0x04
	.4byte 0x08276C42 @ EventScript_JP_08276C42
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276AF6 @ EventScript_JP_08276AF6
	@ event command: setflag
	.byte 0x29
	.2byte 0x01B7
	@ event command: goto
	.byte 0x05
	.4byte 0x08276B00 @ EventScript_JP_08276B00
	.byte 0x02
EventScript_JP_08276AF6: @ 0x08276AF6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082764BA @ gText_Rom_2764BA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276B00: @ 0x08276B00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082764F8 @ gText_Rom_2764F8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276B0A: @ 0x08276B0A
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01B8
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276B68 @ EventScript_JP_08276B68
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276534 @ gText_Rom_276534
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276B5E @ EventScript_JP_08276B5E
	@ event command: call
	.byte 0x04
	.4byte 0x08276C49 @ EventScript_JP_08276C49
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276B5E @ EventScript_JP_08276B5E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082765F3 @ gText_Rom_2765F3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x000F
	@ event command: call
	.byte 0x04
	.4byte 0x08276C42 @ EventScript_JP_08276C42
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276B5E @ EventScript_JP_08276B5E
	@ event command: setflag
	.byte 0x29
	.2byte 0x01B8
	@ event command: goto
	.byte 0x05
	.4byte 0x08276B68 @ EventScript_JP_08276B68
	.byte 0x02
EventScript_JP_08276B5E: @ 0x08276B5E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082765D1 @ gText_Rom_2765D1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276B68: @ 0x08276B68
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276618 @ gText_Rom_276618
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276B72: @ 0x08276B72
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01B9
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276BD0 @ EventScript_JP_08276BD0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827663B @ gText_Rom_27663B
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276BC6 @ EventScript_JP_08276BC6
	@ event command: call
	.byte 0x04
	.4byte 0x08276C49 @ EventScript_JP_08276C49
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276BC6 @ EventScript_JP_08276BC6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082766DC @ gText_Rom_2766DC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0004
	@ event command: call
	.byte 0x04
	.4byte 0x08276C42 @ EventScript_JP_08276C42
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276BC6 @ EventScript_JP_08276BC6
	@ event command: setflag
	.byte 0x29
	.2byte 0x01B9
	@ event command: goto
	.byte 0x05
	.4byte 0x08276BD0 @ EventScript_JP_08276BD0
	.byte 0x02
EventScript_JP_08276BC6: @ 0x08276BC6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082766C4 @ gText_Rom_2766C4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276BD0: @ 0x08276BD0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082766F4 @ gText_Rom_2766F4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276BDA: @ 0x08276BDA
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01BA
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276C38 @ EventScript_JP_08276C38
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827671B @ gText_Rom_27671B
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276C2E @ EventScript_JP_08276C2E
	@ event command: call
	.byte 0x04
	.4byte 0x08276C49 @ EventScript_JP_08276C49
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276C2E @ EventScript_JP_08276C2E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082767B0 @ gText_Rom_2767B0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x000C
	@ event command: call
	.byte 0x04
	.4byte 0x08276C42 @ EventScript_JP_08276C42
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08276C2E @ EventScript_JP_08276C2E
	@ event command: setflag
	.byte 0x29
	.2byte 0x01BA
	@ event command: goto
	.byte 0x05
	.4byte 0x08276C38 @ EventScript_JP_08276C38
	.byte 0x02
EventScript_JP_08276C2E: @ 0x08276C2E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08276797 @ gText_Rom_276797
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276C38: @ 0x08276C38
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082767D7 @ gText_Rom_2767D7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08276C42: @ 0x08276C42
	@ event command: special
	.byte 0x25
	.2byte 0x01DA
	@ event command: waitstate
	.byte 0x27
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: return
	.byte 0x03
EventScript_08276C49: @ 0x08276C49
EventScript_JP_08276C49: @ 0x08276C49
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275F5D @ gText_Rom_275F5D
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: return
	.byte 0x03
	.byte 0x16, 0x02, 0x40, 0x00, 0x00, 0x16, 0x04, 0x80, 0x04, 0x00, 0x25, 0xF8, 0x01, 0x16, 0x04, 0x80
	.byte 0x01, 0x00, 0x16, 0x05, 0x80, 0x05, 0x00, 0x25, 0xE7, 0x00, 0x21, 0x0D, 0x80, 0x02, 0x00, 0x06
	.byte 0x01, 0xE5, 0x6C, 0x27, 0x08, 0x21, 0x0D, 0x80, 0x03, 0x00, 0x06, 0x01, 0xE5, 0x6C, 0x27, 0x08
	.byte 0x21, 0x0D, 0x80, 0x09, 0x00, 0x06, 0x01, 0xE5, 0x6C, 0x27, 0x08, 0x02, 0x03, 0x40, 0x00, 0x00
	.byte 0x98, 0x6C, 0x27, 0x08, 0x00, 0x00, 0x16, 0x03, 0x40, 0x01, 0x00, 0x02, 0x40, 0x00, 0x00, 0xC2
	.byte 0x6C, 0x27, 0x08, 0x01, 0x40, 0x01, 0x00, 0xFB, 0x6C, 0x27, 0x08, 0x00, 0x00
