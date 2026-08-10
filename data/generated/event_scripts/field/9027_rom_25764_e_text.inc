	@ field-script:0x25733A FieldScriptText_25764E
	.globl gText_Rom_25764E
gText_Rom_25764E: @ 0x0825764E
	.string "すっ　すばらしい！\pまさに　きみ　そのもの　って　かんじの\nすてきな　プロフィール！\pこれを　きいた　ひとは\nだれもが　きみの　とりこに　なるだろうね！\pどうも　ありがとう！"
	.byte EOS
	.if (. - gText_Rom_25764E) > 0x58
	.error "gText_Rom_25764E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25764E) < 0x58
	.space 0x58 - (. - gText_Rom_25764E)
	.endif
	@ analyzed canonical ROM range 0x082576A6-0x08257A88
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082576A6: @ 0x082576A6
EventText_JP_082576A6: @ 0x082576A6
	.string "ややっ!\nその　ことばを　しっている　とは……\pという　ことは　きみも\nふしぎな　できごと　クラブの　なかま　だね!$"
EventScript_JP_082576E1: @ 0x082576E1
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: special
	.byte 0x25
	.2byte 0x00B5
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257716 @ EventScript_JP_08257716
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825779A @ EventScript_JP_0825779A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082577B1 @ EventScript_JP_082577B1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257A98 @ gText_Rom_257A98
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08257716: @ 0x08257716
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257AEA @ gText_Rom_257AEA
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825774C @ EventScript_JP_0825774C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257C57 @ gText_Rom_257C57
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825774C @ EventScript_JP_0825774C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257B71 @ gText_Rom_257B71
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0086
	@ event command: special
	.byte 0x25
	.2byte 0x00B7
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825774C: @ 0x0825774C
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0083
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08257766 @ EventScript_JP_08257766
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257B85 @ gText_Rom_257B85
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08257766: @ 0x08257766
	@ event command: message
	.byte 0x67
	.4byte 0x08257BAB @ gText_Rom_257BAB
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x016F
	@ event command: waitfanfare
	.byte 0x32
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257BC6 @ gText_Rom_257BC6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x00B8
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0086
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08257780: @ 0x08257780
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00C3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08257791 @ EventScript_JP_08257791
	@ event command: return
	.byte 0x03
EventScript_JP_08257791: @ 0x08257791
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257BD3 @ gText_Rom_257BD3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0825779A: @ 0x0825779A
	@ event command: special
	.byte 0x25
	.2byte 0x00B5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257B57 @ gText_Rom_257B57
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x08257780 @ EventScript_JP_08257780
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082577B1: @ 0x082577B1
	@ event command: special
	.byte 0x25
	.2byte 0x00B5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257C39 @ gText_Rom_257C39
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x00B9
	@ event command: special
	.byte 0x25
	.2byte 0x008D
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x08257780 @ EventScript_JP_08257780
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x08257780 @ EventScript_JP_08257780
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082577DA: @ 0x082577DA
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082578D4 @ EventScript_JP_082578D4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082578F8 @ EventScript_JP_082578F8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257A25 @ EventScript_JP_08257A25
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257C73 @ gText_Rom_257C73
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825781F @ EventScript_JP_0825781F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257D22 @ gText_Rom_257D22
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825781F: @ 0x0825781F
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0084
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082578B6 @ EventScript_JP_082578B6
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0207
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082578CA @ EventScript_JP_082578CA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257CB0 @ gText_Rom_257CB0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x00BC
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x00FF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257893 @ EventScript_JP_08257893
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0085
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082578C0 @ EventScript_JP_082578C0
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x8005
	.2byte 0x00BA
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x8005
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257CC0 @ gText_Rom_257CC0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: special
	.byte 0x25
	.2byte 0x00BB
	@ event command: incrementgamestat
	.byte 0xC3
	.byte 0x2F
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825789D @ EventScript_JP_0825789D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08257893: @ 0x08257893
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257D57 @ gText_Rom_257D57
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825789D: @ 0x0825789D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257CEB @ gText_Rom_257CEB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825781F @ EventScript_JP_0825781F
	@ event command: goto
	.byte 0x05
	.4byte 0x08257893 @ EventScript_JP_08257893
	.byte 0x02
