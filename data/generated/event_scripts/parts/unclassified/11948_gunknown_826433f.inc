	.globl EventScriptData_JP_0826433F
EventScriptData_JP_0826433F: @ 0x0826433F
	@ Decoded event bytecode: exact ROM size 0x19
	lockall
	delay 0x0014
	applymovement 0x00FF, 0x08264371
	waitmovement 0x0000
	playse 0x002B
	delay 0x003C
	warphole 0xFFFF
	waitstate
	end
	.globl EventScriptData_JP_08264358
EventScriptData_JP_08264358: @ 0x08264358
	@ Embedded ROM bytes: file offset 0x264358, size 0x719
	@ semanticized-mass: resolved embedded ROM pointers
	@ ANALYSIS: MIXED_EVENT_SCRIPT script=0x19 residual=0x5F
	lockall
	delay 0x0014
	applymovement 0x00FF, 0x08264371
	waitmovement 0x0000
	playse 0x002B
	delay 0x003C
	.byte 0x25 @ special 0x013E; no matching SPECIAL_* constant
	.2byte 0x013E
	waitstate
	end
	@ ANALYSIS: RESIDUAL_CFG_RECOVERY addr=0x08264371 original_size=0x5F semantic_bytes=0x5B
	@ ANALYSIS: PROVEN_MOVEMENT_SEQUENCE addr=0x08264371 size=0x2 refs=2
.LMovement_08264371:
	.byte 0x54, 0xFE
	.byte 0x25 @ special 0x016A; no matching SPECIAL_* constant
	.2byte 0x016A
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, 0x0826455C
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScriptData_JP_0826439D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, 0x08264832
	end
	.globl EventScriptData_JP_0826439D
