	@ src/battle_debug.c:417 battle_debug_line_417
	.globl gText_Rom_72C0D2
gText_Rom_72C0D2: @ 0x0872C0D2
	.string "にじ$"
	.if (. - gText_Rom_72C0D2) > 0x3
	.error "gText_Rom_72C0D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_72C0D2) < 0x3
	.space 0x3 - (. - gText_Rom_72C0D2)
	.endif
	.incbin "baserom.gba", 0x72c0d5, 0x87ff5

	@ src/battle_debug.c:440 battle_debug_line_440
	.globl gText_Rom_7B40CA
gText_Rom_7B40CA: @ 0x087B40CA
	.string "ぜんち$"
	.if (. - gText_Rom_7B40CA) > 0x4
	.error "gText_Rom_7B40CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_7B40CA) < 0x4
	.space 0x4 - (. - gText_Rom_7B40CA)
	.endif
	.incbin "baserom.gba", 0x7b40ce, 0x65fa0

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_81A06E
gText_Rom_81A06E: @ 0x0881A06E
	.string "ちゃん$"
	.if (. - gText_Rom_81A06E) > 0x4
	.error "gText_Rom_81A06E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_81A06E) < 0x4
	.space 0x4 - (. - gText_Rom_81A06E)
	.endif
	.incbin "baserom.gba", 0x81a072, 0x5b441

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8754B3
gText_Rom_8754B3: @ 0x088754B3
	.string "………$"
	.if (. - gText_Rom_8754B3) > 0x4
	.error "gText_Rom_8754B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8754B3) < 0x4
	.space 0x4 - (. - gText_Rom_8754B3)
	.endif
	.incbin "baserom.gba", 0x8754b7, 0x1f

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8754D6
gText_Rom_8754D6: @ 0x088754D6
	.string "………$"
	.if (. - gText_Rom_8754D6) > 0x4
	.error "gText_Rom_8754D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8754D6) < 0x4
	.space 0x4 - (. - gText_Rom_8754D6)
	.endif
	.incbin "baserom.gba", 0x8754da, 0xb5b

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_876035
gText_Rom_876035: @ 0x08876035
	.string "………$"
	.if (. - gText_Rom_876035) > 0x4
	.error "gText_Rom_876035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_876035) < 0x4
	.space 0x4 - (. - gText_Rom_876035)
	.endif
	.space 0x5, 0xB0

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_87603E
gText_Rom_87603E: @ 0x0887603E
	.string "………$"
	.if (. - gText_Rom_87603E) > 0x4
	.error "gText_Rom_87603E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_87603E) < 0x4
	.space 0x4 - (. - gText_Rom_87603E)
	.endif
	.space 0x5, 0xB0

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_876047
gText_Rom_876047: @ 0x08876047
	.string "………$"
	.if (. - gText_Rom_876047) > 0x4
	.error "gText_Rom_876047 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_876047) < 0x4
	.space 0x4 - (. - gText_Rom_876047)
	.endif
	.incbin "baserom.gba", 0x87604b, 0x2b92a

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8A1975
gText_Rom_8A1975: @ 0x088A1975
	.string "………$"
	.if (. - gText_Rom_8A1975) > 0x4
	.error "gText_Rom_8A1975 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8A1975) < 0x4
	.space 0x4 - (. - gText_Rom_8A1975)
	.endif
	.incbin "baserom.gba", 0x8a1979, 0xee06

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8B077F
gText_Rom_8B077F: @ 0x088B077F
	.string "………$"
	.if (. - gText_Rom_8B077F) > 0x4
	.error "gText_Rom_8B077F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8B077F) < 0x4
	.space 0x4 - (. - gText_Rom_8B077F)
	.endif
	.incbin "baserom.gba", 0x8b0783, 0x9de5
	.globl gUnknown_88BA568
gUnknown_88BA568: @ 0x088BA568
	.incbin "baserom.gba", 0x8ba568, 0x14e48

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8CF3B0
gText_Rom_8CF3B0: @ 0x088CF3B0
	.string "………$"
	.if (. - gText_Rom_8CF3B0) > 0x4
	.error "gText_Rom_8CF3B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8CF3B0) < 0x4
	.space 0x4 - (. - gText_Rom_8CF3B0)
	.endif
	.incbin "baserom.gba", 0x8cf3b4, 0x26d12

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8F60C6
gText_Rom_8F60C6: @ 0x088F60C6
	.string "………$"
	.if (. - gText_Rom_8F60C6) > 0x4
	.error "gText_Rom_8F60C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8F60C6) < 0x4
	.space 0x4 - (. - gText_Rom_8F60C6)
	.endif
	.incbin "baserom.gba", 0x8f60ca, 0x18c8a
	.globl gUnknown_890ED54
gUnknown_890ED54: @ 0x0890ED54
	.incbin "baserom.gba", 0x90ed54, 0x150
	.globl gUnknown_890EEA4
