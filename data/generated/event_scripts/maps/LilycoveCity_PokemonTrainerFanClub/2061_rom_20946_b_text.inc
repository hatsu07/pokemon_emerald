	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:671 LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength
	.globl gText_Rom_20946B
gText_Rom_20946B: @ 0x0820946B
	.string "たしかに おぬしは\nとてつもなく つよいかも しれない\pじゃが！\nわしには わかる\pその つよさは まだ\nしんの つよさとは いわないのじゃ！\lしんの つよさとは！\p……\pじつは わしも\nよく わからんのじゃ$"
	.if (. - gText_Rom_20946B) > 0x69
	.error "gText_Rom_20946B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20946B) < 0x69
	.space 0x69 - (. - gText_Rom_20946B)
	.endif
	@ analyzed canonical ROM range 0x082094D4-0x08209BC4
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_082094D4: @ 0x082094D4
MapScripts_JP_082094D4: @ 0x082094D4
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082094DA
	.byte 0
EventScript_JP_082094DA: @ 0x082094DA
	@ event command: setescapewarp
	.byte 0xC4
	.byte 0x00
	.byte 0x05
	.byte 0xFF
	.2byte 0x000C
	.2byte 0x0021
	.byte 0x02
EventScript_JP_082094E3: @ 0x082094E3
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x08209A21 @ EventScript_JP_08209A21
	@ event command: call
	.byte 0x04
	.4byte 0x08209668 @ EventScript_JP_08209668
	@ event command: call
	.byte 0x04
	.4byte 0x0820969A @ EventScript_JP_0820969A
	@ event command: call
	.byte 0x04
	.4byte 0x082096CC @ EventScript_JP_082096CC
	@ event command: call
	.byte 0x04
	.4byte 0x082096FE @ EventScript_JP_082096FE
	@ event command: call
	.byte 0x04
	.4byte 0x08209730 @ EventScript_JP_08209730
	@ event command: call
	.byte 0x04
	.4byte 0x0820977A @ EventScript_JP_0820977A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400C
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209824 @ EventScript_JP_08209824
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400B
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082097C4 @ EventScript_JP_082097C4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400B
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082097F4 @ EventScript_JP_082097F4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400B
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209824 @ EventScript_JP_08209824
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400B
	.2byte 0x0008
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082098F1 @ EventScript_JP_082098F1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400B
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08209921 @ EventScript_JP_08209921
	@ event command: goto
	.byte 0x05
	.4byte 0x08209554 @ EventScript_JP_08209554
	.byte 0x02
EventScript_JP_08209554: @ 0x08209554
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400A
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209A2B @ EventScript_JP_08209A2B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209BF3 @ gText_Rom_209BF3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: message
	.byte 0x67
	.4byte 0x08209C52 @ gText_Rom_209C52
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x08209573 @ EventScript_JP_08209573
	.byte 0x02
EventScript_JP_08209573: @ 0x08209573
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x01F1
	@ event command: waitstate
	.byte 0x27
	@ event command: special
	.byte 0x25
	.2byte 0x01F2
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820961D @ EventScript_JP_0820961D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209645 @ EventScript_JP_08209645
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082095DD @ EventScript_JP_082095DD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082095ED @ EventScript_JP_082095ED
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082095FD @ EventScript_JP_082095FD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820960D @ EventScript_JP_0820960D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209AFA @ EventScript_JP_08209AFA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209AFA @ EventScript_JP_08209AFA
	@ event command: end
	.byte 0x02
EventScript_JP_082095DD: @ 0x082095DD
	@ event command: call
	.byte 0x04
	.4byte 0x08209AA0 @ EventScript_JP_08209AA0
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x09
	.byte 0xFF
	.2byte 0x000D
	.2byte 0x0016
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082095ED: @ 0x082095ED
	@ event command: call
	.byte 0x04
	.4byte 0x08209AA0 @ EventScript_JP_08209AA0
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x43
	.byte 0xFF
	.2byte 0x0008
	.2byte 0x0004
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082095FD: @ 0x082095FD
	@ event command: call
	.byte 0x04
	.4byte 0x08209AA0 @ EventScript_JP_08209AA0
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x3B
	.byte 0xFF
	.2byte 0x0008
	.2byte 0x0004
	.byte 0x27, 0x6C, 0x02
EventScript_JP_0820960D: @ 0x0820960D
	@ event command: call
	.byte 0x04
	.4byte 0x08209AA0 @ EventScript_JP_08209AA0
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x38
	.byte 0xFF
	.2byte 0x000D
	.2byte 0x0026
	.byte 0x27, 0x6C, 0x02