EventScriptData_JP_0826439D:
	lock
	faceplayer
	loadword 0x00, gText_Rom_264A71
	callstd 0x04
	specialvar_ 0x800D, 0x016B
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082643D8
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x082643CE
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, 0x08264518
	end
	@ ANALYSIS: PROVEN_CROSS_BOUNDARY_EVENT addr=0x082643CE
	loadword 0x00, gText_Rom_264A9D
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x082643D4 original_size=0x94 typed_bytes=0x8C
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x082643D4 size=0x4 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x082643D4
	callstd 0x04
	@ release @ 0x082643D6
	release
	@ end @ 0x082643D7
	end
	.byte 0x25 @ special 0x016C; no matching SPECIAL_* constant
	.2byte 0x016C
	loadword 0x00, gText_Rom_264A82
	callstd 0x04
	specialvar_ 0x800D, 0x016D
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x0826443D
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x082643FF
	end
	.byte 0x25 @ special 0x016E; no matching SPECIAL_* constant
	.2byte 0x016E
	.byte 0x25 @ special 0x016F; no matching SPECIAL_* constant
	.2byte 0x016F
	specialvar_ 0x800D, 0x0170
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08264421
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x0826442F
	end
	loadword 0x00, gText_Rom_264AAE
	callstd 0x04
	goto 0x0826443D
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x0826442E size=0x1 source=v49_typed_owner_closed_cfg
	@ end @ 0x0826442E
	end
	loadword 0x00, gText_Rom_264AED
	callstd 0x04
	goto 0x0826443D
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x0826443C size=0x1 source=v49_typed_owner_closed_cfg
	@ end @ 0x0826443C
	end
	loadword 0x00, gText_Rom_264B1E
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x0826445C
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08264466
	end
	loadword 0x00, gText_Rom_264B63
	callstd 0x04
	release
	end
	@ Recovered proven split event command at 0x08264466
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08264466 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264B50
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x0826446C size=0x7 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x0826446C
	callstd 0x04
	@ goto 0x08264474 @ 0x0826446E
	goto 0x08264474
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x08264473 source=v47_hardstop_boundary
	.byte 0x02
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x08264474 size=0x22 source=v43_v44
	@ fadescreen 0x01 @ 0x08264474
	fadescreen 0x01
	@ setvar 0x800D, 0x0000 @ 0x08264476
	setvar 0x800D, 0x0000
	@ special 0x0171 @ 0x0826447B
	.byte 0x25
	.2byte 0x0171
	@ waitstate @ 0x0826447E
	waitstate
	@ compare_var_to_value 0x800D, 0x0000 @ 0x0826447F
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x08264496 @ 0x08264484
	goto_if 0x01, 0x08264496
	@ compare_var_to_value 0x800D, 0x0001 @ 0x0826448A
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x082644B5 @ 0x0826448F
	goto_if 0x01, 0x082644B5
	@ end @ 0x08264495
	end
	@ Recovered proven split event command at 0x08264496
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08264496 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264B77
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x0826449C size=0x19 source=v41_hidden_entry_bulk
	@ callstd 0x05 @ 0x0826449C
	callstd 0x05
	@ compare_var_to_value 0x800D, 0x0001 @ 0x0826449E
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x0826445C @ 0x082644A3
	goto_if 0x01, 0x0826445C
	@ compare_var_to_value 0x800D, 0x0000 @ 0x082644A9
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x08264474 @ 0x082644AE
	goto_if 0x01, 0x08264474
	@ end @ 0x082644B4
	end
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x082644B5 size=0x1C source=v42_bulk
	@ specialvar 0x800D, 0x0172 @ 0x082644B5
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0172
	@ compare_var_to_value 0x800D, 0x0000 @ 0x082644BA
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x082644D1 @ 0x082644BF
	goto_if 0x01, 0x082644D1
	@ compare_var_to_value 0x800D, 0x0001 @ 0x082644C5
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x082644DE @ 0x082644CA
	goto_if 0x01, 0x082644DE
	@ end @ 0x082644D0
	end
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x082644D1 size=0x36 source=v43_v44
	@ special 0x016C @ 0x082644D1
	.byte 0x25
	.2byte 0x016C
	@ loadword 0x00, gText_Rom_264B85 @ 0x082644D4
	loadword 0x00, gText_Rom_264B85
	@ callstd 0x04 @ 0x082644DA
	callstd 0x04
	@ release @ 0x082644DC
	release
	@ end @ 0x082644DD
	end
	@ specialvar 0x800D, 0x0173 @ 0x082644DE
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0173
	@ compare_var_to_value 0x800D, 0x0000 @ 0x082644E3
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x082644FA @ 0x082644E8
	goto_if 0x01, 0x082644FA
	@ compare_var_to_value 0x800D, 0x0001 @ 0x082644EE
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x08264507 @ 0x082644F3
	goto_if 0x01, 0x08264507
	@ end @ 0x082644F9
	end
	@ special 0x016C @ 0x082644FA
	.byte 0x25
	.2byte 0x016C
	@ loadword 0x00, gText_Rom_264BC5 @ 0x082644FD
	loadword 0x00, gText_Rom_264BC5
	@ callstd 0x04 @ 0x08264503
	callstd 0x04
	@ release @ 0x08264505
	release
	@ end @ 0x08264506
	end
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x08264507 size=0x3 source=v45_trusted_consumer
	@ special 0x016C @ 0x08264507
	.byte 0x25
	.2byte 0x016C
	@ Recovered proven split event command at 0x0826450A
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0826450A raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264C02
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08264510 original_size=0x14 typed_bytes=0xA
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x08264510 size=0x7 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x08264510
	callstd 0x04
	@ goto 0x08264518 @ 0x08264512
	goto 0x08264518
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x08264517 source=v47_hardstop_boundary
	.byte 0x02
	setvar 0x8004, 0x0000
	specialvar_ 0x8004, 0x0174
	@ Recovered proven split event command at 0x08264522
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08264522 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264C5A
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08264528 original_size=0x38 typed_bytes=0x2
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x08264528 size=0x34 commands=16 hard_stops=3
	@ Full bytecode/CFG identity proven; runtime reachability is not claimed.
.LClosedEvent_08264528:
	callstd 0x04
	setorcopyvar 0x8000, 0x8004
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, .LClosedEvent_0826454D
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, .LClosedEvent_08264557
	end
.LClosedEvent_0826454D:
	loadword 0x00, gText_Rom_264C91
	callstd 0x04
	release
	end
