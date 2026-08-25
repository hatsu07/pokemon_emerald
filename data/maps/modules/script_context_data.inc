	@ Indexed by condition * 3 + ScriptContext.comparisonResult.
	.byte 1, 0, 0 @ condition 0
	.byte 0, 1, 0 @ condition 1
	.byte 0, 0, 1 @ condition 2
	.byte 1, 1, 0 @ condition 3
	.byte 0, 1, 1 @ condition 4
	.byte 1, 0, 1 @ condition 5
	.byte 0, 0 @ padding
