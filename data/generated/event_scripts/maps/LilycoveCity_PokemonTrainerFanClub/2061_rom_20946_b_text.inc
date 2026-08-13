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
.globl EventScript_JP_082094E3
EventScript_JP_082094E3: @ 0x082094E3
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x00, EventScript_JP_08209A21
	call EventScript_JP_08209668
	call EventScript_JP_0820969A
	call EventScript_JP_082096CC
	call EventScript_JP_082096FE
	call EventScript_JP_08209730
	call EventScript_JP_0820977A
	compare_var_to_value 0x400C, 0x0002
	goto_if 0x01, EventScript_JP_08209824
	compare_var_to_value 0x400B, 0x0001
	goto_if 0x01, EventScript_JP_082097C4
	compare_var_to_value 0x400B, 0x0002
	goto_if 0x01, EventScript_JP_082097F4
	compare_var_to_value 0x400B, 0x0004
	goto_if 0x01, EventScript_JP_08209824
	compare_var_to_value 0x400B, 0x0008
	goto_if 0x01, EventScript_JP_082098F1
	compare_var_to_value 0x400B, 0x0000
	goto_if 0x05, EventScript_JP_08209921
	goto EventScript_JP_08209554
	.byte 0x02
EventScript_JP_08209554: @ 0x08209554
	compare_var_to_value 0x400A, 0x0000
	goto_if 0x01, EventScript_JP_08209A2B
	loadword 0x00, gText_Rom_209BF3
	callstd 0x04
	message gText_Rom_209C52
	waitmessage
	goto EventScript_JP_08209573
	.byte 0x02
EventScript_JP_08209573: @ 0x08209573
	setvar 0x8004, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x01F1
	waitstate
	@ event command: special
	.byte 0x25
	.2byte 0x01F2
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0820961D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08209645
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082095DD
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_082095ED
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_082095FD
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_0820960D
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_08209AFA
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08209AFA
	end
EventScript_JP_082095DD: @ 0x082095DD
	call EventScript_JP_08209AA0
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x09
	.byte 0xFF
	.2byte 0x000D
	.2byte 0x0016
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082095ED: @ 0x082095ED
	call EventScript_JP_08209AA0
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x43
	.byte 0xFF
	.2byte 0x0008
	.2byte 0x0004
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082095FD: @ 0x082095FD
	call EventScript_JP_08209AA0
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x3B
	.byte 0xFF
	.2byte 0x0008
	.2byte 0x0004
	.byte 0x27, 0x6C, 0x02
EventScript_JP_0820960D: @ 0x0820960D
	call EventScript_JP_08209AA0
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x38
	.byte 0xFF
	.2byte 0x000D
	.2byte 0x0026
	.byte 0x27, 0x6C, 0x02
EventScript_JP_0820961D: @ 0x0820961D
	loadword 0x00, gText_Rom_209C8F
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08209A94
	setvar 0x40B4, 0x0005
	call EventScript_JP_08209AA0
	@ event command: warp
	.byte 0x39
	.byte 0x19
	.byte 0x29
	.byte 0xFF
	.2byte 0x0001
	.2byte 0x000A
	.byte 0x27, 0x6C, 0x02
EventScript_JP_08209645: @ 0x08209645
	loadword 0x00, gText_Rom_209C9B
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08209A94
	call EventScript_JP_08209AA0
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x04
	.byte 0xFF
	.2byte 0x0013
	.2byte 0x0043
	.byte 0x27, 0x6C, 0x02
EventScript_JP_08209668: @ 0x08209668
	setvar 0x400E, 0x0000
	checkflag 0x08B3
	goto_if 0x00, 0x08244178
	checkitem 0x0113, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08244178
	setvar 0x400E, 0x0001
	checkflag 0x01AE
	goto_if 0x01, 0x08244178
	setvar 0x400E, 0x0002
	return
EventScript_JP_0820969A: @ 0x0820969A
	setvar 0x400D, 0x0000
	checkflag 0x08D5
	goto_if 0x00, 0x08244178
	checkitem 0x0173, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08244178
	setvar 0x400D, 0x0001
	checkflag 0x01AF
	goto_if 0x01, 0x08244178
	setvar 0x400D, 0x0002
	return
EventScript_JP_082096CC: @ 0x082096CC
	setvar 0x400C, 0x0000
	checkflag 0x08D6
	goto_if 0x00, 0x08244178
	checkitem 0x0178, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08244178
	setvar 0x400C, 0x0001
	checkflag 0x01B0
	goto_if 0x01, 0x08244178
	setvar 0x400C, 0x0002
	return
EventScript_JP_082096FE: @ 0x082096FE
	setvar 0x4009, 0x0000
	checkflag 0x08E0
	goto_if 0x00, 0x08244178
	checkitem 0x0172, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08244178
	setvar 0x4009, 0x0001
	checkflag 0x01DB
	goto_if 0x01, 0x08244178
	setvar 0x4009, 0x0002
	return