.LClosedEvent_08264557:
	.byte 0x25 @ PROVEN_UNREFERENCED_EVENT_CMD special 0x0175; no matching SPECIAL_* constant
	.2byte 0x0175
	release
	end
	lock
	faceplayer
	@ Recovered proven split event command at 0x0826455E
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0826455E raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264CBD
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x08264564 size=0x29 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x08264564
	callstd 0x04
	@ specialvar 0x800D, 0x0176 @ 0x08264566
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0176
	@ compare_var_to_value 0x800D, 0x0000 @ 0x0826456B
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x0826458D @ 0x08264570
	goto_if 0x01, 0x0826458D
	@ compare_var_to_value 0x800D, 0x0001 @ 0x08264576
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x082645B4 @ 0x0826457B
	goto_if 0x01, 0x082645B4
	@ compare_var_to_value 0x800D, 0x0002 @ 0x08264581
	compare_var_to_value 0x800D, 0x0002
	@ goto_if 0x01, 0x082646F4 @ 0x08264586
	goto_if 0x01, 0x082646F4
	@ end @ 0x0826458C
	end
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x0826458D size=0x27 source=v42_bulk
	@ specialvar 0x800D, 0x0177 @ 0x0826458D
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0177
	@ compare_var_to_value 0x800D, 0x0000 @ 0x08264592
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x082645D0 @ 0x08264597
	goto_if 0x01, 0x082645D0
	@ compare_var_to_value 0x800D, 0x0001 @ 0x0826459D
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x082645DA @ 0x082645A2
	goto_if 0x01, 0x082645DA
	@ compare_var_to_value 0x800D, 0x0002 @ 0x082645A8
	compare_var_to_value 0x800D, 0x0002
	@ goto_if 0x01, 0x082645E8 @ 0x082645AD
	goto_if 0x01, 0x082645E8
	@ end @ 0x082645B3
	end
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x082645B4 size=0x26 source=v45_trusted_consumer
	@ specialvar 0x800D, 0x0178 @ 0x082645B4
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0178
	@ compare_var_to_value 0x800D, 0x0000 @ 0x082645B9
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x08264761 @ 0x082645BE
	goto_if 0x01, 0x08264761
	@ compare_var_to_value 0x800D, 0x0001 @ 0x082645C4
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x082645D0 @ 0x082645C9
	goto_if 0x01, 0x082645D0
	@ end @ 0x082645CF
	end
	@ loadword 0x00, gText_Rom_264CD7 @ 0x082645D0
	loadword 0x00, gText_Rom_264CD7
	@ callstd 0x04 @ 0x082645D6
	callstd 0x04
	@ release @ 0x082645D8
	release
	@ end @ 0x082645D9
	end
	@ Recovered proven split event command at 0x082645DA
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x082645DA raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264D11
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x082645E0 size=0x7 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x082645E0
	callstd 0x04
	@ goto 0x082645F6 @ 0x082645E2
	goto 0x082645F6
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x082645E7 source=v47_hardstop_boundary
	.byte 0x02
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x082645E8 size=0xD source=v45_trusted_consumer
	@ loadword 0x00, gText_Rom_264D11 @ 0x082645E8
	loadword 0x00, gText_Rom_264D11
	@ callstd 0x04 @ 0x082645EE
	callstd 0x04
	@ goto 0x082645F6 @ 0x082645F0
	goto 0x082645F6
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x082645F5 source=v47_hardstop_boundary
	.byte 0x02
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x082645F6 size=0x24 source=v45_trusted_consumer
	@ setvar 0x8004, 0x0000 @ 0x082645F6
	setvar 0x8004, 0x0000
	@ loadword 0x00, gText_Rom_264D3A @ 0x082645FB
	loadword 0x00, gText_Rom_264D3A
	@ callstd 0x05 @ 0x08264601
	callstd 0x05
	@ compare_var_to_value 0x800D, 0x0001 @ 0x08264603
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x08264624 @ 0x08264608
	goto_if 0x01, 0x08264624
	@ compare_var_to_value 0x800D, 0x0000 @ 0x0826460E
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x0826461A @ 0x08264613
	goto_if 0x01, 0x0826461A
	@ end @ 0x08264619
	end
	@ Recovered proven split event command at 0x0826461A
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0826461A raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264D7A
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x08264620 size=0x4 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x08264620
	callstd 0x04
	@ release @ 0x08264622
	release
	@ end @ 0x08264623
	end
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x08264624 size=0x30 source=v42_bulk
	@ special 0x0180 @ 0x08264624
	.byte 0x25
	.2byte 0x0180
	@ compare_var_to_value 0x8004, 0x0000 @ 0x08264627
	compare_var_to_value 0x8004, 0x0000
	@ goto_if 0x01, 0x08264654 @ 0x0826462C
	goto_if 0x01, 0x08264654
	@ compare_var_to_value 0x8004, 0x000F @ 0x08264632
	compare_var_to_value 0x8004, 0x000F
	@ goto_if 0x01, 0x0826465E @ 0x08264637
	goto_if 0x01, 0x0826465E
	@ compare_var_to_value 0x800D, 0x0000 @ 0x0826463D
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x08264668 @ 0x08264642
	goto_if 0x01, 0x08264668
	@ compare_var_to_value 0x800D, 0x0001 @ 0x08264648
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x08264691 @ 0x0826464D
	goto_if 0x01, 0x08264691
	@ end @ 0x08264653
	end
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x08264654 size=0x9 source=v45_trusted_consumer
	@ special 0x0179 @ 0x08264654
	.byte 0x25
	.2byte 0x0179
	@ waitstate @ 0x08264657
	waitstate
	@ goto 0x0826463D @ 0x08264658
	goto 0x0826463D
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x0826465D source=v47_hardstop_boundary
	.byte 0x02
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x0826465E size=0x9 source=v45_trusted_consumer
	@ special 0x017A @ 0x0826465E
	.byte 0x25
	.2byte 0x017A
	@ waitstate @ 0x08264661
	waitstate
	@ goto 0x0826463D @ 0x08264662
	goto 0x0826463D
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x08264667 source=v47_hardstop_boundary
	.byte 0x02
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x08264668 size=0x66 source=v45_trusted_consumer
	@ loadword 0x00, gText_Rom_264D88 @ 0x08264668
	loadword 0x00, gText_Rom_264D88
	@ callstd 0x05 @ 0x0826466E
	callstd 0x05
	@ compare_var_to_value 0x800D, 0x0001 @ 0x08264670
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x08264687 @ 0x08264675
	goto_if 0x01, 0x08264687
	@ compare_var_to_value 0x800D, 0x0000 @ 0x0826467B
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x08264624 @ 0x08264680
	goto_if 0x01, 0x08264624
	@ end @ 0x08264686
	end
	@ loadword 0x00, gText_Rom_264D97 @ 0x08264687
	loadword 0x00, gText_Rom_264D97
	@ callstd 0x04 @ 0x0826468D
	callstd 0x04
	@ release @ 0x0826468F
	release
	@ end @ 0x08264690
	end
	@ special 0x017D @ 0x08264691
	.byte 0x25
	.2byte 0x017D
	@ loadword 0x00, gText_Rom_264D62 @ 0x08264694
	loadword 0x00, gText_Rom_264D62
	@ callstd 0x04 @ 0x0826469A
	callstd 0x04
	@ specialvar 0x800D, 0x017B @ 0x0826469C
	.byte 0x26
	.2byte 0x800D
	.2byte 0x017B
	@ compare_var_to_value 0x800D, 0x0000 @ 0x082646A1
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x082646CF @ 0x082646A6
	goto_if 0x01, 0x082646CF
	@ compare_var_to_value 0x800D, 0x0001 @ 0x082646AC
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x082646B8 @ 0x082646B1
	goto_if 0x01, 0x082646B8
	@ end @ 0x082646B7
	end
	@ playse 0x001F @ 0x082646B8
	playse 0x001F
	@ delay 0x000A @ 0x082646BB
	delay 0x000A
	@ playse 0x001F @ 0x082646BE
	playse 0x001F
	@ loadword 0x00, gText_Rom_264DA6 @ 0x082646C1
	loadword 0x00, gText_Rom_264DA6
	@ callstd 0x04 @ 0x082646C7
	callstd 0x04
	@ goto 0x082646F4 @ 0x082646C9
	goto 0x082646F4
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x082646CE source=v47_hardstop_boundary
	.byte 0x02
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x082646CF size=0xF source=v45_trusted_consumer
	@ special 0x0188 @ 0x082646CF
	.byte 0x25
	.2byte 0x0188
	@ special 0x0189 @ 0x082646D2
	.byte 0x25
	.2byte 0x0189
	@ playse 0x0020 @ 0x082646D5
	playse 0x0020
	@ delay 0x000A @ 0x082646D8
	delay 0x000A
	@ playse 0x0020 @ 0x082646DB
	playse 0x0020
	@ Recovered proven split event command at 0x082646DE
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x082646DE raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264E27
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x082646E4 size=0x2 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x082646E4
	callstd 0x04
	@ Recovered proven split event command at 0x082646E6
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x082646E6 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264E41
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x082646EC size=0x7 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x082646EC
	callstd 0x04
	@ goto 0x08264761 @ 0x082646EE
	goto 0x08264761
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x082646F3 source=v47_hardstop_boundary
	.byte 0x02
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x082646F4 size=0x29 source=v45_trusted_consumer
	@ specialvar 0x800D, 0x017E @ 0x082646F4
	.byte 0x26
	.2byte 0x800D
	.2byte 0x017E
	@ compare_var_to_value 0x800D, 0x0001 @ 0x082646F9
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x08264710 @ 0x082646FE
	goto_if 0x01, 0x08264710
	@ compare_var_to_value 0x800D, 0x0000 @ 0x08264704
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x0826471E @ 0x08264709
	goto_if 0x01, 0x0826471E
	@ end @ 0x0826470F
	end
	@ loadword 0x00, gText_Rom_264DC7 @ 0x08264710
	loadword 0x00, gText_Rom_264DC7
	@ callstd 0x04 @ 0x08264716
	callstd 0x04
	@ goto 0x0826472C @ 0x08264718
	goto 0x0826472C
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x0826471D size=0x1 source=v49_typed_owner_closed_cfg
	@ end @ 0x0826471D
	end
	@ Recovered proven split event command at 0x0826471E
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0826471E raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264DC7
	@ ANALYSIS: PROVEN_UNREFERENCED_STITCHED_EVENT_CFG addr=0x08264724 raw_size=0xB4 commands=49 hard_stops=9
	@ Full bytecode/CFG identity and split final pointer operand proven; runtime reachability is not claimed.
