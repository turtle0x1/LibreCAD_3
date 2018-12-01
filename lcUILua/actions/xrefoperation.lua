Xrefoperation = {}
Xrefoperation.__index = Xrefoperation

setmetatable(Xrefoperation, {
    __index = Operations,
    __call = function (o, ...)
        local self = setmetatable({}, o)
        self:_init(...)
        return self
    end,
})

function Xrefoperation:_init(id)
    message("Opening xref manager", id)
    local x = lc:XrefManager();
end