EventScript_JP_0820961D: @ 0x0820961D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209C8F @ gText_Rom_209C8F
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
	.4byte 0x08209A94 @ EventScript_JP_08209A94
	@ event command: setvar
	.byte 0x16
	.2byte 0x40B4
	.2byte 0x0005
	@ event command: call
	.byte 0x04
	.4byte 0x08209AA0 @ EventScript_JP_08209AA0
	@ event command: warp
	.byte 0x39
	.byte 0x19
	.byte 0x29
	.byte 0xFF
	.2byte 0x0001
	.2byte 0x000A
	.byte 0x27, 0x6C, 0x02
EventScript_JP_08209645: @ 0x08209645
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209C9B @ gText_Rom_209C9B
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
	.4byte 0x08209A94 @ EventScript_JP_08209A94
	@ event command: call
	.byte 0x04
	.4byte 0x08209AA0 @ EventScript_JP_08209AA0
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x04
	.byte 0xFF
	.2byte 0x0013
	.2byte 0x0043
	.byte 0x27, 0x6C, 0x02
EventScript_JP_08209668: @ 0x08209668
	@ event command: setvar
	.byte 0x16
	.2byte 0x400E
	.2byte 0x0000
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x08B3
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x08244178
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0113
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08244178
	@ event command: setvar
	.byte 0x16
	.2byte 0x400E
	.2byte 0x0001
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01AE
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08244178
	@ event command: setvar
	.byte 0x16
	.2byte 0x400E
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_0820969A: @ 0x0820969A
	@ event command: setvar
	.byte 0x16
	.2byte 0x400D
	.2byte 0x0000
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x08D5
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x08244178
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0173
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08244178
	@ event command: setvar
	.byte 0x16
	.2byte 0x400D
	.2byte 0x0001
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01AF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08244178
	@ event command: setvar
	.byte 0x16
	.2byte 0x400D
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_082096CC: @ 0x082096CC
	@ event command: setvar
	.byte 0x16
	.2byte 0x400C
	.2byte 0x0000
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x08D6
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x08244178
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0178
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08244178
	@ event command: setvar
	.byte 0x16
	.2byte 0x400C
	.2byte 0x0001
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01B0
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08244178
	@ event command: setvar
	.byte 0x16
	.2byte 0x400C
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_082096FE: @ 0x082096FE
	@ event command: setvar
	.byte 0x16
	.2byte 0x4009
	.2byte 0x0000
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x08E0
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x08244178
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0172
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08244178
	@ event command: setvar
	.byte 0x16
	.2byte 0x4009
	.2byte 0x0001
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01DB
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08244178
	@ event command: setvar
	.byte 0x16
	.2byte 0x4009
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_08209730: @ 0x08209730
	@ event command: setvar
	.byte 0x16
	.2byte 0x400B
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400E
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209762 @ EventScript_JP_08209762
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400D
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209768 @ EventScript_JP_08209768
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820976E @ EventScript_JP_0820976E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4009
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209774 @ EventScript_JP_08209774
	@ event command: return
	.byte 0x03
EventScript_JP_08209762: @ 0x08209762
	@ event command: addvar
	.byte 0x17
	.2byte 0x400B
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_08209768: @ 0x08209768
	@ event command: addvar
	.byte 0x17
	.2byte 0x400B
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_0820976E: @ 0x0820976E
	@ event command: addvar
	.byte 0x17
	.2byte 0x400B
	.2byte 0x0004
	@ event command: return
	.byte 0x03
EventScript_JP_08209774: @ 0x08209774
	@ event command: addvar
	.byte 0x17
	.2byte 0x400B
	.2byte 0x0008
	@ event command: return
	.byte 0x03
EventScript_JP_0820977A: @ 0x0820977A
	@ event command: setvar
	.byte 0x16
	.2byte 0x400A
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400E
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082097AC @ EventScript_JP_082097AC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082097B2 @ EventScript_JP_082097B2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400C
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082097B8 @ EventScript_JP_082097B8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4009
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082097BE @ EventScript_JP_082097BE
	@ event command: return
	.byte 0x03
EventScript_JP_082097AC: @ 0x082097AC
	@ event command: addvar
	.byte 0x17
	.2byte 0x400A
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_082097B2: @ 0x082097B2
	@ event command: addvar
	.byte 0x17
	.2byte 0x400A
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_082097B8: @ 0x082097B8
	@ event command: addvar
	.byte 0x17
	.2byte 0x400A
	.2byte 0x0004
	@ event command: return
	.byte 0x03