.LStitchedEvent_08264724:
	callstd 0x04
	goto .LStitchedEvent_0826472C
	end
.LStitchedEvent_0826472C:
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT_FRAGMENT
	@ Event-script bytecode fragment retained as numeric command/operand data.
	setvar 0x8005, 0x0000
	.byte 0x25 @ PROVEN_UNREFERENCED_STITCHED_EVENT_CMD special 0x017C; no matching SPECIAL_* constant
	.2byte 0x017C
	.byte 0x25 @ PROVEN_UNREFERENCED_STITCHED_EVENT_CMD special 0x017D; no matching SPECIAL_* constant
	.2byte 0x017D
	setorcopyvar 0x8000, 0x8005
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, .LStitchedEvent_08264754
	goto .LStitchedEvent_08264761
	end
.LStitchedEvent_08264754:
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT_FRAGMENT
	@ Event-script bytecode fragment retained as numeric command/operand data.
	loadword 0x00, gText_Rom_264DFB
	callstd 0x04
	.byte 0x25 @ PROVEN_UNREFERENCED_STITCHED_EVENT_CMD special 0x017F; no matching SPECIAL_* constant
	.2byte 0x017F
	release
	end
.LStitchedEvent_08264761:
	loadword 0x00, gText_Rom_264E73
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, .LStitchedEvent_0826478D
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, .LStitchedEvent_08264780
	end
