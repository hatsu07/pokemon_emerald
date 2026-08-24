@ Semanticized trade/evolution/Berry Blender rodata.
@ ROM addresses are verification comments only.

	.globl gTradeWindowTemplates
gTradeWindowTemplates: @ 0x0830D27C
	@ struct WindowTemplate[2]: trade message window + dummy terminator.
	.byte 0, 2, 15, 26, 4, 0
	.2byte 0x0040 @ entry 0
	.byte 255, 0, 0, 0, 0, 0
	.2byte 0x0000 @ entry 1