EventScript_JP_082097BE: @ 0x082097BE
	@ event command: addvar
	.byte 0x17
	.2byte 0x400A
	.2byte 0x0008
	@ event command: return
	.byte 0x03
EventScript_JP_082097C4: @ 0x082097C4
	@ event command: setflag
	.byte 0x29
	.2byte 0x01AE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082634B6 @ gText_Rom_2634B6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x082099C2 @ EventScript_JP_082099C2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082634D5 @ gText_Rom_2634D5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082097E3 @ EventScript_JP_082097E3
	.byte 0x02
EventScript_JP_082097E3: @ 0x082097E3
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x082099E8 @ EventScript_JP_082099E8
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x09
	.byte 0xFF
	.2byte 0x000D
	.2byte 0x0016
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082097F4: @ 0x082097F4
	@ event command: setflag
	.byte 0x29
	.2byte 0x01AF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082634B6 @ gText_Rom_2634B6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x082099C2 @ EventScript_JP_082099C2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275D2A @ gText_Rom_275D2A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08209813 @ EventScript_JP_08209813
	.byte 0x02
EventScript_JP_08209813: @ 0x08209813
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x082099E8 @ EventScript_JP_082099E8
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x3B
	.byte 0xFF
	.2byte 0x0008
	.2byte 0x0004
	.byte 0x27, 0x6C, 0x02
EventScript_JP_08209824: @ 0x08209824
	@ event command: setflag
	.byte 0x29
	.2byte 0x01B0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263476 @ gText_Rom_263476
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x082099C2 @ EventScript_JP_082099C2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275C60 @ gText_Rom_275C60
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209B2A @ EventScript_JP_08209B2A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209B35 @ EventScript_JP_08209B35
	@ event command: addobject
	.byte 0x55
	.2byte 0x0005
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209B49 @ EventScript_JP_08209B49
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209B54 @ EventScript_JP_08209B54
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275CB6 @ gText_Rom_275CB6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209B5F @ EventScript_JP_08209B5F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209B6A @ EventScript_JP_08209B6A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275CDA @ gText_Rom_275CDA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209B75 @ EventScript_JP_08209B75
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209B8E @ EventScript_JP_08209B8E
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: call
	.byte 0x04
	.4byte 0x08243265
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x38
	.byte 0xFF
	.2byte 0x000D
	.2byte 0x0026
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082098E0: @ 0x082098E0
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x082099E8 @ EventScript_JP_082099E8
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x38
	.byte 0xFF
	.2byte 0x000D
	.2byte 0x0026
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082098F1: @ 0x082098F1
	@ event command: setflag
	.byte 0x29
	.2byte 0x01DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082634B6 @ gText_Rom_2634B6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x082099C2 @ EventScript_JP_082099C2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275D2A @ gText_Rom_275D2A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08209910 @ EventScript_JP_08209910
	.byte 0x02
EventScript_JP_08209910: @ 0x08209910
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x082099E8 @ EventScript_JP_082099E8
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x43
	.byte 0xFF
	.2byte 0x0008
	.2byte 0x0004
	.byte 0x27, 0x6C, 0x02
EventScript_JP_08209921: @ 0x08209921
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082634B6 @ gText_Rom_2634B6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x082099C2 @ EventScript_JP_082099C2
	@ event command: message
	.byte 0x67
	.4byte 0x08275DF2 @ gText_Rom_275DF2
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x01F1
	@ event command: waitstate
	.byte 0x27
	@ event command: special
	.byte 0x25
	.2byte 0x01F2
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082097E3 @ EventScript_JP_082097E3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209910 @ EventScript_JP_08209910
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209813 @ EventScript_JP_08209813
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082098E0 @ EventScript_JP_082098E0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820998A @ EventScript_JP_0820998A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820998A @ EventScript_JP_0820998A
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820998A: @ 0x0820998A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263578 @ gText_Rom_263578
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: showobjectat
	.byte 0x58
	.2byte 0x0001
	.byte 0x0D
	.byte 0x0A
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209C81 @ gText_Rom_209C81
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082099C2: @ 0x082099C2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x800F
	.byte 0x0D
	.byte 0x0A
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: addobject
	.byte 0x55
	.2byte 0x0004
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_082099E8: @ 0x082099E8
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209AEF @ EventScript_JP_08209AEF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209AE4 @ EventScript_JP_08209AE4
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x00FF
	.byte 0x00
	.byte 0x00
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: call
	.byte 0x04
	.4byte 0x08243265
	@ event command: return
	.byte 0x03