.LStitchedEvent_08264780:
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT_FRAGMENT
	@ Event-script bytecode fragment retained as numeric command/operand data.
	.byte 0x25 @ PROVEN_UNREFERENCED_STITCHED_EVENT_CMD special 0x018A; no matching SPECIAL_* constant
	.2byte 0x018A
	loadword 0x00, gText_Rom_264E8E
	callstd 0x04
	release
	end
.LStitchedEvent_0826478D:
	loadword 0x00, gText_Rom_264EA2
	callstd 0x04
.LStitchedEvent_08264795:
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT_FRAGMENT
	@ Event-script bytecode fragment retained as numeric command/operand data.
	fadescreen 0x01
	setvar 0x800D, 0x0000
	.byte 0x25 @ PROVEN_UNREFERENCED_STITCHED_EVENT_CMD special 0x0181; no matching SPECIAL_* constant
	.2byte 0x0181
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, .LStitchedEvent_082647B7
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, .LStitchedEvent_082647D6
	end
.LStitchedEvent_082647B7:
	loadword 0x00, gText_Rom_264F11
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, .LStitchedEvent_08264780
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, .LStitchedEvent_08264795
	end
.LStitchedEvent_082647D6:
	loadword 0x00, gText_Rom_264F37
	@ semanticized-mass: resolved embedded ROM pointers
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x082647DC size=0x23 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x082647DC
	callstd 0x04
	@ special 0x0182 @ 0x082647DE
	.byte 0x25
	.2byte 0x0182
	@ special 0x0180 @ 0x082647E1
	.byte 0x25
	.2byte 0x0180
	@ setvar 0x8004, 0x0010 @ 0x082647E4
	setvar 0x8004, 0x0010
	@ fadescreen 0x01 @ 0x082647E9
	fadescreen 0x01
	@ special 0x0183 @ 0x082647EB
	.byte 0x25
	.2byte 0x0183
	@ waitstate @ 0x082647EE
	waitstate
	@ compare_var_to_value 0x800D, 0x0000 @ 0x082647EF
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x08264800 @ 0x082647F4
	goto_if 0x01, 0x08264800
	@ goto 0x0826481F @ 0x082647FA
	goto 0x0826481F
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x082647FF size=0x1 source=v43_v44
	@ end @ 0x082647FF
	end
	@ Recovered proven split event command at 0x08264800
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08264800 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264F65
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x08264806 size=0x19 source=v41_hidden_entry_bulk
	@ callstd 0x05 @ 0x08264806
	callstd 0x05
	@ compare_var_to_value 0x800D, 0x0001 @ 0x08264808
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x08264780 @ 0x0826480D
	goto_if 0x01, 0x08264780
	@ compare_var_to_value 0x800D, 0x0000 @ 0x08264813
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x082647E9 @ 0x08264818
	goto_if 0x01, 0x082647E9
	@ end @ 0x0826481E
	end
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0826481F size=0x9 source=v42_bulk
	@ special 0x0184 @ 0x0826481F
	.byte 0x25
	.2byte 0x0184
	@ special 0x0186 @ 0x08264822
	.byte 0x25
	.2byte 0x0186
	@ special 0x0187 @ 0x08264825
	.byte 0x25
	.2byte 0x0187
	@ Recovered proven split event command at 0x08264828
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08264828 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264F8C
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x0826482E original_size=0x8 typed_bytes=0x2
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0826482E size=0x4 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x0826482E
	callstd 0x04
	@ release @ 0x08264830
	release
	@ end @ 0x08264831
	end
	lock
	faceplayer
	@ Recovered proven split event command at 0x08264834
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08264834 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264FC8
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x0826483A size=0x1E source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x0826483A
	callstd 0x04
	@ specialvar 0x800D, 0x018C @ 0x0826483C
	.byte 0x26
	.2byte 0x800D
	.2byte 0x018C
	@ compare_var_to_value 0x800D, 0x0000 @ 0x08264841
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x08264858 @ 0x08264846
	goto_if 0x01, 0x08264858
	@ compare_var_to_value 0x800D, 0x0001 @ 0x0826484C
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x08264874 @ 0x08264851
	goto_if 0x01, 0x08264874
	@ end @ 0x08264857
	end
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x08264858 size=0x1C source=v42_bulk
	@ specialvar 0x800D, 0x018B @ 0x08264858
	.byte 0x26
	.2byte 0x800D
	.2byte 0x018B
	@ compare_var_to_value 0x800D, 0x0000 @ 0x0826485D
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x0826487E @ 0x08264862
	goto_if 0x01, 0x0826487E
	@ compare_var_to_value 0x800D, 0x0001 @ 0x08264868
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x08264874 @ 0x0826486D
	goto_if 0x01, 0x08264874
	@ end @ 0x08264873
	end
	@ Recovered proven split event command at 0x08264874
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08264874 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_264FE6
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x0826487A size=0x4 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x0826487A
	callstd 0x04
	@ release @ 0x0826487C
	release
	@ end @ 0x0826487D
	end
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0826487E size=0x3A source=v42_bulk
	@ special 0x018D @ 0x0826487E
	.byte 0x25
	.2byte 0x018D
	@ loadword 0x00, gText_Rom_264FF8 @ 0x08264881
	loadword 0x00, gText_Rom_264FF8
	@ callstd 0x04 @ 0x08264887
	callstd 0x04
	@ checkitem 0x0111, 0x0001 @ 0x08264889
	checkitem 0x0111, 0x0001
	@ compare_var_to_value 0x800D, 0x0000 @ 0x0826488E
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x082649B6 @ 0x08264893
	goto_if 0x01, 0x082649B6
	@ loadword 0x00, gText_Rom_26509A @ 0x08264899
	loadword 0x00, gText_Rom_26509A
	@ callstd 0x05 @ 0x0826489F
	callstd 0x05
	@ compare_var_to_value 0x800D, 0x0000 @ 0x082648A1
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x082648B8 @ 0x082648A6
	goto_if 0x01, 0x082648B8
	@ compare_var_to_value 0x800D, 0x0001 @ 0x082648AC
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x082648C2 @ 0x082648B1
	goto_if 0x01, 0x082648C2
	@ end @ 0x082648B7
	end
	@ Recovered proven split event command at 0x082648B8
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x082648B8 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_2650D6
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x082648BE size=0x4 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x082648BE
	callstd 0x04
	@ release @ 0x082648C0
	release
	@ end @ 0x082648C1
	end
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x082648C2 size=0x1D source=v42_bulk
	@ fadescreen 0x01 @ 0x082648C2
	fadescreen 0x01
	@ special 0x018E @ 0x082648C4
	.byte 0x25
	.2byte 0x018E
	@ waitstate @ 0x082648C7
	waitstate
	@ compare_var_to_value 0x800D, 0xFFFF @ 0x082648C8
	compare_var_to_value 0x800D, 0xFFFF
	@ goto_if 0x01, 0x082648DF @ 0x082648CD
	goto_if 0x01, 0x082648DF
	@ compare_var_to_value 0x800D, 0xFFFF @ 0x082648D3
	compare_var_to_value 0x800D, 0xFFFF
	@ goto_if 0x05, 0x082648FE @ 0x082648D8
	goto_if 0x05, 0x082648FE
	@ end @ 0x082648DE
	end
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x082648DF size=0x1F source=v45_trusted_consumer
	@ loadword 0x00, gText_Rom_2650C6 @ 0x082648DF
	loadword 0x00, gText_Rom_2650C6
	@ callstd 0x05 @ 0x082648E5
	callstd 0x05
	@ compare_var_to_value 0x800D, 0x0001 @ 0x082648E7
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x082648B8 @ 0x082648EC
	goto_if 0x01, 0x082648B8
	@ compare_var_to_value 0x800D, 0x0000 @ 0x082648F2
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x082648C2 @ 0x082648F7
	goto_if 0x01, 0x082648C2
	@ end @ 0x082648FD
	end
	@ Recovered proven split event command at 0x082648FE
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x082648FE raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_2650E0
	@ ANALYSIS: PROVEN_UNREFERENCED_STITCHED_EVENT_CFG addr=0x08264904 raw_size=0xB4 commands=50 hard_stops=11
	@ Full bytecode/CFG identity and split final pointer operand proven; runtime reachability is not claimed.