gUnknown_890EEA4: @ 0x0890EEA4
	.incbin "baserom.gba", 0x90eea4, 0x2c
	.globl gUnknown_890EED0
gUnknown_890EED0: @ 0x0890EED0
	.incbin "baserom.gba", 0x90eed0, 0xc
	.globl gUnknown_890EEDC
gUnknown_890EEDC: @ 0x0890EEDC
	.incbin "baserom.gba", 0x90eedc, 0x18
	.globl gUnknown_890EEF4
gUnknown_890EEF4: @ 0x0890EEF4
	.incbin "baserom.gba", 0x90eef4, 0x34
	.globl gUnknown_890EF28
gUnknown_890EF28: @ 0x0890EF28
	.incbin "baserom.gba", 0x90ef28, 0x30
	.globl gUnknown_890EF58
gUnknown_890EF58: @ 0x0890EF58
	.incbin "baserom.gba", 0x90ef58, 0x100
	.globl gUnknown_890F058
gUnknown_890F058: @ 0x0890F058
	.incbin "baserom.gba", 0x90f058, 0x104
	.globl gUnknown_890F15C
gUnknown_890F15C: @ 0x0890F15C
	.space 0x10, 0x20
	.globl gUnknown_890F16C
gUnknown_890F16C: @ 0x0890F16C
	.space 0x10, 0x30
	.globl gUnknown_890F17C
gUnknown_890F17C: @ 0x0890F17C
	.incbin "baserom.gba", 0x90f17c, 0x4
	.globl gUnknown_890F180
gUnknown_890F180: @ 0x0890F180
	.incbin "baserom.gba", 0x90f180, 0x4
	.globl gUnknown_890F184
gUnknown_890F184: @ 0x0890F184
	.incbin "baserom.gba", 0x90f184, 0x14
	.globl gUnknown_890F198
gUnknown_890F198: @ 0x0890F198
	.incbin "baserom.gba", 0x90f198, 0x8
	.globl gUnknown_890F1A0
gUnknown_890F1A0: @ 0x0890F1A0
	.incbin "baserom.gba", 0x90f1a0, 0x14
	.globl gUnknown_890F1B4
gUnknown_890F1B4: @ 0x0890F1B4
	.incbin "baserom.gba", 0x90f1b4, 0x1c
	.globl gUnknown_890F1D0
gUnknown_890F1D0: @ 0x0890F1D0
	.incbin "baserom.gba", 0x90f1d0, 0x4
	.globl gUnknown_890F1D4
gUnknown_890F1D4: @ 0x0890F1D4
	.incbin "baserom.gba", 0x90f1d4, 0x4
	.globl gUnknown_890F1D8
gUnknown_890F1D8: @ 0x0890F1D8
	.incbin "baserom.gba", 0x90f1d8, 0xc
	.globl gUnknown_890F1E4
gUnknown_890F1E4: @ 0x0890F1E4
	.incbin "baserom.gba", 0x90f1e4, 0x4
	.globl gUnknown_890F1E8
gUnknown_890F1E8: @ 0x0890F1E8
	.incbin "baserom.gba", 0x90f1e8, 0x4
	.globl gUnknown_890F1EC
gUnknown_890F1EC: @ 0x0890F1EC
	.incbin "baserom.gba", 0x90f1ec, 0x30
	.globl gUnknown_890F21C
gUnknown_890F21C: @ 0x0890F21C
	.incbin "baserom.gba", 0x90f21c, 0x8
	.globl gUnknown_890F224
gUnknown_890F224: @ 0x0890F224
	.incbin "baserom.gba", 0x90f224, 0x4
	.globl gUnknown_890F228
gUnknown_890F228: @ 0x0890F228
	.incbin "baserom.gba", 0x90f228, 0xc
	.globl gUnknown_890F234
gUnknown_890F234: @ 0x0890F234
	.incbin "baserom.gba", 0x90f234, 0xc8
	.globl gUnknown_890F2FC
gUnknown_890F2FC: @ 0x0890F2FC
	.incbin "baserom.gba", 0x90f2fc, 0x50
	.globl gUnknown_890F34C
gUnknown_890F34C: @ 0x0890F34C
	.incbin "baserom.gba", 0x90f34c, 0x4
	.globl gUnknown_890F350
gUnknown_890F350: @ 0x0890F350
	.incbin "baserom.gba", 0x90f350, 0x24
	.globl gUnknown_890F374
gUnknown_890F374: @ 0x0890F374
	.incbin "baserom.gba", 0x90f374, 0x30e0
	.globl gUnknown_8912454
gUnknown_8912454: @ 0x08912454
	.incbin "baserom.gba", 0x912454, 0x348c
	.globl gUnknown_89158E0
gUnknown_89158E0: @ 0x089158E0
	.space 0x1EA720, 0xFF