EventScript_JP_08209A21: @ 0x08209A21
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209BC5 @ gText_Rom_209BC5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08209A2B: @ 0x08209A2B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209BF3 @ gText_Rom_209BF3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: message
	.byte 0x67
	.4byte 0x08209C52 @ gText_Rom_209C52
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x08209573 @ EventScript_JP_08209573
	.byte 0x02, 0x0F, 0x00, 0x16, 0x9C, 0x20, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0x8F, 0x9C, 0x20
	.byte 0x08, 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x94, 0x9A, 0x20, 0x08, 0x16, 0xB4
	.byte 0x40, 0x05, 0x00, 0x04, 0xA0, 0x9A, 0x20, 0x08, 0x39, 0x19, 0x29, 0xFF, 0x01, 0x00, 0x0A, 0x00
	.byte 0x27, 0x6C, 0x02, 0x0F, 0x00, 0x9B, 0x9C, 0x20, 0x08, 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00
	.byte 0x06, 0x01, 0x94, 0x9A, 0x20, 0x08, 0x04, 0xA0, 0x9A, 0x20, 0x08, 0x39, 0x1A, 0x04, 0xFF, 0x13
	.byte 0x00, 0x43, 0x00, 0x27, 0x6C, 0x02
EventScript_JP_08209A94: @ 0x08209A94
	@ event command: message
	.byte 0x67
	.4byte 0x08209CBE @ gText_Rom_209CBE
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x08209573 @ EventScript_JP_08209573
	.byte 0x02
EventScript_JP_08209AA0: @ 0x08209AA0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209CAA @ gText_Rom_209CAA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x800F
	.byte 0x0D
	.byte 0x0A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209AEF @ EventScript_JP_08209AEF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08209AE4 @ EventScript_JP_08209AE4
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x00FF
	.byte 0x00
	.byte 0x00
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: call
	.byte 0x04
	.4byte 0x08243265
	@ event command: return
	.byte 0x03
EventScript_JP_08209AE4: @ 0x08209AE4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08209B04 @ Movement_JP_08209B04
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08209AEF: @ 0x08209AEF
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08209B07 @ Movement_JP_08209B07
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08209AFA: @ 0x08209AFA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209C81 @ gText_Rom_209C81
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
Movement_JP_08209B04: @ 0x08209B04
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_08209B07: @ 0x08209B07
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
	.byte 0x09, 0xFE
EventScript_JP_08209B0B: @ 0x08209B0B
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209B20 @ EventScript_JP_08209B20
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209CCE @ gText_Rom_209CCE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08209B20: @ 0x08209B20
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209D18 @ gText_Rom_209D18
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08209B2A: @ 0x08209B2A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08209B40 @ Movement_JP_08209B40
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08209B35: @ 0x08209B35
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08209B45 @ Movement_JP_08209B45
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_08209B40: @ 0x08209B40
	@ object movement sequence
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x40 @ lock_facing_direction
	.byte 0x0A @ walk_left
	.byte 0x41 @ unlock_facing_direction
	.byte 0xFE @ step_end
Movement_JP_08209B45: @ 0x08209B45
	@ object movement sequence
	.byte 0x40 @ lock_facing_direction
	.byte 0x08 @ walk_down
	.byte 0x41 @ unlock_facing_direction
	.byte 0xFE @ step_end
EventScript_JP_08209B49: @ 0x08209B49
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08209B54: @ 0x08209B54
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08209B5F: @ 0x08209B5F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08209B6A: @ 0x08209B6A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08209B75: @ 0x08209B75
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08209BA7 @ Movement_JP_08209BA7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08209BAB @ Movement_JP_08209BAB
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08209BB0 @ Movement_JP_08209BB0
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08209B8E: @ 0x08209B8E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08209BA7 @ Movement_JP_08209BA7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08209BB8 @ Movement_JP_08209BB8
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08209BBE @ Movement_JP_08209BBE
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_08209BA7: @ 0x08209BA7
	@ object movement sequence
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x13 @ delay_8
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08209BAB: @ 0x08209BAB
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x09 @ walk_up
	.byte 0x14 @ delay_16
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08209BB0: @ 0x08209BB0
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x14 @ delay_16
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08209BB8: @ 0x08209BB8
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x14 @ delay_16
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08209BBE: @ 0x08209BBE
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x09 @ walk_up
	.byte 0x14 @ delay_16
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