.LStitchedEvent_08264904:
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT_FRAGMENT
	@ Event-script bytecode fragment retained as numeric command/operand data.
	callstd 0x04
	.byte 0x25 @ PROVEN_UNREFERENCED_STITCHED_EVENT_CMD special 0x018F; no matching SPECIAL_* constant
	.2byte 0x018F
	.byte 0x25 @ PROVEN_UNREFERENCED_STITCHED_EVENT_CMD special 0x0190; no matching SPECIAL_* constant
	.2byte 0x0190
	goto .LStitchedEvent_08264912
	end
.LStitchedEvent_08264912:
	applymovement 0x0004, Movement_082649C0
	waitmovement 0x0000
	delay 0x003C
	applymovement 0x0005, Movement_082649C3
	waitmovement 0x0000
	delay 0x003C
	waitse
	playmoncry 0x8005, 0x0000
	delay 0x0078
	waitmoncry
	compare_var_to_value 0x8004, 0x0001
	goto_if 0x01, .LStitchedEvent_08264947
	goto .LStitchedEvent_08264954
	end
.LStitchedEvent_08264947:
	applymovement 0x0005, Movement_082649CA
	waitmovement 0x0000
	delay 0x003C
.LStitchedEvent_08264954:
	applymovement 0x0004, Movement_082649C8
	waitmovement 0x0000
	delay 0x003C
	compare_var_to_value 0x8004, 0x0000
	goto_if 0x01, .LStitchedEvent_08264978
	compare_var_to_value 0x8004, 0x0001
	goto_if 0x01, .LStitchedEvent_08264986
	end