EventScript_JP_08209730: @ 0x08209730
	setvar 0x400B, 0x0000
	compare_var_to_value 0x400E, 0x0002
	call_if 0x01, EventScript_JP_08209762
	compare_var_to_value 0x400D, 0x0002
	call_if 0x01, EventScript_JP_08209768
	compare_var_to_value 0x400C, 0x0002
	call_if 0x01, EventScript_JP_0820976E
	compare_var_to_value 0x4009, 0x0002
	call_if 0x01, EventScript_JP_08209774
	return
EventScript_JP_08209762: @ 0x08209762
	addvar 0x400B, 0x0001
	return
EventScript_JP_08209768: @ 0x08209768
	addvar 0x400B, 0x0002
	return
EventScript_JP_0820976E: @ 0x0820976E
	addvar 0x400B, 0x0004
	return
EventScript_JP_08209774: @ 0x08209774
	addvar 0x400B, 0x0008
	return
EventScript_JP_0820977A: @ 0x0820977A
	setvar 0x400A, 0x0000
	compare_var_to_value 0x400E, 0x0001
	call_if 0x01, EventScript_JP_082097AC
	compare_var_to_value 0x400D, 0x0001
	call_if 0x01, EventScript_JP_082097B2
	compare_var_to_value 0x400C, 0x0001
	call_if 0x01, EventScript_JP_082097B8
	compare_var_to_value 0x4009, 0x0001
	call_if 0x01, EventScript_JP_082097BE
	return
EventScript_JP_082097AC: @ 0x082097AC
	addvar 0x400A, 0x0001
	return
EventScript_JP_082097B2: @ 0x082097B2
	addvar 0x400A, 0x0002
	return
EventScript_JP_082097B8: @ 0x082097B8
	addvar 0x400A, 0x0004
	return
EventScript_JP_082097BE: @ 0x082097BE
	addvar 0x400A, 0x0008
	return
EventScript_JP_082097C4: @ 0x082097C4
	setflag 0x01AE
	loadword 0x00, gText_Rom_2634B6
	callstd 0x04
	closemessage
	call EventScript_JP_082099C2
	loadword 0x00, gText_Rom_2634D5
	callstd 0x04
	goto EventScript_JP_082097E3
	.byte 0x02
EventScript_JP_082097E3: @ 0x082097E3
	closemessage
	call EventScript_JP_082099E8
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x09
	.byte 0xFF
	.2byte 0x000D
	.2byte 0x0016
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082097F4: @ 0x082097F4
	setflag 0x01AF
	loadword 0x00, gText_Rom_2634B6
	callstd 0x04
	closemessage
	call EventScript_JP_082099C2
	loadword 0x00, gText_Rom_275D2A
	callstd 0x04
	goto EventScript_JP_08209813
	.byte 0x02
EventScript_JP_08209813: @ 0x08209813
	closemessage
	call EventScript_JP_082099E8
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x3B
	.byte 0xFF
	.2byte 0x0008
	.2byte 0x0004
	.byte 0x27, 0x6C, 0x02
EventScript_JP_08209824: @ 0x08209824
	setflag 0x01B0
	loadword 0x00, gText_Rom_263476
	callstd 0x04
	closemessage
	call EventScript_JP_082099C2
	loadword 0x00, gText_Rom_275C60
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playse 0x0015
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
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_08209B2A
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08209B35
	@ event command: addobject
	.byte 0x55
	.2byte 0x0005
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_08209B49
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08209B54
	loadword 0x00, gText_Rom_275CB6
	callstd 0x04
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_08209B5F
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08209B6A
	loadword 0x00, gText_Rom_275CDA
	callstd 0x04
	closemessage
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_08209B75
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08209B8E
	setvar 0x8004, 0x0002
	call 0x08243265
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x38
	.byte 0xFF
	.2byte 0x000D
	.2byte 0x0026
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082098E0: @ 0x082098E0
	closemessage
	call EventScript_JP_082099E8
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x38
	.byte 0xFF
	.2byte 0x000D
	.2byte 0x0026
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082098F1: @ 0x082098F1
	setflag 0x01DB
	loadword 0x00, gText_Rom_2634B6
	callstd 0x04
	closemessage
	call EventScript_JP_082099C2
	loadword 0x00, gText_Rom_275D2A
	callstd 0x04
	goto EventScript_JP_08209910
	.byte 0x02
EventScript_JP_08209910: @ 0x08209910
	closemessage
	call EventScript_JP_082099E8
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x43
	.byte 0xFF
	.2byte 0x0008
	.2byte 0x0004
	.byte 0x27, 0x6C, 0x02
EventScript_JP_08209921: @ 0x08209921
	loadword 0x00, gText_Rom_2634B6
	callstd 0x04
	closemessage
	call EventScript_JP_082099C2
	message gText_Rom_275DF2
	waitmessage
	setvar 0x8004, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x01F1
	waitstate
	@ event command: special
	.byte 0x25
	.2byte 0x01F2
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082097E3
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08209910
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08209813
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_082098E0
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_0820998A
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0820998A
	release
	end