EventScript_JP_082578B6: @ 0x082578B6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257E2F @ gText_Rom_257E2F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082578C0: @ 0x082578C0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257E5F @ gText_Rom_257E5F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082578CA: @ 0x082578CA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257E87 @ gText_Rom_257E87
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082578D4: @ 0x082578D4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257D0D @ gText_Rom_257D0D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082578DE: @ 0x082578DE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257D88 @ gText_Rom_257D88
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_082578E7: @ 0x082578E7
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00BE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x05
	.4byte 0x082578DE @ EventScript_JP_082578DE
	@ event command: return
	.byte 0x03
EventScript_JP_082578F8: @ 0x082578F8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257D65 @ gText_Rom_257D65
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x082578E7 @ EventScript_JP_082578E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257CEB @ gText_Rom_257CEB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825781F @ EventScript_JP_0825781F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257E51 @ gText_Rom_257E51
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257936 @ EventScript_JP_08257936
	@ event command: goto
	.byte 0x05
	.4byte 0x08257893 @ EventScript_JP_08257893
	.byte 0x02
EventScript_JP_08257936: @ 0x08257936
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0083
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257A06 @ EventScript_JP_08257A06
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B6
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257975 @ EventScript_JP_08257975
	@ event command: special
	.byte 0x25
	.2byte 0x00BD
	@ event command: waitstate
	.byte 0x27
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257893 @ EventScript_JP_08257893
	@ event command: goto
	.byte 0x05
	.4byte 0x08257975 @ EventScript_JP_08257975
	.byte 0x02
EventScript_JP_08257975: @ 0x08257975
	@ event command: special
	.byte 0x25
	.2byte 0x00BF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257DDD @ gText_Rom_257DDD
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257991 @ EventScript_JP_08257991
	@ event command: goto
	.byte 0x05
	.4byte 0x08257893 @ EventScript_JP_08257893
	.byte 0x02
EventScript_JP_08257991: @ 0x08257991
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00C5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082579AB @ EventScript_JP_082579AB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257D35 @ gText_Rom_257D35
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082579AB: @ 0x082579AB
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08257A10 @ Movement_JP_08257A10
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00C0
	@ event command: special
	.byte 0x25
	.2byte 0x00C6
	@ event command: playse
	.byte 0x2F
	.2byte 0x005F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257DF6 @ gText_Rom_257DF6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x800D
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257E14 @ gText_Rom_257E14
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082579ED @ EventScript_JP_082579ED
	@ event command: goto
	.byte 0x05
	.4byte 0x08257893 @ EventScript_JP_08257893
	.byte 0x02
EventScript_JP_082579ED: @ 0x082579ED
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257D47 @ gText_Rom_257D47
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257936 @ EventScript_JP_08257936
	@ event command: goto
	.byte 0x05
	.4byte 0x08257893 @ EventScript_JP_08257893
	.byte 0x02
EventScript_JP_08257A06: @ 0x08257A06
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257DA4 @ gText_Rom_257DA4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
Movement_JP_08257A10: @ 0x08257A10
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x02 @ face_left
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x03 @ face_right
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x01 @ face_up
	.byte 0x05 @ walk_slow_up
	.byte 0x54 @ set_invisible
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x00 @ face_down
	.byte 0x55 @ set_visible
	.byte 0x04 @ walk_slow_down
	.byte 0xFE @ step_end
	.byte 0x02
EventScript_JP_08257A25: @ 0x08257A25
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257D65 @ gText_Rom_257D65
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x082578E7 @ EventScript_JP_082578E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082578E7 @ EventScript_JP_082578E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257E51 @ gText_Rom_257E51
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257936 @ EventScript_JP_08257936
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257D57 @ gText_Rom_257D57
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x25, 0xBD, 0x00, 0x27, 0x21, 0x0D, 0x80, 0x02, 0x00, 0x06, 0x01, 0x93, 0x78, 0x25, 0x08, 0x19
	.byte 0x04, 0x80, 0x0D, 0x80, 0x26, 0x0D, 0x80, 0xC0, 0x00, 0x0F, 0x00, 0xF6, 0x7D, 0x25, 0x08, 0x09
	.byte 0x04, 0x0F, 0x00, 0x57, 0x7D, 0x25, 0x08, 0x09, 0x04, 0x6C, 0x02