.LStitchedEvent_08264978:
	loadword 0x00, gText_Rom_2650FD
	callstd 0x04
	goto .LStitchedEvent_08264997
	end
.LStitchedEvent_08264986:
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT_FRAGMENT
	@ Event-script bytecode fragment retained as numeric command/operand data.
	.byte 0x25 @ PROVEN_UNREFERENCED_STITCHED_EVENT_CMD special 0x018D; no matching SPECIAL_* constant
	.2byte 0x018D
	loadword 0x00, gText_Rom_26512D
	callstd 0x04
	goto .LStitchedEvent_08264997
	end
.LStitchedEvent_08264997:
	specialvar_ 0x800D, 0x018B
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, .LStitchedEvent_082649A9
	release
	end
.LStitchedEvent_082649A9:
	loadword 0x00, gText_Rom_265168
	callstd 0x04
	.byte 0x25 @ PROVEN_UNREFERENCED_STITCHED_EVENT_CMD special 0x0192; no matching SPECIAL_* constant
	.2byte 0x0192
	release
	end
	loadword 0x00, gText_Rom_265035
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x082649BC original_size=0x60 typed_bytes=0x4B
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x082649BC size=0x4 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x082649BC
	callstd 0x04
	@ release @ 0x082649BE
	release
	@ end @ 0x082649BF
	end
	@ ANALYSIS: PROVEN_MOVEMENT_SEQUENCE addr=0x082649C0 size=0x3 source_backed=YES