EventScript_JP_0820998A: @ 0x0820998A
	loadword 0x00, gText_Rom_263578
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x001E
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	delay 0x001E
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
	delay 0x001E
	loadword 0x00, gText_Rom_209C81
	callstd 0x04
	release
	end
EventScript_JP_082099C2: @ 0x082099C2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x001E
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x800F
	.byte 0x0D
	.byte 0x0A
	delay 0x003C
	@ event command: addobject
	.byte 0x55
	.2byte 0x0004
	delay 0x001E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_082099E8: @ 0x082099E8
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x001E
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_08209AEF
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08209AE4
	delay 0x001E
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x00FF
	.byte 0x00
	.byte 0x00
	setvar 0x8004, 0x0002
	call 0x08243265
	return
EventScript_JP_08209A21: @ 0x08209A21
	loadword 0x00, gText_Rom_209BC5
	callstd 0x04
	release
	end
EventScript_JP_08209A2B: @ 0x08209A2B
	loadword 0x00, gText_Rom_209BF3
	callstd 0x04
	message gText_Rom_209C52
	waitmessage
	goto EventScript_JP_08209573
	.byte 0x02, 0x0F, 0x00, 0x16, 0x9C, 0x20, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0x8F, 0x9C, 0x20
	.byte 0x08, 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x94, 0x9A, 0x20, 0x08, 0x16, 0xB4
	.byte 0x40, 0x05, 0x00, 0x04, 0xA0, 0x9A, 0x20, 0x08, 0x39, 0x19, 0x29, 0xFF, 0x01, 0x00, 0x0A, 0x00
	.byte 0x27, 0x6C, 0x02, 0x0F, 0x00, 0x9B, 0x9C, 0x20, 0x08, 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00
	.byte 0x06, 0x01, 0x94, 0x9A, 0x20, 0x08, 0x04, 0xA0, 0x9A, 0x20, 0x08, 0x39, 0x1A, 0x04, 0xFF, 0x13
	.byte 0x00, 0x43, 0x00, 0x27, 0x6C, 0x02
EventScript_JP_08209A94: @ 0x08209A94
	message gText_Rom_209CBE
	waitmessage
	goto EventScript_JP_08209573
	.byte 0x02
EventScript_JP_08209AA0: @ 0x08209AA0
	loadword 0x00, gText_Rom_209CAA
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x001E
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x800F
	.byte 0x0D
	.byte 0x0A
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_08209AEF
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08209AE4
	delay 0x001E
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x00FF
	.byte 0x00
	.byte 0x00
	setvar 0x8004, 0x0002
	call 0x08243265
	return
EventScript_JP_08209AE4: @ 0x08209AE4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08209B04 @ Movement_JP_08209B04
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08209AEF: @ 0x08209AEF
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08209B07 @ Movement_JP_08209B07
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08209AFA: @ 0x08209AFA
	loadword 0x00, gText_Rom_209C81
	callstd 0x04
	release
	end
Movement_JP_08209B04: @ 0x08209B04
	@ object movement sequence
	walk_right
	walk_in_place_fastest_up
	step_end
Movement_JP_08209B07: @ 0x08209B07
	@ object movement sequence
	walk_up
	step_end
	.byte 0x09, 0xFE
.globl EventScript_JP_08209B0B
EventScript_JP_08209B0B: @ 0x08209B0B
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_08209B20
	loadword 0x00, gText_Rom_209CCE
	callstd 0x04
	release
	end
EventScript_JP_08209B20: @ 0x08209B20
	loadword 0x00, gText_Rom_209D18
	callstd 0x04
	release
	end
EventScript_JP_08209B2A: @ 0x08209B2A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08209B40 @ Movement_JP_08209B40
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08209B35: @ 0x08209B35
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08209B45 @ Movement_JP_08209B45
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
Movement_JP_08209B40: @ 0x08209B40
	@ object movement sequence
	walk_in_place_fastest_right
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end
Movement_JP_08209B45: @ 0x08209B45
	@ object movement sequence
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end
EventScript_JP_08209B49: @ 0x08209B49
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08209B54: @ 0x08209B54
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08209B5F: @ 0x08209B5F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08209B6A: @ 0x08209B6A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
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
	return
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
	return
Movement_JP_08209BA7: @ 0x08209BA7
	@ object movement sequence
	walk_in_place_fastest_up
	delay_8
	set_invisible
	step_end
Movement_JP_08209BAB: @ 0x08209BAB
	@ object movement sequence
	delay_16
	walk_up
	delay_16
	set_invisible
	step_end
Movement_JP_08209BB0: @ 0x08209BB0
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	walk_right
	walk_in_place_fastest_up
	delay_16
	set_invisible
	step_end
Movement_JP_08209BB8: @ 0x08209BB8
	@ object movement sequence
	delay_16
	walk_right
	walk_in_place_fastest_up
	delay_16
	set_invisible
	step_end
Movement_JP_08209BBE: @ 0x08209BBE
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	walk_up
	delay_16
	set_invisible
	step_end