Movement_082649C0:
	.byte 0x03, 0x13, 0xFE
	@ ANALYSIS: PROVEN_MOVEMENT_SEQUENCE addr=0x082649C3 size=0x3 source_backed=YES
Movement_082649C3:
	.byte 0x02, 0x13, 0xFE
	@ ANALYSIS: PROVEN_MOVEMENT_SUBSEQUENCE addr=0x082649C6 size=0x2 source=v49_owner_second_FE_sequence
	.globl Movement_082649C6
Movement_082649C6: @ 0x082649C6
	.byte 0x00, 0xFE
	@ ANALYSIS: PROVEN_MOVEMENT_SEQUENCE addr=0x082649C8 size=0x2 source_backed=YES
Movement_082649C8:
	.byte 0x3E, 0xFE
	@ ANALYSIS: PROVEN_MOVEMENT_SEQUENCE addr=0x082649CA size=0x5 source_backed=YES
Movement_082649CA:
	.byte 0x51, 0x48, 0x51, 0x48, 0xFE
	specialvar_ 0x800D, 0x0191
	.byte 0x25 @ special 0x018D; no matching SPECIAL_* constant
	.2byte 0x018D
	.byte 0x25 @ special 0x0190; no matching SPECIAL_* constant
	.2byte 0x0190
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08264A12
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08264A25
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, 0x08264A38
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, 0x08264A4B
	compare_var_to_value 0x800D, 0x0004
	goto_if 0x01, 0x08264A5E
	end
	lock
	faceplayer
	waitse
	playmoncry 0x8005, 0x0000
	@ Recovered proven split event command at 0x08264A1A
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08264A1A raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_2651AF
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08264A20 original_size=0x48 typed_bytes=0x41
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x08264A20 size=0x5 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x08264A20
	callstd 0x04
	@ waitmoncry @ 0x08264A22
	waitmoncry
	@ release @ 0x08264A23
	release
	@ end @ 0x08264A24
	end
	lock
	faceplayer
	waitse
	playmoncry 0x8005, 0x0000
	loadword 0x00, gText_Rom_2651D7
	callstd 0x04
	waitmoncry
	release
	end
	lock
	faceplayer
	waitse
	playmoncry 0x8005, 0x0000
	loadword 0x00, gText_Rom_2651C3
	callstd 0x04
	waitmoncry
	release
	end
	lock
	faceplayer
	waitse
	playmoncry 0x8005, 0x0000
	loadword 0x00, gText_Rom_2651B8
	callstd 0x04
	waitmoncry
	release
	end
	lock
	faceplayer
	waitse
	playmoncry 0x8005, 0x0000
	@ Recovered proven split event command at 0x08264A66
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08264A66 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_2651CF
	@ Decoded event bytecode: exact ROM size 0x5
	callstd 0x04
	waitmoncry
	release
	end
